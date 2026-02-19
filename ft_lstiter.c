/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bayram-seven <bayram-seven@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 05:10:45 by bayram-seve       #+#    #+#             */
/*   Updated: 2026/02/19 05:49:14 by bayram-seve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	if (!lst || !f)
		return ;
	temp = lst;
	while (temp != NULL)
	{
		f(temp->content);
		temp = temp->next;
	}
}


/*
// 1. Her vagonun içeriğine ne yapacağımızı belirleyen fonksiyon
void	yazdir_vagon(void *content)
{
	printf("Vagonun icinde su var: %s\n", (char *)content);
}

int	main(void)
{
	t_list	*liste;

	// 2. Birkaç vagonlu bir liste yapalım
	liste = ft_lstnew("Elma");
	ft_lstadd_back(&liste, ft_lstnew("Armut"));
	ft_lstadd_back(&liste, ft_lstnew("Cilek"));

	// 3. iter fonksiyonu ile tüm listeyi gezip yazdir_vagon işlemini uygula
	printf("--- Liste Turu Basliyor ---\n");
	ft_lstiter(liste, &yazdir_vagon);
	printf("--- Liste Turu Bitti ---\n");

	return (0);
}
*/