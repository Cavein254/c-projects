#include <stdlib.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct Node
{
    int value;
    struct Node *next;    
} Node;

typedef struct
{
    Node *head;
    Node *tail;
    int size;
} Queue;

Queue *create_queue();
int size(Queue *queue);
bool is_empty(Queue *queue);
int peek(Queue *queue, bool *status);
void enqueue(Queue *queue, int value);
int dequeue(Queue *queue, bool *status);
void destroy_queue(Queue *queue);

Queue *create_queue()
{
    Queue *queue = malloc(sizeof(Queue));
    queue ->head = NULL;
    queue->tail = NULL;
    queue->size = 0;

    return queue;
}

int size(Queue *queue)
{
   return queue->size; 
}

bool is_empty(Queue *queue)
{
    return (queue->size == 0);
}

int peek(Queue *queue, bool *status)
{
    if (is_empty(queue))
    {
        *status = false;
        return NULL;
    }

    *status = true;
    return queue->head->value;
}

void enqueue(Queue *queue, int value)
{
    Node *newNode = malloc(sizeof(Node));
    newNode->value = value;
    newNode->next = NULL;

    if (is_empty(queue))
    {
        queue->head = newNode;
        queue->tail = newNode;
    }
    else
    {
        queue->tail->next = newNode;
        queue->tail = newNode;
    }

    queue->size++;

}
int dequeue(Queue *queue, bool *status);
void destroy_queue(Queue *queue);