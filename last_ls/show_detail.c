/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls_l.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 18:38:11 by hseffian          #+#    #+#             */
/*   Updated: 2019/11/03 19:19:29 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

char type_of_file(int mode)
{
	if ((S_IFMT & mode) == S_IFIFO)
		return ('p');
	else if ((S_IFMT & mode) == S_IFCHR)
		return ('c');
	else if ((S_IFMT & mode) == S_IFDIR)
		return ('d');
	else if ((S_IFMT & mode) == S_IFBLK)
		return ('b');
	else if ((S_IFMT & mode) == S_IFLNK)
		return ('l');
	else if ((S_IFMT & mode) == S_IFSOCK)
		return ('s');
	else if ((S_IFMT & mode) == S_IFWHT)
		return ('w');
	else
		return ('-');
}

void		mode_to_letters(int mode, char str[])
{
	ft_strcpy(str, "**********");
	str[0] = type_of_file(mode);
	str[1] = (mode & S_IRUSR) ? 'r' : '-';
	str[2] = (mode & S_IWUSR) ? 'w' : '-';
	str[3] = (mode & S_IXUSR) ? 'x' : '-';
	str[4] = (mode & S_IRGRP) ? 'r' : '-';
	str[5] = (mode & S_IWGRP) ? 'w' : '-';
	str[6] = (mode & S_IXGRP) ? 'x' : '-';
	str[7] = (mode & S_IROTH) ? 'r' : '-';
	str[8] = (mode & S_IWOTH) ? 'w' : '-';
	str[9] = (mode & S_IXOTH) ? 'x' : '-';
}

// void	stock_in_tb_two_d(t_open *open_f)
// {
// 	int i;
// 	int j;

// 	i = -1;
// 	while (open_f->string[i] != '\0')
// 	{
// 		j = -1;
// 		while (open_f->string[i][j] != '\0')
// 		{
// 			string[i][j] = 
// 		}
// 	}
// }

void		show_file_info(char *filename, t_open *open_f)
{
	int i;

	i = -1;
	open_f->print_detail.g = getgrgid(open_f->s.st_gid);
	open_f->print_detail.p = getpwuid(open_f->s.st_uid);
	ft_strcpy(open_f->print_detail.usr, open_f->print_detail.p->pw_name);
	ft_strcpy(open_f->print_detail.grp, open_f->print_detail.g->gr_name);
	mode_to_letters(open_f->s.st_mode, open_f->print_detail.modestr);
	printf("%s\t%d\t%-8s %-8s ", open_f->print_detail.modestr, open_f->s.st_nlink, open_f->print_detail.usr, open_f->print_detail.grp);
	printf("%8ld %.12s ", (long)open_f->s.st_size, 4 + ctime(&open_f->s.st_mtime));
	printf("%s\n", filename);
	//stor output in tabl 2 demantion in new struct 
	//and the tbl from simple stock
	// stock_in_tb_two_d(open_f);
}









// void		dostat(char *link, char *filename)
// {
// 	struct stat s;

// 	if (lstat(link, &s) == -1)
// 		perror(filename);
// 	else
// 		show_file_info(filename, &s);
// }

// char		*tab_join(char *str, char *jn)
// {
// 	char		*ret;

// 	ret = ft_strjoin(str, "/");
// 	ret = ft_strjoin(ret, jn);
// 	return (ret);
// }

// void		do_ls_l(char *str)
// {
// 	DIR				*dir;
// 	char			*link;
// 	struct dirent	*r;

// 	if ((dir = opendir(str)) == NULL)
// 		perror("ls");
// 	else
// 	{
// 		while ((r = readdir(dir)) != NULL)
// 		{
// 			if (r->d_name[0] != '.')
// 			{
// 				link = tab_join(str, r->d_name);
// 				dostat(link, r->d_name);
// 			}
// 		}
// 	}
// 	if (dir)
// 		closedir(dir);
// }