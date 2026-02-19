/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bayram-seven <bayram-seven@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 05:05:43 by bayram-seve       #+#    #+#             */
/*   Updated: 2026/02/19 05:49:11 by bayram-seve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

// 1. İçerideki veriyi silmek için basit bir yardımcı fonksiyon
void	del_content(void *content)
{
	// Content bir string ise, biz sadece sildiğimizi haber veriyoruz
	// Eğer content malloc ile oluşturulsaydı burada free(content) yapardık.
	printf("Icerik siliniyor: %s\n", (char *)content);
}

/*
int	main(void)
{
	t_list	*vagon;

	// 2. Bir vagon oluşturuyoruz
	vagon = ft_lstnew("Bayram'in Verisi");

	if (vagon)
	{
		printf("Silinmeden once adres: %p\n", vagon);
		
		// 3. lstdelone fonksiyonunu çağırıyoruz
		ft_lstdelone(vagon, &del_content);
		
		printf("Vagon silindi!\n");
	}

	return (0);
}
    
*/