/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   option.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 12:14:48 by hseffian          #+#    #+#             */
/*   Updated: 2019/11/07 12:14:54 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void    gesterror(char c)
{
    if (c != 'l' && c != 'a' && c != 'R')
    {
        printf("illegal %c",c);
        exit (1);
    }
}

void    add_option(char *parm, unsigned short *op)
{
    int i;

    i = 1;
    while (parm[i])
    {
        if (parm[i] == 'l' && !(*op & l))
            (*op)+= l;
        else if (parm[i] == 'a' && !(*op & a))
            (*op) += a;
        else if (parm[i] == 'R' && !(*op & R))
            (*op) += R;
        else if (parm[i] != '-')
            gesterror(parm[i]);
        i++;
    }
}

int get_option(char **av, int *index)
{
    unsigned short op;
    size_t i = 1;
    size_t j = 1;

    //ls -a -l -b - -a libft/ makefile 
    while (av[i] && av[i][0] == '-' && av[i][1])
        i++;
    while (j < i)
        add_option(av[j++], &op);
    *index = i;
    // sorts
    return (op);
}









































void walo()
{
    // if (op & A)
    //     /* afficher en detail */
    // else if (op & C)
    //     /* affiche simple */
    // if (op & B)
    //     ft_putchar('b');
    // if (op & D)
    //     ft_putchar('d');

    // int main(int ac, char **av)
    // {
    //     unsigned short op;
    //     size_t i = 1;
    //     size_t j = 1;

    //     //ls -a -l -b - -a libft/ makefile 
    //     while (av[i] && av[i][0] == '-' && av[i][1])
    //         i++;
    //     while (j < i)
    //         add_option(av[j++], &op);
    //     // sorts
        
    //     if (op & A)
    //         ft_putchar('a');
    //     if (op & C)
    //         ft_putchar('c');
    //     if (op & B)
    //         ft_putchar('b');
    //     if (op & D)
    //         ft_putchar('d');
    //     return (op);
    // }

    // r = 15 = 00001111 B = 0010
}
