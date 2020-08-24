/*
 * list.c
 *
 *  Created on: 05-Nov-2019
 *      Author: sunbeam
 */
#include<stdio.h>
#include<stdlib.h>

#include"list.h"


node_t *create_node(int data)
{
	//allocate memory dynamically for a node
	node_t *temp = (node_t *)malloc(sizeof(node_t));
	if( temp == NULL )
	{
		printf("malloc() failed !!!\n");
		exit(1);
	}

	//initialize members of the node
	temp->data = data;
	temp->next = NULL;

	//return the addr of newly created node to the calling function
	return temp;

}

void add_node_at_last_position(int data)
{
	//create a newnode
	node_t *newnode = create_node(data);

	//if list is empty -- attach newly created node to the head
	if( head == NULL )
	{
		//store the addr of newly created node into the head
		head = newnode;
	}
	else//if list is not empty
	{
		//start the traversal from the first node
		node_t *trav = head;

		//traverse the list till last node
		while( trav->next != NULL )
			trav = trav->next;//move trav to its next node

		//attach newly created node to the last node
		//i.e. store the addr of newly created node into the next part of last node
		trav->next = newnode;
	}
}

int count_nodes(void)
{
	int cnt = 0;

	//if list is not empty
	if( head != NULL )
	{
		//start traversal from first node
		node_t *trav = head;

		//traverse the list till last node
		while( trav != NULL )
		{
			cnt++;
			trav = trav->next;//move trav to its next node
		}
	}

	return cnt;
}

void add_node_at_first_position(int data)
{
	//create a newnode
	node_t *newnode = create_node(data);

	//if list is empty -- attach newly created node to the head
	if( head == NULL )
	{
		//store the addr of newly created node into the head
		head = newnode;
	}
	else//if list is not empty
	{
		//store the addr of cur first node into the next part newly created node
		newnode->next = head;
		//attach newly created node to the head
		head = newnode;
	}
}

void display_list(void)
{
	//if list is not empty
	if( head != NULL )
	{
		//start traversal from first node
		node_t *trav = head;

		printf("no. of nodes in a list are: %d\n", count_nodes());
		printf("list is: head -> ");
		//traverse the list including last node
		while( trav != NULL )
		{
			//display data part of each node
			printf("%d -> ", trav->data);
			trav = trav->next;//move trav to its next node
		}
		printf(" null \n");
	}
	else
		printf("list is empty !!!\n");
}

void add_node_at_specific_position(int pos, int data)
{
	if( pos == 1 )//if the pos is the first position
		add_node_at_first_position(data);
	else
	if( pos == count_nodes() + 1 )//if the pos is the last position
		add_node_at_last_position(data);
	else//pos is in between position
	{
		//create a newnode
		node_t *newnode = create_node(data);
		//start traversal from the first node
		node_t *trav = head;
		int i = 1;
		//traverse the list till (pos-1)th node
		while( i < pos-1 )
		{
			i++;
			trav = trav->next;
		}

		//store the addr of (pos)th node into the next part of newly created node
		newnode->next = trav->next;
		//store the addr of newly created node into the next part of (pos-1)th node
		trav->next = newnode;
	}
}

void delete_node_at_first_position(void)
{
	//check list is not empty
	if( head != NULL )
	{
		//if list contains only one node
		if( head->next == NULL )
		{
			//delete the node and make head as NULL
			free(head);
			head = NULL;
		}
		else//if list contains more than one nodes
		{
			//store the addr of cur first node into a temp which is to be deleted
			node_t *temp = head;
			//store the addr of cur second node into the head
			head = head->next;
			//delete the node
			free(temp);
			temp = NULL;
		}
		//printf("node at first position deleted ...\n");
	}
	else
		printf("list is empty !!!\n");
}

void delete_node_at_last_position(void)
{
	//check list is not empty
	if( head != NULL )
	{
		//if list contains only one node
		if( head->next == NULL )
		{
			//delete the node and make head as NULL
			free(head);
			head = NULL;
		}
		else//if list contains more than one nodes
		{
			//start traversal from first node
			node_t *trav = head;

			//traverse the list till second last node
			while( trav->next->next != NULL )
				trav = trav->next;

			//delete the last node
			free(trav->next);
			//make next part of cur second last node as NULL
			trav->next = NULL;
		}
		//printf("node at first position deleted ...\n");
	}
	else
		printf("list is empty !!!\n");
}

void delete_node_at_specific_position(int pos)
{
	if( pos == 1 )//if pos is the first position
		delete_node_at_first_position();
	else
	if( pos == count_nodes() )//if pos is the last position
		delete_node_at_last_position();
	else//if the pos is in between position
	{
		node_t *temp = NULL;
		int i = 1;
		//start traversal from the first node
		node_t *trav = head;

		//traverse the list till (pos-1)th node
		while( i < pos-1 )
		{
			i++;
			trav = trav->next;
		}

		//store the addr of the node into the temp which is to be deleted
		temp = trav->next;
		//store the addr of cur (pos+1)th node into the next part of (pos-1)th node
		trav->next = trav->next->next;
		//delete the node
		free(temp);
		temp = NULL;
	}
}

void free_list(void)
{
	//if list is not empty
	if( head != NULL )
	{
		while( head != NULL )
			delete_node_at_last_position();

			//delete_node_at_first_position();

		printf("list freed sucessfully ...\n");
	}
	else
		printf("list is empty !!!\n");
}

void display_reverse(node_t *trav)
{
	//base condition
	if( trav == NULL )
		return;

	display_reverse(trav->next);
	printf("%4d", trav->data);
}

void reverse_list(void)
{
	node_t *t1 = head;
	node_t *t2 = t1->next;

	t1->next = NULL;

	while( t2 != NULL )
	{
		node_t *t3 = t2->next;
		t2->next = t1;//reverse the link between pairs

		t1 = t2;//move t1 to its next node
		t2 = t3;//move t2 to its next node
	}

	//store the addr of cur last node into the head
	head = t1;
}













