#include <stdio.h>
#include <stdlib.h>
#define size 30

typedef struct node
{
    int number;
    struct node *next;
} node;

void insertItem(node *start)
{
    char inbuf[size];
    int num;

    printf("Enter a number: \n");
    fgets(inbuf, size, stdin);
    sscanf(inbuf, "%i", &num);
    if (start == NULL)
    {
        start = (node*)malloc(sizeof(node));
        // start->next = NULL;
        start->number = num;

        insertItem(start->next);
    }
    else if (start != NULL && start->number > num)
    {
        start->next = NULL;
    }
    else
    {
        node *newNode = (node*)malloc(sizeof(node));
        newNode->number = num;
        start->next = newNode;
        insertItem(start->next);
    }
}

int main()
{
    char inbuf[size];
    node *start;
    // start->next = NULL;
    
    insertItem(start);

    node *current = start;
    while (current != NULL)
    {
        printf("The number is %i\n", current->number);
        current = current->next;
    }

    return 0;
}