/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bayram-seven <bayram-seven@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 04:12:37 by bayram-seve       #+#    #+#             */
/*   Updated: 2026/02/19 05:58:41 by bayram-seve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	
	ptr = (unsigned char *)b;
	
	while (len > 0 && len != '\0')
	{
		*ptr = (unsigned char)c; 
		ptr++;                   
		len--;                  
	}

	return (b);
}
