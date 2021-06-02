void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*list;
	t_list	*listfree;

	if (!lst)
		return ;
	list = *lst;
	while (list)
	{
		listfree = list;
		list = list->next;
		ft_lstdelone(listfree, del);
	}
	*lst = NULL;
}
