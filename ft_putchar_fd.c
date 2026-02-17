/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bayseven <bayseven@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 14:44:04 by bayseven          #+#    #+#             */
/*   Updated: 2026/02/17 15:02:56 by bayseven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	// GÜVENLİK KONTROLÜ (Opsiyonel ama Havalı)
	// Negatif bir dosya numarası olamaz.
	// Bunu yazarsan hoca "Vay, kenar durumları (edge cases) düşünmüş" der.
	if (fd >= 0) // --> fd 0 ,1 ,2 3,4,5 vsvs oluyor ya. eksi değer alamıyor. bu yüzden hata almaması için kullandım. 
		write(fd, &c, 1);
}



// write (0||1||2,  char  ,karakter sayısı)

/*
fd işletim sisteminin açık olan dosyalara veya veri akışlarına verdiği kimlik numarasıdır (ID).

0: Standart Giriş (Klavye)

1: Standart Çıkış (Terminal Ekranı)

2: Standart Hata (Hata Logları)

3 ve sonrası: Bizim açtığımız dosyalar (open ile).

*/

int main()
{
    ft_putchar_fd('A', 1);
    ft_putchar_fd('B', 2); 
    return(0);
}

// ./a.out > cop.txt bunun ile sadece b görürsün çünkü çıktı larak sadece hata çıktısını alır normal çıktıyı dosyaya yollar. eneteresan?
