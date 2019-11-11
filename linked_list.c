#include<stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node * next;
};
struct node * start = NULL;
		
void insert_at_begin(int);
void insert_at_last(int);
void traverse();
void delete_from_begin();
void delete_from_end();

int count = 0;

int main()
{	
	int input, data;
	for(;;)
	{
		printf("\n---------------------------------------\n");
		printf("1. Insert Data In begin of list \n");
		printf("2. Insert Data In end of list \n");
		printf("3. Traverse list \n");
		printf("4. Delete Data In begin of list \n");
		printf("5. Delete Data In begin of list \n");
		printf("6. Exit. \n");
		printf("\n---------------------------------------\n");
		scanf("%d", &input);
		printf("\n---------------------------------------\n");
		
		if(input==1)
		{
			printf("Enter value of element : ");
			scanf("%d", &data);
			insert_at_begin(data);
			printf("Data Inserted Sucessfully.");
		}
		if(input==2)
		{
			printf("Enter value of element : ");
			scanf("%d", &data);
			insert_at_last(data);
			printf("Data Inserted Sucessfully.");
		}
		else if (input == 3)
			traverse();
		else if (input == 4)
			delete_from_begin();  
		else if (input == 5)
			delete_from_end();
		else if (input == 6)
			break;

	}
	return 0;
}

void insert_at_begin(int x)
{
	struct node*t;
    t = (struct node*)malloc(sizeof(struct node));
	count++;
	
	if (start == NULL) 
	{
		start = t;
		start->data = x;
		start->next = NULL;
		return;
	}
  
	t->data = x;
	t->next = start;
	start = t;
}

void insert_at_last(int x) {
  struct node *t, *temp;
 
  t = (struct node*)malloc(sizeof(struct node));
  count++;
 
  if (start == NULL) {
    start = t;
    start->data = x;
    start->next = NULL;
    return;
  }
 
  temp = start;
 
  while (temp->next != NULL)
    temp = temp->next;
 
  temp->next = t;
  t->data   = x;
  t->next   = NULL;
}

void traverse() {
  struct node *t;
 
  t = start;
 
  if (t == NULL) {
    printf("Linked list is empty.\n");
    return;
  }
 
  printf("There are %d elements in linked list.\n", count);
 
  while (t->next != NULL) {
    printf("%d\n", t->data);
    t = t->next;
  }
  printf("%d\n", t->data);
}

void delete_from_begin() {
  struct node *t;
  int n;
 
  if (start == NULL) {
    printf("Linked list is already empty.\n");
    return;
  }
 
  n = start->data;
  t = start->next;
  free(start);
  start = t;
  count--;
 
  printf("%d deleted from beginning successfully.\n", n);
}


void delete_from_end() {
  struct node *t, *u;
  int n;
 
  if (start == NULL) {
    printf("Linked list is already empty.\n");
    return;
  }
 
  count--;
 
  if (start->next == NULL) {
    n = start->data;
    free(start);
    start = NULL;
    printf("%d deleted from end successfully.\n", n);
    return;
  }
 
  t = start;
 
  while (t->next != NULL) {
    u = t;
    t = t->next;
  }
 
  n = t->data;
  u->next = NULL;
  free(t);
 
  printf("%d deleted from end successfully.\n", n);
}
