/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bayram-seven <bayram-seven@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 16:11:48 by bayram-seve       #+#    #+#             */
/*   Updated: 2026/02/11 01:52:56 by bayram-seve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)  // sadece yazıyı sayıı değil foto video müzik vs de kopyalamak için kullanılıyor. Standart C kütüphanesinde (man pages), memcpy için 'Eğer hafıza alanları çakışıyorsa (overlap), davranış tanımsızdır' yazar. Yani memcpy bana doğru çalışma garantisi vermez, sadece en hızlı şekilde kopyalama sözü verir."
{
	size_t	i;

	if (dst == NULL && src == NULL)
		return (0);
	i = 0;
	while (i < n && i !='\0') 
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

int main()
{
    char dest[]="bayram";
    char src[]="seven";

    printf("%s",ft_memcpy(dest,src,4));
    return(0);
}