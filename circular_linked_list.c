//circular linked list
#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int data;
	struct Node *next
}node;

void insert(node *ptr, int data){
	node *startPtr = ptr;
	while(ptr->next != startPtr){
		ptr = ptr->next; 
	}
	ptr->next = (node*)malloc(sizeof(node));
	ptr = ptr->next;
	ptr->data = data;
	ptr->next = startPtr;
}

void delete(node *ptr, int data){
	node *startPtr = ptr;
	node *temp;
	while(ptr->next != startPtr){
		if(ptr->next->data == data){
			temp = ptr->next;
			ptr->next = temp->next;
			free(temp);
		}
		ptr = ptr->next;
	}
	if(ptr->next == startPtr && (ptr->next->data)!=data){
		printf ("data not found \n");
		return;
	}
}
void print(node *startPtr, node* pointer){
	if (pointer == startPtr){
		// printf("%d ", pointer->data); //head is dummy node
		return;	
	}
	else{
		printf("%d ", pointer->data);
		print(startPtr, pointer->next);
	}
}

int find(node *ptr, int data){
	node *start = ptr;
	while(ptr->next != start){
		if(ptr->next->data == data){
			return 1;
		}
		else{
			ptr = ptr->next;
		}
	}
	return 0;
}

int main(){
	node *start, *temp;
	int data;
	start = (node*)malloc(sizeof(node));
	temp = start;
	temp->next = start;

	printf("1. Insert \n");
	printf("2. Delete \n");
	printf("3. Print \n");
	printf("4. Find \n");

	while(1){
		int query; 
		scanf("%d", &query);
		switch(query){
			case 1:
				scanf ("%d", &data);
				insert(start, data);
				// print(start,start->next);
				break;
			case 2: 
				scanf("%d",&data);
				delete(start, data);
				print(start,start->next);
				break;
			case 3:
				printf("The List is ");
				print(start,start->next);
				break;
			case 4:
				scanf("%d", &data);
				int status = find(start, data);
				if(status){
					printf("elements found \n");
				}
				else{
					printf("elements not found \n");
				}
				break;
		}
	}
}

