/*
 * list.h
 *
 *  Created on: 05-Nov-2019
 *      Author: sunbeam
 */

#ifndef LIST_H_
#define LIST_H_
#include"node.h"

extern node_t *head;
int count_nodes(void);
void add_node_at_last_position(int data);
void add_node_at_first_position(int data);
void add_node_at_specific_position(int pos, int data);
void delete_node_at_first_position(void);
void delete_node_at_first_position(void);
void delete_node_at_specific_position(int pos);
void display_list(void);
void display_reverse(node_t *trav);
void reverse_list(void);
node_t *create_node(int data);
void free_list(void);

#endif /* LIST_H_ */
