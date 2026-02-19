/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bayram-seven <bayram-seven@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 05:09:08 by bayram-seve       #+#    #+#             */
/*   Updated: 2026/02/19 05:49:07 by bayram-seve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del || !*lst)
		return ;
	while (*lst != NULL)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}

#include <stdio.h>
#include "libft.h"

// Veriyi silerken ekrana mesaj basan yardımcı fonksiyon
void	del_everything(void *content)
{
	printf("Silinen veri: %s\n", (char *)content);
}

/*
int	main(void)
{
	t_list	*liste;

	// 1. Üç vagonlu bir tren yapalım
	liste = ft_lstnew("Vagon 1");
	ft_lstadd_back(&liste, ft_lstnew("Vagon 2"));
	ft_lstadd_back(&liste, ft_lstnew("Vagon 3"));

	// 2. Tüm listeyi tek hamlede temizleyelim
	ft_lstclear(&liste, &del_everything);

	// 3. İspat: liste artık NULL olmalı
	if (liste == NULL)
		printf("Liste tamamen temizlendi, artik NULL!\n");

	return (0);
}
*/