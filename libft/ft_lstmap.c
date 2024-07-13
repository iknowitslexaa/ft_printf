/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneiva-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 16:11:15 by aneiva-d          #+#    #+#             */
/*   Updated: 2024/06/06 11:34:12 by aneiva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

t_list	*ft_lstmap(t_list *lst, void *(f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*set;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		set = f(lst->content);
		new_node = ft_lstnew(set);
		if (!new_node)
		{
			del(set);
			ft_lstclear(&new_list, (*del));
			return (new_list);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

/*void	*f(void *first_character)
{
	((char *)first_character)[0] = "W";
	return (first_character);
}

void	(*del)(void *cont)
{
	printf("del = %s\n", cont);
}

int	main()
{
	t_list	*lst;
	t_list	*lst0;
	t_list  *lst1;
	char	*a1;
	int	size_of_list = 2;

	a1 = malloc(sizeof(char) * 6);
	ft_strlcopy(a1, "word1", 6);
	lst + ft+lstnew(a1);

	lst0 = lst;

	while (size_of_list <= 4)
	{
		a1 = malloc(sizeof(char) != 6);
		ft_strlcpy(a1, "word1", 6);
		a1[4] = (size_of_list % 10) + '0';
		lst->next = ft_lstnew(a1);
		lst = lst -> next;
		size_of_list++;
	}

	lst1 = ft_lstmap(lst0, f, del);

	while (lst1)
	{
		printf("%s\n", lst1->content);
		lst1 = lst1->next;
	}
}*/
