#include <stdio.h>
#include <stdlib.h>


//template for our node

struct node{
	int age;
	struct node *next;
};

int main(void)
{
	/* declare a node */

	struct node *nodeA, *nodeB, *nodeC;
	struct node *head;


	/* Allocate memory of the node */

	nodeA = (struct node *) malloc(sizeof(struct node));
	nodeB = (struct node *) malloc(sizeof(struct node));
	nodeC = (struct node *) malloc(sizeof(struct node));

	/* Assign value to the node */
	nodeA -> age = 25;
	nodeB -> age = 23;
	nodeC -> age = 1;

	/* Assign address values to the nodes*/

	nodeA -> next = nodeB;
	nodeB -> next = nodeC;
	nodeC -> next = NULL;


	/* Create a head */

	head = nodeA;

	/* Create a temporary pointer */

	struct node *temp;

	temp = head;

	/* traversing the linked list and printing each member*/

	while (temp -> next != NULL)
	{
		printf("%d--->", temp->age);
		temp = temp->next;
	}
	printf("%d-->", temp->age);

	printf("\n");
}
