/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bayram-seven <bayram-seven@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 06:53:49 by bayram-seve       #+#    #+#             */
/*   Updated: 2026/02/10 07:57:28 by bayram-seve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	// 1. Önce stringin sonuna (NULL'a) kadar git   BAYRAM
	while (s[i] !='\0')
		i++;
	
	// 2. Sondan başa doğru (geriye) gel
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i)); // Bulduğun an adresi döndür (char *) const charın kilidini kırdı
		i--;
	}
	return (0);
}

int main()
{
    printf("%s",ft_strrchr("bayram", 'a'));
    return(0);
}