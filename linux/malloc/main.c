#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

#define CAPACITY 640000

char heap[CAPACITY] = {0};
size_t heap_size = 0;

void *heap_alloc(size_t size)
{
    assert(heap_size + size  <=CAPACITY);
    void *result = heap + heap_size;
    heap_size += size;

    return NULL;
}

void heap_free(void *ptr)
{
    assert(false && "Not implemented ");
}

void collect ()
{
    assert(false && "Not implemented ");
}

int main () 
{
    char *root = heap_alloc(26);
    for (int i = 0; i < 26; i++)
    {
        root[i] = i + 'A';
    }

    return (0);
}