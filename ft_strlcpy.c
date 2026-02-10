/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bayram-seven <bayram-seven@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 04:13:21 by bayram-seve       #+#    #+#             */
/*   Updated: 2026/02/10 05:36:48 by bayram-seve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{	
	size_t	src_len; //kaynak uzunluğu
	size_t	i; 

	src_len = 0;
	while (src[src_len]!= '\0')
	{
		src_len++;
	}
		if (dstsize == 0)
			return (src_len);
	i = 0;
	while (src[i] && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}

// --- TEST KISMI (MAIN) ---
int	main(void)
{
	char dest[7];
	char *src="bayram";
	size_t sonuc = ft_strlcpy(dest,src,3);



	printf("Orijinal Metin : %s\n", src);
	printf("Kopyalanan     : %s\n", dest);
	printf("Dönen Değer    : %zu\n", sonuc);
	return (0);
}
