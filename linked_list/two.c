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

void enqueue(Queue *queue, int value);
int dequeue(Queue *queue, bool *status);
void destroy_queue(Queue *queue);