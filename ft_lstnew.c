/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bayseven <bayseven@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 16:49:14 by bayseven          #+#    #+#             */
/*   Updated: 2026/02/18 21:58:33 by bayseven         ###   ########.fr       */
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
