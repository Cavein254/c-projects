#include <stdio.h>
#include <stdlib.h>

void display();

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
    printf("||||||||||||||||||||||||||||||");
    display(second);
    printf("||||||||||||||||||||||||||||||");
    display(third);
    printf("||||||||||||||||||||||||||||||");
    display(fourth);
    printf("||||||||||||||||||||||||||||||");
    display(fifth);

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