#include "liblist.h"

void	list_apply(t_list *begin, int (*f)())
{
  t_list	*tmp;

  tmp = begin;
  while (tmp != NULL)
    {
      f(tmp->data);
      tmp = tmp->next;
    }
}

t_list 	*list_n_node(t_list *node, int n)
{
    int i;

    for (i = 0; i < n - 1; i++)
    {
        if (node == NULL)
            return (NULL);
        node = node->next;
    }
    return (node);
}

void 	list_swap_data(t_list *first_node, t_list *scd_node)
{
  void 	*tmp;

  tmp = first_node->data;
  first_node->data = scd_node->data;
  scd_node->data = tmp;
}
