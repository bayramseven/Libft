/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bayram-seven <bayram-seven@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 08:40:56 by bayram-seve       #+#    #+#             */
/*   Updated: 2026/02/10 09:00:38 by bayram-seve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{   
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	// Hem s1 hem s2 bitmediyse VE harfler eşitse VE limit dolmadıysa: Devam et
	while (s1[i] !='\0'&& s2[i] !='\0' && s1[i] == s2[i] && i < n - 1) 
	{
		i++;
	}
	// Farkı alırken MUTLAKA (unsigned char) yap!
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
int main()
{
    printf("%d\n",ft_strncmp("bayram", "bahebelem",4));
    
    return(0);
}