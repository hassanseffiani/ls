// #include "ft_ls.h"

// // void ft_ls(const char *str)
// // {
// // 	DIR     *dir;  
// // 	struct dirent   *r;

// //     if ((dir = opendir(str)) == NULL)
// //         perror("lsd");
// //     else
// //     {
// // 		while ((r = readdir(dir)) != NULL)
// // 		{ 
// //             if (r->d_name[0] != '.')
// //                 printf("%s\n", r->d_name);
// // 		}
// // 	}
// //     if (dir)
// // 	closedir(dir);
// // }


// // void ft_ls_a(const char *str)
// // {
// // 	DIR     *dir;  
// // 	struct dirent   *r;
// // 	struct stat s;
    
// //     if ((dir = opendir(str)) == NULL)
// //         perror("ft_ls");
// //     else
// //     {
// //         while ((r = readdir(dir)) != NULL)
// //         { 
// //             // printf("%s\t", r->d_name);
// //             // if (lstat(r->d_name, &s) )
// //                     printf("%s\t", r->d_name);
// //             // else
// //                 // perror("ls");
// //         }
// // 	}
// //     if (dir)
// // 	closedir(dir);
// // }

// int check_type(int mode)
// {
//     if (S_ISDIR(mode))
//         return (1);
//     return (0);
// }

// char		*tab_join2(char *str, char *jn)
// {
// 	char		*ret;

// 	ret = ft_strjoin(str, "/");
// 	ret = ft_strjoin(ret, jn);
// 	return (ret);
// }

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

// void open_directory(char *str, int op)
// {
//     DIR             *dir;
//     struct dirent   *r;
//     struct stat     s;
//     char			*link;
//     char            *Directory[2];
//     char            **tab;
//     int size_block;
//     // int g = check_type(s.st_mode);
//     // ft_putnbr(g);
//     Directory[0] = NULL;
//     if ((dir = opendir(str)) == NULL)
//         perror("ft_ls");
//     else
//     {
//         while ((r = readdir(dir)) != NULL)
//         {
//             if (r->d_name[0] != '.' || (op & a))
// 			{
//                 size_block += s.st_blocks;
// 				link = tab_join2(str, r->d_name);
//                 lstat(link, &s);
                if ((op & R) && check_type(s.st_mode))
                {
                    Directory[1] = Directory[0];
                    Directory[0] = ft_strjoin(Directory[1], link);
                    ft_strdel(&Directory[1]);
                    Directory[1] = Directory[0];
                    Directory[0] = ft_strjoin(Directory[1], ":");
                    ft_strdel(&Directory[1]);
                }
                if (!(op & l))
                    printf("%s\t", r->d_name);
                else
                    dostat(link, r->d_name, size_block);
                // if (r->d_name[0])
                    // printf("%s ", r->d_name);
                // else
                // printf("\n");
			}
            // if (op & a)
                    // printf("%s\t", r->d_name);
            // printf("\n");
            // printf("%s\t", r->d_name);
            // if ((op & l))
                // dostat(link, r->d_name);
            // else
                //print_detail(str, tab)
            // ft_putchar('\n');
        }
    }
    check_r(Directory, tab,op);
//     if (dir)
// 	    closedir(dir);
// }

// int main(int ac, char **av)
// {
//     int i;
//     int opt;
//     opt = get_option(&*av, &i);
    
//     // if (opt & l)
//     // {
//     //     if (av[i])
//     //         do_ls_l(av[i]);
//     //     else
//     //         do_ls_l(".");
//     // }
//     if (av[i])
//         open_directory(av[i], opt);
//     else 
//         open_directory(".", opt);
//    /* else if (opt & a)
//     {
//         if (av[i])
//             ft_ls_a(av[i]);
//         else
//             ft_ls_a(".");
//     }
//     else if (opt & R)
//     {
//         if(av[i])
//             open_directory(av[i], op);
//         else
//             open_directory(".", op);
//     }
//     else
//     {
//         if (av[i])
//             ft_ls(av[i]);
//         else
//             ft_ls(".");
//     }*/
// 	return (0);
// }

// -------------------------------------- ls-l

// void		mode_to_letters(int mode, char str[])
// {
// 	ft_strcpy(str, "**********");
// 	str[0] = S_ISDIR(mode) ? 'd' : '-';
// 	str[1] = (mode & S_IRUSR) ? 'r' : '-';
// 	str[2] = (mode & S_IWUSR) ? 'w' : '-';
// 	str[3] = (mode & S_IXUSR) ? 'x' : '-';
// 	str[4] = (mode & S_IRGRP) ? 'r' : '-';
// 	str[5] = (mode & S_IWGRP) ? 'w' : '-';
// 	str[6] = (mode & S_IXGRP) ? 'x' : '-';
// 	str[7] = (mode & S_IROTH) ? 'r' : '-';
// 	str[8] = (mode & S_IWOTH) ? 'w' : '-';
// 	str[9] = (mode & S_IXOTH) ? 'x' : '-';
// }

// void		show_file_info(char *filename, struct stat *info_p, int size)
// {
// 	char			modestr[11];
// 	char			usr[10];
// 	char			grp[10];
// 	struct passwd	*p;
// 	struct group	*g;

// 	g = getgrgid(info_p->st_gid);
// 	p = getpwuid(info_p->st_uid);
// 	ft_strcpy(usr, p->pw_name);
// 	ft_strcpy(grp, g->gr_name);
// 	mode_to_letters(info_p->st_mode, modestr);
// 	printf("%s\t%d\t%-8s %-8s ", modestr, info_p->st_nlink, usr, grp);
// 	printf("%8ld %.12s ", (long)info_p->st_size, 4 + ctime(&info_p->st_mtime));
// 	printf("%s\n", filename);
// }

// void		dostat(char *link, char *filename, int size)
// {
// 	struct stat s;

// 	if (lstat(link, &s) == -1)
// 		perror(filename);
// 	else
// 	{
// 		// ft_putnbr(size);
// 		show_file_info(filename, &s, size);
// 	}
// }

// char		*tab_join(char *str, char *jn)
// {
// 	char		*ret;

// 	ret = ft_strjoin(str, "/");
// 	ret = ft_strjoin(ret, jn);
// 	return (ret);
// }

// // void		do_ls_l(char *str)
// // {
// // 	DIR				*dir;
// // 	char			*link;
// // 	struct dirent	*r;

// // 	if ((dir = opendir(str)) == NULL)
// // 		perror("ls");
// // 	else
// // 	{
// // 		while ((r = readdir(dir)) != NULL)
// // 		{
// // 			if (r->d_name[0] != '.')
// // 			{
// // 				link = tab_join(str, r->d_name);
// // 				dostat(link, r->d_name);
// // 			}
// // 		}
// // 	}
// // 	if (dir)
// // 		closedir(dir);
// // }

// ---------------------------------------------- option ls

// void    gesterror(char c)
// {
//     if (c != 'l' && c != 'a' && c != 'R')
//     {
//         printf("illegal %c",c);
//         exit (1);
//     }
// }

// void    add_option(char *parm, unsigned short *op)
// {
//     int i;

//     i = 1;
//     while (parm[i])
//     {
//         if (parm[i] == 'l' && !(*op & l))
//             (*op)+= l;
//         else if (parm[i] == 'a' && !(*op & a))
//             (*op) += a;
//         else if (parm[i] == 'R' && !(*op & R))
//             (*op) += R;
//         else if (parm[i] != '-')
//             gesterror(parm[i]);
//         i++;
//     }
// }

// int get_option(char **av, int *index)
// {
//     unsigned short op;
//     size_t i = 1;
//     size_t j = 1;

//     //ls -a -l -b - -a libft/ makefile 
//     while (av[i] && av[i][0] == '-' && av[i][1])
//         i++;
//     while (j < i)
//         add_option(av[j++], &op);
//     *index = i;
//     // sorts
    

//     return (op);
// }

// void walo()
// {
//     // if (op & A)
//     //     /* afficher en detail */
//     // else if (op & C)
//     //     /* affiche simple */
//     // if (op & B)
//     //     ft_putchar('b');
//     // if (op & D)
//     //     ft_putchar('d');

//     // int main(int ac, char **av)
//     // {
//     //     unsigned short op;
//     //     size_t i = 1;
//     //     size_t j = 1;

//     //     //ls -a -l -b - -a libft/ makefile 
//     //     while (av[i] && av[i][0] == '-' && av[i][1])
//     //         i++;
//     //     while (j < i)
//     //         add_option(av[j++], &op);
//     //     // sorts
        
//     //     if (op & A)
//     //         ft_putchar('a');
//     //     if (op & C)
//     //         ft_putchar('c');
//     //     if (op & B)
//     //         ft_putchar('b');
//     //     if (op & D)
//     //         ft_putchar('d');
//     //     return (op);
//     // }

//     // r = 15 = 00001111 B = 0010
// }