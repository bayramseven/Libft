/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bayram-seven <bayram-seven@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 16:49:14 by bayseven          #+#    #+#             */
/*   Updated: 2026/02/19 05:49:21 by bayram-seve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}


/*
int main()
{

	t_list *bayram;

	bayram =ft_lstnew("SEVEN");

	if(bayram)
	{
		printf("%s\n",  (char *)bayram->content);
		printf( "%p " , bayram->next);
		free(bayram);
	}

	return(0);
}

*/