
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_ls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 22:48:46 by hseffian          #+#    #+#             */
/*   Updated: 2019/10/31 22:48:47 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void affichage_simple(char **s)
{
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        ft_putstr(s[i]);
        ft_putstr("\t");
        i++;
    }
}

void affichage_detail(char **s, t_open *open_f)
{
    printf("%s\t%d\t%-8s %-8s ", open_f->print_detail.modestr, open_f->s.st_nlink, open_f->print_detail.usr, open_f->print_detail.grp);
	printf("%8ld %.12s ", (long)open_f->s.st_size, 4 + ctime(&open_f->s.st_mtime));
	// printf("%s\n", filename);
}

int check_type(int mode)
{
    if (S_ISDIR(mode))
        return (1);
    return (0);
}

char		*tab_join2(char *str, char *jn)
{
	char		*ret;

	ret = ft_strjoin(str, "/");
	ret = ft_strjoin(ret, jn);
	return (ret);
}

void check_r(char **Directory, char **tab, int op)
{
    if (Directory[0])
    {
        int  i = 0;
        tab = ft_strsplit(Directory[0], ':');
        free(Directory[0]);
        while (tab[i])
        {
            ft_putstr(tab[i]);
            ft_putendl(":");
            open_directory(tab[i], op);
            ft_strdel(&tab[i]);
            i++;
        }
        free(tab);
    }
}

void open_directory(char *str, int op)
{
    t_open open_f;
    
    open_f.i = -1;
    open_f.Directory[0] = NULL;
    if ((open_f.dir = opendir(str)) == NULL)
        perror("ft_ls");
    else
    {
        while ((open_f.r = readdir(open_f.dir)) != NULL)
        {
            if (open_f.r->d_name[0] != '.' || (op & a))
			{
				open_f.link = tab_join2(str, open_f.r->d_name);
                lstat(open_f.link, &open_f.s);
                if ((op & R) && check_type(open_f.s.st_mode))
                {
                    open_f.Directory[1] = open_f.Directory[0];
                    open_f.Directory[0] = ft_strjoin(open_f.Directory[1], open_f.link);
                    ft_strdel(&open_f.Directory[1]);
                    open_f.Directory[1] = open_f.Directory[0];
                    open_f.Directory[0] = ft_strjoin(open_f.Directory[1], ":");
                    ft_strdel(&open_f.Directory[1]);
                }
                //call function show detail....
                // show_file_info(open_f.r->d_name, &open_f);
                // ft_putstr(open_fprint_detail.modestr);
                //stock
			}
            open_f.str[++open_f.i] = open_f.r->d_name;
        }
        // if (!(op & l))
            affichage_simple(open_f.str);
        // else
            // affichage_detail(open_f.str, &open_f);
    }
    check_r(open_f.Directory, open_f.tab,op);
    if (open_f.dir)
	    closedir(open_f.dir);
}

int main(int ac, char **av)
{   t_main main;
    main.opt = get_option(&*av, &main.i);
    
    if (av[main.i])
        open_directory(av[main.i], main.opt);
    else 
        open_directory(".", main.opt);
	return (0);
}