/* Stack Implementation using Single Linked List (SLL) */
/*
@author Pranav Yadav
*/
#include<stdio.h>
#include<stdlib.h>
// Stack of Integers
/* Structure is used to create nodes
'data' stores the integer data of node
and '*next' is used to store the address
of next node in the list
*/
typedef struct node
{
	int data;
	struct node *next;
} node;
/*
'*start' is used to keep track of
first node in the list,
'*top' is used to keep track of 
topmost node in the list
*/
node *start = NULL;
node *top = NULL;

// push() function is used to push an element in the stack
void push(int val)
{
	// ptr is a pointer of type struct node 
	node *ptr;
	// malloc() function is used to allocate memory dynamically, to new node
	// 'newnode' is used to reference a new node, 
	// to which, malloc() allocates memory
	node *newnode = (node *) malloc(sizeof(node));
	newnode->data = val;
	newnode->next = NULL;
	if (start == NULL)
	{
		start = newnode;
		top = newnode;
	}
	else
	{
		// Initially ptr should point to the first node in the list,
		// so we can traverse through list
		ptr = start;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = newnode;
	}
	top = newnode;
	newnode->next = NULL;
}
// pop() function is used to delete the topmost node the stack
void pop()
{
	node *ptr;
	if (start == NULL)
	{
		printf("\nNothing to Delete : Stack is Empty !!\n\n");
	}
	else
	{
		if (top == start)
		{
			printf("\n '%d' is Popped\n", top->data);
			free(top);
			start = NULL;
		}
		else
		{
			ptr = start;
			while (ptr->next->next != NULL)
			{
				ptr = ptr->next;
			}
			printf("\n %d is Popped\n", top->data);
			free(top);
			top = ptr;
			ptr->next = NULL;
		}
	}
}
// peep() function is used to get the
// element at the top
void peep()
{
  /* If start or top points to NULL, it implies that stack is empty */
	if (start == NULL)
	{
		printf("\nStack is Empty !!\n\n");
	}
	else
	{
		printf("\n Element at the Top = %d\n", top->data);
	}
}
// display() function is used to display
// all the elements in stack
void display()
{
	node *ptr;
	if (start == NULL)
	{
		printf("\nStack is Empty !!!\n");
	}
	else
	{
		ptr = start;
		printf("\nStack Elements : \n");
		while (ptr != NULL)
		{
			printf("%d\t", ptr->data);
			ptr = ptr->next;
		}
		printf("\n");
	}
}

int main()
{
	int choice, val;
	while (1)
	{
	  // menu driven program for stack ADT
		printf("\n\t\t\tMENU\n");
		printf("——————————————————");
		printf("\n1. Push\n2. Pop\n3. Peep\n4. Display\n5. Exit\n");
		printf("——————————————————");
		//choice should be an Integer
		printf("\nEnter your choice : ");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
		  //value should be an Integer
			printf("Enter value to push: ");
			scanf("%d", &val);
			push(val);
			break;
		case 2:
			pop();
			break;
		case 3:
			peep();
			break;
		case 4:
			display();
			break;
		case 5:
		  // exit(0) is used to exit the program with code 0
		  // i.e., in turn break the loop
			exit(0);
		default:
			printf("Enter a valid choice!!\n");
		}
	}

	return 0;
}
