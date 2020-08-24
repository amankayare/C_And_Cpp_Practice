/*
 * list.c

 *
 *  Created on: 06-Nov-2019
 *      Author: aman
 */
#include <stdio.h>
#include <stdlib.h>

#include"node.h"
#include"list.h"

node_t* create_node(int data) {

	//allocate memory dynamically for a node
	node_t *temp = (node_t *) malloc(sizeof(node_t));

	if (temp == NULL) {
		printf("malloc falied\n");
	}
	//initalization of data members
	temp->data = data;
	temp->next = NULL;

	//return the addr of newly created node to the calling function

	return temp;
}
void add_node_at_last_position(int data) {

	//create a newnode
	node_t *new_node = create_node(data);

	//if list is empty -- attach newly created node to the head
	if (head == NULL) {
		//store the addr of newly created node into the head
		head = new_node;
	} else { //if list is not empty

		//start the traversal from the first node
		node_t *trav = head;

		//traverse the list till last node
		while (trav->next != NULL) {

			trav = trav->next; //move trav to its next node

		}
		//attach newly created node to the last node
		//i.e. store the addr of newly created node into the next part of last node

		trav->next = new_node;
	}
}
void add_node_at_first_position(int data) {
	//create a newnode
	node_t *new_node = create_node(data);

	//if list is empty -- attach newly created node to the head
	if (head == NULL) {
		//store the addr of newly created node into the head
		head = new_node;
	} else { //if list is not empty

		//store the addr of cur first node into the next part newly created node
		new_node->next = head;
		//store the addr of new node into head
		//attach newly created node to the head
		head = new_node;

	}
}
void add_node_at_specific_position(int data, int pos) {

	node_t *new_node = create_node(data);
	if (pos == 1) {		//if the pos is the first position

		add_node_at_first_position(data);

	} else if (pos == count_node() + 1) {	//if the pos is the last position

		add_node_at_last_position(data);

	} else {		// the pos is in between position

		//start traversal from first node
		node_t *trav = head;
		int i = 1;

		//traverse the list till (pos-1)th node
		while (i <= pos - 1) {
			i++;
			trav = trav->next;
		}

		//store the addr of cur (pos)th node into the next part of newly created node
		new_node->next = trav->next;

		//store the addr of newly created node into the next part of (pos-1)th node
		trav->next = new_node;

	}

}

void display(void) {
	//if list is empty
	if (head == NULL) {

		printf("List is empty\n");
	} else {

		//start traversal from first node
		node_t *trav = head;
		printf("list is: head -> ");

		//traverse the list including last node
		while (trav != NULL) {
			//display data part of each node

			printf("%d ", trav->data);
			trav = trav->next;		//move trav to its next node
		}
		printf(" null \n");

	}

}
int count_node(void) {
	int cnt = 0;
	if (head != NULL) {

		//start traversal from first node
		node_t *trav = head;

		//traverse the list till last node
		while (trav != NULL) {
			cnt++;
			trav = trav->next;		//move trav to its next node
		}
	}
	return cnt;
}
