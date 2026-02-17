/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bayseven <bayseven@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 03:07:29 by bayram-seve       #+#    #+#             */
/*   Updated: 2026/02/17 14:43:27 by bayseven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s || !f)
		return (NULL);

	// 2. HAFIZA AYIRMA (MALLOC)
	// Yeni bir string oluşturacağımız için yer açıyoruz.
	// sizeof(char) eklemek "taşınabilirlik" açısından profesyoneldir.
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);

	// 3. DÖNGÜ VE İŞLEM
	i = 0;
	while (s[i])
	{
		// Fonksiyonu çalıştır, sonucu yeni stringe (str) yaz.
		str[i] = f(i, s[i]);
		i++;
	}
	// 4. KAPANIŞ
	str[i] = '\0'; // Stringi mühürle.
	return (str);
}


char f(unsigned int i, char s)
{
	return(s-=32);
}


int main()
{

	const char *s= "bayram";
	char *yeni;

	yeni=ft_strmapi(s,f);

	printf("%s", yeni);

	free(yeni);
//MNEMORY LEAK YİYORSUN FREE YAPMAYI UNUTMA ARTIK YETER!!!
	return(0);
}




























/*
char f(unsigned int i, char c)
	{
		return(c-=32);
		
	}

int main()
{

	char const *s="bayram";
	char *yeni ;

	yeni= ft_strmapi(s,f);

	printf("%s\n", yeni );

	free(yeni);

	return(0);
}
	*/