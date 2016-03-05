#include "liblist.h"

t_list 	*list_search(t_list *node, void *value, int (*cmp)())
{
	for (; node ; node = node->next)
		if (!cmp(value, node->data))
			return (node);
	return (NULL);
}

t_list 	*list_copy(t_list *node)
{
	t_list *list_copied;

	if (node == NULL)
		return (NULL);
	list_copied = list_new(node->data);
	list_copied->next = list_copy(node->next);
	return (list_copied);
}

void 	list_free(t_list *node)
{
    if (node)
    {
        list_free(node->next);
        free(node);
    }
}

void	list_reverse(t_list **begin)
{
  t_list	*prev_node;
  t_list	*curr_node;
  t_list	*next_node;

  prev_node = NULL;
  curr_node = *begin;
  while (curr_node != NULL)
    {
      next_node = curr_node->next;
      curr_node->next = prev_node;
      prev_node = curr_node;
      curr_node = next_node;
    }
  *begin = prev_node;
}

int		list_size(t_list *begin)
{
  int	i;
  t_list *tmp;

  i = 0;
  tmp = begin;
  while (tmp != NULL)
	{
		i++;
		tmp = tmp->next;
	}
  return (i);
}