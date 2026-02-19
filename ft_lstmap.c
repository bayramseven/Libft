/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bayram-seven <bayram-seven@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 05:13:32 by bayram-seve       #+#    #+#             */
/*   Updated: 2026/02/19 05:49:17 by bayram-seve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*temp;
	void	*c_temp;

	new_list = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		c_temp = f(lst->content);
		temp = ft_lstnew(c_temp);
		if (temp == NULL)
		{
			del(c_temp);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, temp);
		lst = lst->next;
	}
	return (new_list);
}

/*
// 1. Veriyi değiştiren veya kopyalayan fonksiyon (Content'i kopyalar)
void	*copy_content(void *content)
{
	return (strdup((char *)content)); // Yazıyı kopyalayıp döndürür
}

// 2. Silme fonksiyonu
void	del_content(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*liste;
	t_list	*yeni_liste;

	// 3. Orijinal listeyi kuralım
	liste = ft_lstnew(strdup("Bayram"));
	ft_lstadd_back(&liste, ft_lstnew(strdup("Seven")));

	// 4. lstmap ile yeni listeyi oluşturalım
	yeni_liste = ft_lstmap(liste, &copy_content, &del_content);

	// 5. İspat
	if (yeni_liste)
	{
		printf("Orijinal Bas: %s\n", (char *)liste->content);
		printf("Yeni Liste Bas: %s\n", (char *)yeni_liste->content);
	}

	// Temizlik
	ft_lstclear(&liste, &del_content);
	ft_lstclear(&yeni_liste, &del_content);
	return (0);
}
*/