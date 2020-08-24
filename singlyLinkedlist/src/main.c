#include <stdio.h>
#include <stdlib.h>
#include "node.h"
#include "list.h"
node_t *head = NULL;

int main(void) {
	/*dd_node_at_last_position(11);
	 add_node_at_last_position(22);*/
	add_node_at_first_position(10);
	add_node_at_first_position(40);
	add_node_at_first_position(90);
	add_node_at_first_position(60);
	printf("node count = %d \n", count_node());
	display();
	int pos = 4;
	if (pos > count_node() && pos <= 0) {
		printf("Invalid position");
	} else {
		add_node_at_specific_position(100, pos);
		display();
	}

	return 0;
}
