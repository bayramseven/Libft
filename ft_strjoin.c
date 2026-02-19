/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bayram-seven <bayram-seven@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 22:31:08 by bayram-seve       #+#    #+#             */
/*   Updated: 2026/02/19 06:01:23 by bayram-seve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len1;
	size_t	len2;

	
	if (!s1 || !s2)
		return (NULL);

	
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);

	
	str = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!str)
		return (NULL);

	
	ft_memcpy(str, s1, len1);
	ft_memcpy(str + len1, s2, len2 + 1);

	return (str);
}

