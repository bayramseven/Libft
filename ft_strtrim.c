/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bayram-seven <bayram-seven@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 23:55:58 by bayram-seve       #+#    #+#             */
/*   Updated: 2026/02/14 10:50:26 by bayram-seve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))  // uzunluk-indeks farkından dolayı end-1 
		end--;
	str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[start], end - start + 1);
	return (str);
}


int main()
{

	char *s="///bayrammm */";
	char *r="/* m";
	char *cikti;

	cikti=ft_strtrim(s,r);

	printf("%s", cikti); 


	return(0);
}