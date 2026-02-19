/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bayram-seven <bayram-seven@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 06:53:49 by bayram-seve       #+#    #+#             */
/*   Updated: 2026/02/19 06:06:48 by bayram-seve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	
	while (s[i] !='\0')
		i++;
	
	
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i)); 
		i--;
	}
	return (0);
}
