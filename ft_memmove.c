/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bayseven <bayseven@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 19:33:19 by bayram-seve       #+#    #+#             */
/*   Updated: 2026/02/11 19:52:59 by bayseven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)  // sondan başa değişir
{
	unsigned char		*dest;
	const unsigned char	*srrc;
																						// bayram seven
	if (!dst && !src)
		return (0);

	if (dst > src) // kontrol ediyoruz, hedefkaynaktan büyük mü ileride mi diye
	{
		dest = (unsigned char *)dst;
		srrc = (const unsigned char *)src;
		
		while (n > 0)
		{
			n--; // Önce indeksi düşürüyoruz (Size 5 ise son indeks 4'tür)
			dest[n] = srrc[n];
		}
	}
	else // kontrole baktık normal işlem ise bas memcpy yi geç 
	{
		ft_memcpy(dst, src, n);
	}
	return (dst);
}
int main()
{
    char kaynak[]="bayram";

    printf("%s\n",(char *)ft_memmove(kaynak + 1,kaynak,4));
    return(0);
}

