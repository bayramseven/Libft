/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bayram-seven <bayram-seven@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 02:49:04 by bayram-seve       #+#    #+#             */
/*   Updated: 2026/02/18 06:05:01 by bayram-seve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// 1. YARDIMCI: Kelime Sayısını Bulur
static int	count_words(const char *s, char c) // meslea *s= bayram , seven , sude , sumru , sivri; --> c= , ; 
{
	int	count; // sayaç
	int	in_word; // kelimenin içinde mi dışında mı  içinde ise 1 değil ie 0 

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

// 2. YARDIMCI: Hata Durumunda Belleği Temizler (Leak Önleyici)
static char	**free_array(char **array, int i)
{
	while (i > 0)
	{
		i--;
		free(array[i]);
	}
	free(array);
	return (NULL);
}

// 3. YARDIMCI: Kelimeleri Ayırıp Diziye Doldurur
static char	**fill_array(char const *s, char c, char **array)
{
	int	i;
	int	word_len;
	int	word_index;

	i = 0;
	word_index = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			word_len = 0;
			while (s[i + word_len] && s[i + word_len] != c)
				word_len++;
			array[word_index] = ft_substr(s, i, word_len);
			if (!array[word_index])
				return (free_array(array, word_index));
			word_index++;
			i += word_len;
		}
		else
			i++;
	}
	array[word_index] = NULL;
	return (array);
}

// ANA FONKSİYON
char	**ft_split(char const *s, char c)
{
	char	**array;

	if (!s)
		return (NULL);
	array = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!array)
		return (NULL);
	return (fill_array(s, c, array));
}

int main(void)
{
    char **res; // 1. Adres listesini tutacak değişken
    int i = 0;

    // 2. Fonksiyonu çağır ve sonucu bir yere ata
    res = ft_split("bayram,seven,42", ',');
    if (!res) // Güvenlik kontrolü (Hoca bunu sever)
        return (1);

    // 3. NULL görene kadar yazdır ve temizle
    while (res[i]) // res[i] != NULL ile aynı şeydir
    {
        printf("Kelime %d: %s\n", i, res[i]);
        free(res[i]); // İşimiz biten kelimeyi hemen siliyoruz
        i++;
    }
    free(res); // En son ana listeyi siliyoruz
    return (0);
}
