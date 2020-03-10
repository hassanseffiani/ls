#include "ft_ls.h"

int check_type(int mode)
{
    if (S_ISDIR(mode))
        return (1);
    return (2);
}

char		*tab_join2(char *str, char *jn)
{
	char		*ret;

	ret = ft_strjoin(str, "/");
	ret = ft_strjoin(ret, jn);
	return (ret);
}

void open_directory(char *str)
{
    DIR *dir;
    struct dirent   *r;
    struct stat     s;
    char			*link;
    
            // int g = check_type(s.st_mode);
            // ft_putnbr(g);
    if ((dir = opendir(str)) == NULL)
        perror("ft_ls");
    else
    {
        while ((r = readdir(dir)) != NULL)
        {
            if (check_type(s.st_mode) == 1)
            {
                link = tab_join2(str, r->d_name);
                open_directory(link);
            }
            else
            {
                printf("%s\n", r->d_name);
            }
            
            // printf("%s\t", r->d_name);
            // if (lstat(r->d_name, &s) )
            // else
                // perror("ls");
        }
                printf("\n");

	}
    if (dir)
	    closedir(dir);
}