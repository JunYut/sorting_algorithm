# include "linked-list.h"

void add_node(struct node **head, int data)
{
	struct node *new_node = (struct node *)malloc(sizeof(struct node));
	new_node->data = data;
	new_node->next = *head;
	*head = new_node;
}