/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stat.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 14:27:09 by hseffian          #+#    #+#             */
/*   Updated: 2019/10/30 14:40:44 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

// void file_stat(const char *str)
// {
// 	DIR *d = opendir(str); 
// 	if (d) {
// 		char *ch;
// 		struct dirent *e; 
// 		char groupname[200]; 
// 		char username[200]; 
// 		struct stat s; 
// 		while ((e=readdir(d)) != NULL)
// 		{ 
// 			if (stat(e->d_name, &s) > -1)
// 			{
// 				printf("Type: %s\n", e->d_name);
// 				printf("Mode: ");
// 				printf((S_ISDIR(s.st_mode))? "d" : "-");
// 				printf((s.st_mode & S_IRUSR)? "r" : "-");
// 				printf((s.st_mode & S_IWUSR)? "w" : "-");
// 				printf((s.st_mode & S_IXUSR)? "x" : "-");
// 				printf((s.st_mode & S_IRGRP)? "r" : "-");
// 				printf((s.st_mode & S_IWGRP)? "w" : "-");
// 				printf((s.st_mode & S_IXGRP)? "x" : "-");
// 				printf((s.st_mode & S_IROTH)? "r" : "-");
// 				printf((s.st_mode & S_IWOTH)? "w" : "-");
// 				printf((s.st_mode & S_IXOTH)? "x\n" : "-\n");
// 				printf("Nombre de liens: %hu\n", s.st_nlink);
// 				struct passwd *p = getpwuid(s.st_uid); 
// 				if (p) 
// 					ft_strcpy(username, p->pw_name);  // name
// 				struct group *g = getgrgid(s.st_gid); 
// 				if (g) 
// 					ft_strcpy(groupname, g->gr_name);  // name
// 				ch = ctime(&s.st_ctime);
// 				printf("User: %s\nGroupe: %s\nTaille: %lld octets\nDate de derniere modification : %s\n\n", username, groupname,(long long)s.st_size,ch);
// 			}
// 			else
// 				perror("ls"); 
// 		} 
// 	}
// 	else
// 		perror("ls1");
// 	closedir(d);
// }
// void ft_ls(const char *str)
// {
// 	DIR *d = opendir(str); 
// 	if (d) {
// 		char *ch;
// 		struct dirent *e; 
// 		char groupname[200]; 
// 		char username[200]; 
// 		struct stat s;
// 		int i,j;
// 		while ((e=readdir(d)) != NULL)
// 		{ 
// 			if (stat(e->d_name, &s) > -1)
// 			{
// 				if (e->d_name[0] != '.')
// 					printf("%s\t", e->d_name);
// 			}
// 			else
// 				perror("ls"); 
// 		}
// 		printf("\n");
// 	}
// 	else
// 		perror("ls1");
// 	closedir(d);
// }

// void ft_ls_l(const char *str)
// {
// 	DIR *d = opendir(str); 
// 	if (d) {
// 		char *ch;
// 		struct dirent *e; 
// 		char groupname[200]; 
// 		char username[200]; 
// 		struct stat s; 
// 		int size;
// 		size = 0;
// 		while ((e=readdir(d)) != NULL)
// 		{ 
// 			if (stat(e->d_name, &s) > -1)
// 			{
// 				if (e->d_name[0] != '.')
// 				{
// 					size += s.st_blocks;
// 					printf((S_ISDIR(s.st_mode))? "\nd" : "\n-");
// 					printf((s.st_mode & S_IRUSR)? "r" : "-");
// 					printf((s.st_mode & S_IWUSR)? "w" : "-");
// 					printf((s.st_mode & S_IXUSR)? "x" : "-");
// 					printf((s.st_mode & S_IRGRP)? "r" : "-");
// 					printf((s.st_mode & S_IWGRP)? "w" : "-");
// 					printf((s.st_mode & S_IXGRP)? "x" : "-");
// 					printf((s.st_mode & S_IROTH)? "r" : "-");
// 					printf((s.st_mode & S_IWOTH)? "w" : "-");
// 					printf((s.st_mode & S_IXOTH)? "x\t" : "-\t");
// 					printf("%hu ", s.st_nlink);
// 					struct passwd *p = getpwuid(s.st_uid); 
// 					if (p) 
// 						ft_strcpy(username, p->pw_name);  // name
// 					struct group *g = getgrgid(s.st_gid); 
// 					if (g) 
// 						ft_strcpy(groupname, g->gr_name);  // name
// 					ch = ctime(&s.st_ctime);
// 					printf("%s\t%s\t%lld\t%s", username, groupname,(long long)s.st_size,ch);
// 					printf("%s",e->d_name);
// 				}
// 			}
// 			else
// 				perror("ls"); 
// 		}
// 		printf("\n");
// 	}
// 	else
// 		perror("ls1");
// 	closedir(d);
// }

// int main(int ac, char **av)
// {
// 	// if (ac == 1)
// 	// ft_ls(".");
// 	if (ac == 2)
// 	{
// 		if (ft_strcmp(av[1], "-l") == 0) 
// 			ft_ls_l(".");
// 		// file_stat(av[1]);	
// 	}
// 	return (0);
// }
