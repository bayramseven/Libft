
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bayseven <bayseven@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 14:56:09 by bayseven          #+#    #+#             */
/*   Updated: 2026/01/22 14:56:11 by bayseven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// verilen dizinin uzunluğunu bulan fankşın

#include "libft.h"
// Dönüş tipi 'size_t' olmalı (negatif olamayan tamsayı demek)
size_t	ft_strlen(const char *s)
// const char : biz s değişkenini kullanmayacağız sadece okuyacağız. harflerle oynanmaması için bunu kullanıyoruz.
// char *s bana adrsi var ben okurumda yazarımda ;  const char bana adrsi ver sadece okurum asla değiştirmem diyor kısacası

{
	size_t i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
