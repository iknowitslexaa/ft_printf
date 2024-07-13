/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneiva-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 11:58:10 by aneiva-d          #+#    #+#             */
/*   Updated: 2024/05/30 13:05:14 by aneiva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(*node));
	if (!(node))
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

/*int	main()
{
	char	content[] = "something here";
	t_list	*ptr;

	ptr = ft_lstnew(content);
	printf("%s\n", (char *)ptr->content); 
	return (0);
}*/
