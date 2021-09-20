#include <stdio.h>
#include <stdlib.h>

//using namespace std;
struct Node *createLinkedList(int arr[], int size);
void insertAtBeginning(struct Node *head, int data);
void insertAtEnd(struct Node *head, int data);
void insertAtPosition(struct Node *head, int position,int data);
void *deleteAtPostion(struct Node *head, int data);
struct Node{
    int data;
    struct Node *next;
};


int main()
{
    int a[] = {5,10,15,20};
    struct Node *head;
    head = createLinkedList(a, 4);
    display(head);
    //insertAtBeginning(head, 500);
    // insertAtEnd(head,222);
    //insertAtPosition(head,3,44);
    //struct Node *newHead = deleteAtPostion(head, 20);
    //display(newHead);
}
void display(struct Node *head){
    struct Node *displayHead = head;
    while(displayHead != NULL){
        printf("%d -> ", displayHead->data);
        displayHead = displayHead->next;
    }
    printf("NULL");
    printf("\n");
}
/* Delete At position
void *deleteAtPostion(struct Node *head, int data){

    struct Node *dummyhead = (struct Node *)malloc(sizeof(struct Node));
    dummyhead->next = head;
    struct Node *temp = dummyhead;
    int counter = 0;
    while(temp->next != NULL){
        if(temp->next->data == data){
            //Delete Logic is here
            temp->next = temp->next->next;
            break;
        }else{

            temp = temp->next;
        }
    }
    return dummyhead->next;
}

*/

/*
void insertAtPosition(struct Node *head, int position, int data){

    struct Node *temp =head;
    int counter = 0;
    while(temp != NULL){
        counter++;
        if(counter == position){
            //insert code is here
            struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
            newNode->data = data;
            newNode->next = temp->next;
            temp->next = newNode;
        }
        temp = temp->next;
    }
    display(head);
}
*/

/*
//Insert Data at the end
void insertAtEnd(struct Node *head,int data){

    struct Node *current = head  ;
    //traverse and go to the end of the list
    while(current->next != NULL){
        current = current->next;
    }
    struct Node *temp= (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;

    current->next = temp;

    //display(head);
}
*/

/*
//Insert Data at the Beginning ...
void insertAtBeginning(struct Node *head, int data){
    struct Node *temp= (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = head;
    head = temp;
    struct Node *newHead = temp;
    struct Node *current = newHead;
    display(newHead);
}

*/
struct Node *createLinkedList(int arr[],int size){
    struct Node *head = NULL;
    struct Node *temp = NULL;
    struct Node *current = NULL;
    for(int i = 0; i < size; i++){
        temp =(struct Node *)malloc(sizeof(struct Node));
        temp->data = arr[i];
        temp->next = NULL;
        if(head == NULL){
            head = temp;
            current = temp;
        }else{
            current->next = temp;
            current = current->next;
        }
    }
    return head;
}
