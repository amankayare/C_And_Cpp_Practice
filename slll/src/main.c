/*
 * main.c
 *
 *  Created on: 05-Nov-2019
 *      Author: sunbeam
 */
#include<stdio.h>
#include<stdlib.h>
#include"list.h"

node_t *head = NULL;

enum menu_options{ EXIT, ADDLAST, ADDFIRST, ADDATPOS, DELFIRST,
	DELLAST, DELATPOS, DISP, DISPREV, REVERSE };

int menu(void)
{
	int choice;

	printf("singly linear linked list operations\n");
	printf("0. exit\n");
	printf("1. add node at last position\n");
	printf("2. add node at first position\n");
	printf("3. add node at specific position\n");
	printf("4. delete node at first position\n");
	printf("5. delete node at last position\n");
	printf("6. delete node at specific position\n");
	printf("7. display list\n");
	printf("8. display list in reverse order\n");
	printf("9. reverse the list\n");

	printf("enter the choice: ");
	scanf("%d", &choice);

	return choice;
}

int main(void)
{
	int pos;
	int data;

	//printf("sizeof(node_t): %d bytes\n", sizeof(node_t));

	while(1)
	{
		int choice = menu();

		switch(choice)
		{
		case EXIT:
			free_list();
			exit(0);
		case ADDLAST:
			printf("enter the data: ");
			scanf("%d", &data);
			add_node_at_last_position(data);
			printf("%d added into the list at last pos\n", data);
			break;

		case ADDFIRST:
			printf("enter the data: ");
			scanf("%d", &data);
			add_node_at_first_position(data);
			printf("%d added into the list at first pos\n", data);
			break;

		case ADDATPOS:
			while(1)
			{
				//accept position from the user
				printf("enter pos: ");
				scanf("%d", &pos);

				//validate the position
				if( pos >= 1 && pos <= count_nodes()+1 )
					break;

				printf("invalid position !!!\n");
			}

			printf("enter the data: ");
			scanf("%d", &data);
			add_node_at_specific_position(pos, data);
			break;

		case DELFIRST:
			delete_node_at_first_position();
			break;
		case DELLAST:
			delete_node_at_last_position();
			break;
		case DELATPOS:
			while(1)
			{
				//accept position from the user
				printf("enter pos: ");
				scanf("%d", &pos);

				//validate the position
				if( pos >= 1 && pos <= count_nodes() )
					break;

				printf("invalid position !!!\n");
			}

			delete_node_at_specific_position(pos);
			break;
		case DISP:
			display_list();
			break;

		case DISPREV:
			if( head != NULL )
			{
				printf("list in a reverse order is: ");
				display_reverse(head);
				printf("\n");
			}
			else
				printf("list is empty !!!\n");

			break;

		case REVERSE:
			if( head != NULL )
				reverse_list();
			break;
		}//end of switch control block
	}//end of while loop

	return 0;
}







