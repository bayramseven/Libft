/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bayram-seven <bayram-seven@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 01:18:23 by bayram-seve       #+#    #+#             */
/*   Updated: 2026/02/19 05:49:37 by bayram-seve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
          // temp geçici demek
int	ft_lstsize(t_list *lst)
{
	t_list	*temp;
	size_t	i;

	temp = lst;
	i = 0;
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}

/*

int main()
{
    t_list *baslangic;
    int boyut;

    baslangic=ft_lstnew("vagpn1");
    ft_lstadd_front(&baslangic,ft_lstnew("vagpn2"));
    ft_lstadd_front(&baslangic,ft_lstnew("vagpn3"));

    boyut=ft_lstsize(baslangic);
    printf("toplam boyut=%d", boyut);
    return(0);
}
    */