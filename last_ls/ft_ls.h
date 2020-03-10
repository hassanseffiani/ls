/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 12:36:32 by hseffian          #+#    #+#             */
/*   Updated: 2019/10/30 12:36:33 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LS_H
#define FT_LS_H
#define l 1
#define a 2
#define R 4
#include "libft/libft.h"
#include <stdio.h> 
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <pwd.h> 
#include <grp.h>
#include <time.h>


typedef struct  s_main
{
    int i;
    int opt;
}               t_main;

typedef struct  s_print_detail
{
    char			modestr[11];
	char			usr[10];
	char			grp[10];
	struct passwd	*p;
	struct group	*g;
}               t_print_detail;

typedef struct s_open
{
    int i;
    DIR             *dir;
    struct dirent   *r;
    struct stat     s;
    char            *link;
    char            *Directory[2];
    char            **tab;
    char            *str[99];
    char            *string[99];
    t_print_detail  print_detail;
}               t_open;


int     get_option(char **av, int *index);
void    do_ls_l(char *str);
void	show_file_info(char *filename, t_open *open_f);
// void open_directory(char *str, int op);
void		dostat(char *link, char *filename);
// void open(char *str, t_directory *dir);
void open_directory(char *str, int op);

#endif