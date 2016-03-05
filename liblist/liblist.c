#include "liblist.h"

t_list 	*list_new(void 	*data)
{
	t_list 	*node;

	if ((node = malloc(sizeof(t_list))) == NULL)
		return (malloc_failed("list_new"));
	node->data = data;
	node->next = NULL;
	return (node);
}

t_list 	*list_last(t_list *node)
{
	while (node->next != NULL)
		node = node->next;
	return (node);
}

void 	 list_append(t_list** node, t_list* new_node)
{
    if (node != NULL)
        list_last(*node)->next = new_node; 
    else
        *node = new_node;
}

void 	list_remove(t_list** node_begin, t_list* rm_node)
{
    t_list *curr_node;
    t_list *prev_node;

    prev_node = NULL;
    curr_node = *node_begin;

    while (curr_node)
    {   
    	if (curr_node == rm_node)
    	{
    		if (prev_node)
    			prev_node->next = curr_node->next;
    		else
    			*node_begin = curr_node;
    		free(curr_node);
    	}
    	prev_node = curr_node;
    	curr_node = curr_node->next;
    }
}

void 	list_debug(t_list *node)
{
	for (; node; node = node->next)
	{
		if (node)
		{
			my_putstr("Current node data = ");
			my_putstr((char*)node->data);
			my_putchar(10);
		}
	}
}