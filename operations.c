#include <stdio.h>
#include <stdlib.h>


typedef struct node
{
	int data;
	struct node* next;

}node;


void insertionAtBegin(node** head, int new_data)
{
	node* new = (node*)malloc(sizeof(node));

	new->data = new_data;
	new->next = (*head);

	(*head) = new;
}

void insertionAtEnd(node** head, int new_data)
{
	node* new = (node*)malloc(sizeof(node));
	node* lastnode = *head;

	new->data = new_data;

	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return;
	}

	while (lastnode->next != NULL)
		lastnode = lastnode->next;
	lastnode->next = new;

	return;
}

void insertionAfternode(node* prev_node, int new_data)
{
	if (prev_node == NULL)
	{
		printf("The given previous node cannot be NULL");

		return;
	}

	node* new = (node*)malloc(sizeof(node));

	new->data = new_data;
	new->next = prev_node->next;

	prev_node->next = new;

}

void display(node* node)

{

  while (node != NULL) 
  {

  printf(" %d ", node->data);

  node = node->next;

  }
  printf("\n");

}

int main() 

{

  node* head = NULL;

  insertionAtEnd(&head, 11);

  insertionAtBegin(&head, 20);

  insertionAtBegin(&head, 13);

  insertionAtEnd(&head, 44);

  insertionAfternode(head->next, 15);

  printf("Linked list elements are: ");

  display(head); 

}
