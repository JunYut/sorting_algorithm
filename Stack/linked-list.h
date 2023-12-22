# ifndef LINKED_LIST_H
	# define LINKED_LIST_H

	# pragma once

	# include <stdlib.h>

	typedef struct node
	{
		int data;
		struct node *prev;
		struct node *next;
	}	node;

	void add_node(node **head, int data);

# endif // LINKED_LIST_H
