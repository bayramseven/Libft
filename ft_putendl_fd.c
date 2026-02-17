/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bayseven <bayseven@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 15:37:50 by bayseven          #+#    #+#             */
/*   Updated: 2026/02/17 15:48:32 by bayseven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// put end line

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	// String yoksa veya dosya kapalıysa işlem yapma.
	if (!s || fd < 0)
		return ;

	write(fd, s, ft_strlen(s));

	write(fd, "\n", 1);
}

int main()
{
    
    ft_putendl_fd("bayram", 0);
    ft_putendl_fd("seven", 0);
    return(0);
}