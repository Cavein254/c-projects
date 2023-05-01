#include <stdio.h>
#include <stdlib.h>

void display();
void insertAtBegin(struct Node* head, int new_data);
void insertAtEnd(struct Node* head, int new_data);
void insertionAfterNode(struct Node* prev_node, int new_data);
struct Node {
    int data;
    struct Node* next;
};

int main ()
{
    struct Node* first;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;
    struct Node* fifth;

    first = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));
    fifth = (struct Node*)malloc(sizeof(struct Node));

    first->data = 10;
    second->data = 20;
    third->data = 30;
    fourth->data = 40;
    fifth->data = 50;

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;

    display(first);

    struct Node* head = NULL;

    insertAtEnd(&head, 60);
    insertAtEnd(&head, 70);
    insertAtEnd(&head, 80);
    insertAtBegin(&head, 9);
    insertAtBegin(&head, 8);
    insertionAfterNode(head->next, 7);
    insertionAfterNode(head->next, 6);

    display(head);

    return 0;

}

void display(struct Node* ptr)
{
    printf("Linked list elements are: \n");
    while (ptr != NULL) {
        printf("%d \n", ptr->data);
        ptr = ptr->next;
    }
}

void insertAtBegin(struct Node** head, int new_data)
{
    struct Node* new = (struct Node*)malloc(sizeof(struct Node));

    new->data = new_data;
    new->next = (*head);

    (*head) = new;
}

void insertAtEnd(struct Node** head, int new_data)
{
    struct Node* new = (struct Node*)malloc(sizeof(struct Node));
    struct Node* lastnode = *head;

    new->data = new_data;
    new->next = NULL;

    if(*head == NULL) {
        (*head) = new;
        return;
    }

    while (lastnode -> next != NULL) lastnode = lastnode->next;
    lastnode->next = new;
    return;
}

void insertionAfterNode(struct Node* prev_node, int new_data)
{
    if (prev_node == NULL) {
        printf("Given previous node cannot be NULL");
        return;
    }

    struct Node* new = (struct Node*)malloc(sizeof(struct Node));
    new->data = new_data;
    new->next = prev_node->next;
    prev_node->next = new;
}