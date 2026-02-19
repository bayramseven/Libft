/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bayram-seven <bayram-seven@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 19:33:19 by bayram-seve       #+#    #+#             */
/*   Updated: 2026/02/19 05:58:18 by bayram-seve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)  
{
	unsigned char		*dest;
	const unsigned char	*srrc;
	if (!dst && !src)
		return (0);

	if (dst > src) 
	{
		dest = (unsigned char *)dst;
		srrc = (const unsigned char *)src;
		
		while (n > 0)
		{
			n--; 
			dest[n] = srrc[n];
		}
	}
	else 
	{
		ft_memcpy(dst, src, n);
	}
	return (dst);
}
