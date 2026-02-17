/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bayseven <bayseven@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 16:36:03 by bayseven          #+#    #+#             */
/*   Updated: 2026/02/17 20:00:37 by bayseven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Yardımcı: Basamak sayısını hesaplar.
// nb'yi long gönderdiğimiz için burası da long almalı.
static int	ft_len(long n)// malloc için ne kadar yer ayıacağımıza burada karar veriyoruz. yani sayı kaç basamak // static ile sadece bu dosyanın içinden çağrılabilen bir fonksiyon yaptık ki libft.h yi bozmasın. 
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len = 1; // Eksi işareti için +1 yer ayırıyoruz..
	while (n != 0)
	{
		n = n / 10; // misal 55; 55/10 =5 --> kalan 5 için 5/10= 0. çünkü int tam sayı ve bölerken 0 a yuvarlar virgüllü yani float değişkeni gibi yapmaz.
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nb; //int sınırları -2147483648 ile 2147483647 arasındadır. Eğer bana INT_MIN gelirse ve ben onu pozitife çevirmek için -n yaparsam, int bunu taşıyamaz (overflow olur). Bu yüzden sayıyı daha geniş bir kap olan long içine alarak güvenliğe kavuşturdum.
	int		len;

	nb = n;             // 1. Taşmayı önlemek için long kasaya al
	len = ft_len(nb);   // 2. Uzunluğu hesapla
	str = (char *)malloc(sizeof(char) * (len + 1)); // 3. Yer aç
	if (!str)
		return (NULL);
	str[len--] = '\0';  // 4. En sona \0 koy ve bir geri gel
	if (nb == 0)
		str[0] = '0';
	else if (nb < 0)    // 5. Negatifse...
	{
		str[0] = '-';   // ...başa eksi koy
		nb = -nb;       // ...sayıyı pozitife çevir
	}
	while (nb > 0)      // 6. Sondan başa doldur
	{
		str[len--] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (str);
}

int main()
{

    printf("%s",ft_itoa(-33)); //int to ascii
    

    return(0);
}