#include<stdio.h>
#include<stdlib.h>

void insertAtB(int);
void insertAtE(int);
void insertAtSP(int, int);
void deleteAtB();
void deleteAtE();
void deleteAtSP(int);
void showAll();
int SearchNode(int);
int countNode();

struct Node {
    int data;
    struct Node *next;
};

void revDisplay(struct Node*);
struct Node *start = NULL;

void main() {
    int choice, data, pos;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Insert at Specific Position\n");
        printf("4. Delete from Beginning\n");
        printf("5. Delete from End\n");
        printf("6. Delete from Specific Position\n");
        printf("7. Show All \n");
        printf("8. Show All Reverse Data\n");
        printf("9. Search Node\n");
        printf("10. Exit\n");

        printf("Enter your choice:");
		
        scanf("%d", &choice);
		
		

        switch (choice) {
            case 1:
                printf("Enter data to insert at beginning: ");
                scanf("%d", &data);
                insertAtB(data);
                break;
            case 2:
                printf("Enter data to insert at end: ");
                scanf("%d", &data);
                insertAtE(data);
                break;
            case 3:
                printf("Enter position and data to insert: ");
                scanf("%d %d", &pos, &data);
                insertAtSP(pos, data);
                break;
            case 4:
                deleteAtB();
                break;
            case 5:
                deleteAtE();
                break;
            case 6:
                printf("Enter position to delete: ");
                scanf("%d", &pos);
                deleteAtSP(pos);
                break;
            case 7:
                
                showAll(); //forwart data
                break;
            case 8:
                
                revDisplay(start); //reverse data
                break;
            case 9:
              printf("Search Node:");
                scanf("%d", &data);
                printf("%d\n",SearchNode(data));
                break;
            case 10:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}


void insertAtB(int x) {
    struct Node *temp = malloc(sizeof(struct Node));
    if (temp == NULL) {
        printf("No space\n");
        return;
    }
    temp->data = x;
    temp->next = start;
    start = temp;
}

void insertAtE(int x) {
    if (start == NULL) {
        insertAtB(x);
        return;
    }
    struct Node *temp1 = start;
    while (temp1->next != NULL) {
        temp1 = temp1->next;
    }
    struct Node *temp = malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = NULL;
    temp1->next = temp;
}

void insertAtSP(int p, int x) {
    if (p <= 1) {
        insertAtB(x);
        return;
    }
    if (p > countNode()) {
        insertAtE(x);
        return;
    }
    struct Node *temp = malloc(sizeof(struct Node));
    temp->data = x;
    struct Node *temp1 = start;
    for (int i = 1; i < p - 1; i++) {
        temp1 = temp1->next;
    }
    temp->next = temp1->next;
    temp1->next = temp;
}

void deleteAtB() {
    if (start == NULL) {
        printf("List is Empty\n");
        return;
    }
    struct Node *temp1 = start;
    start = start->next;
    free(temp1);
}

void deleteAtE() {
    if (start == NULL || start->next == NULL) {
        deleteAtB();
        return;
    }
    struct Node *temp1 = start;
    struct Node *temp2 = start;
    while (temp1->next != NULL) {
        temp2 = temp1;
        temp1 = temp1->next;
    }
    temp2->next = NULL;
    free(temp1);
}

void deleteAtSP(int p) {
    if (start == NULL) {
        printf("List is empty\n");
        return;
    }
    if (p <= 1) {
        deleteAtB();
        return;
    }
    if (p > countNode()) {
        printf("Position out of range\n");
        return;
    }
    struct Node *temp1 = start;
    for (int i = 1; i < p - 1; i++) {
        temp1 = temp1->next;
    }
    struct Node *temp2 = temp1->next;
    temp1->next = temp2->next;
    free(temp2);
}

void showAll() {
    struct Node *temp1 = start;
    while (temp1 != NULL) {
        printf("%d\n", temp1->data);
        temp1 = temp1->next;
    }
    
}

void revDisplay(struct Node *temp) {
    if (temp == NULL) return;
    revDisplay(temp->next);
    printf("%d\n", temp->data);
}

int SearchNode(int se)
{
int index=-1;
if(start==NULL)return index;
struct Node *temp=start;
while(temp!=NULL)
{
index++;
if(temp->data==se)
{
return index;

}
temp=temp->next;

}
return -1;


}

int countNode() {
    int c = 0;
    struct Node *temp1 = start;
    while (temp1 != NULL) {
        c++;
        temp1 = temp1->next;
    }
    return c;
}