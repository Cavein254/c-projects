#include <stdio.h>
#include <stdlib.h>

typedef struct listint_s 
{
    int n;
    struct lintint_s *next;
} listint_t;

size_t print_listint(const listint_t *h)
{
    size_t n;
    n = 0;

    while (h != NULL)
    {
        printf("%d\n", h->n);
        h = h->next;
        n++;
    }
    return (n);

} 

int main()
{


listint_len