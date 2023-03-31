#include <stdio.h>
#include <stdlib.h>

typedef struct list_t {
        char *data;
        struct list_t *next;
} *list_t;

list_t *add_node(list_t **head, const char *str)
{
        list_t *newNode = malloc(sizeof(struct list_t));

        newNode->data = strdup(str);
        newNode->next = *head;

        *head = newNode;

        return newNode;
}
