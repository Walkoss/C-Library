#include "liblist.h"

int main(int argc, char *argv[])
{
	t_list *list;
	t_list *append;
	t_list *copy;

	list = list_new("TEST");
	list_append(&list, list_new("HIHI3"));
	list_append(&list, list_new("HIHI4"));
	list_append(&list, list_new("HIHI5"));
	list_append(&list, list_new("HIHI6"));
	list_append(&list, list_new("HIHI7"));
	append = list_new("HIHI");
	list_append(&list, append);
	list_append(&list, list_new("HIHI8"));
	list_append(&list, list_new("HIHI9"));
	list_append(&list, list_new("HIHI10"));
	list_append(&list, list_new("HIHI11"));
	list_append(&list, list_new("HIHI12"));
	printf("-------list-------\n");
	list_debug(list);
	printf("-------copy------\n");
	copy = list_new("tt");
	list_debug(copy);
	copy = list_copy(list);
	list_remove(&list, append);
	printf("-------list HIHI removed------\n");
	list_debug(list);
	printf("-------copy-----\n");	
	list_debug(copy);
	printf("-------Search node HIHI11-----\n");
	printf("Search = %s\n", (char*)list_search(list, "HIHI11", &my_strcmp)->data);
	list_reverse(&list);
	printf("-------list reversed------\n");
	list_debug(list);
	printf("------- 5 n element------\n");
	printf("Data of the 5th node using the reversed list : %s\n", (char *)list_n_node(list, 5)->data);
	printf("------- swap 5 and 7 nodes ------\n");
	list_swap_data(list_n_node(list, 5), list_n_node(list, 7));
	printf("-------list swapped------\n");
	list_debug(list);
	list_free(list);
	list_free(append);
	list_free(copy);
	return (0);
}