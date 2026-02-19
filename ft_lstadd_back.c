/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bayram-seven <bayram-seven@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 01:57:37 by bayram-seve       #+#    #+#             */
/*   Updated: 2026/02/19 05:05:21 by bayram-seve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!new || !lst)
		return ;
	else if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	temp = ft_lstlast(*lst);
	temp->next = new;
}

/*
int main()
{
    t_list *liste = NULL;

    // 1. Önce listeye arkadan bir eleman ekleyelim
    ft_lstadd_back(&liste, ft_lstnew("vagon1"));
    
    // 2. Bir tane daha ekleyelim (Bu vagon1'in arkasına geçmeli)
    ft_lstadd_back(&liste, ft_lstnew("vagon2"));

    // 3. Kontrol: Listenin başı hala vagon1 mi? (Öyleyse doğru çalışıyor)
    if (liste)
        printf("Listenin basi: %s\n", (char *)liste->content);
    
    // 4. Listenin sonu vagon2 mi?
    t_list *son = ft_lstlast(liste);
    printf("Listenin sonu: %s\n", (char *)son->content);

    return (0);
}
    */