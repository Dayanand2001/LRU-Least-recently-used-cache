#include<header.h>

int insertnew(int key,int data)
{
        struct node *q, *temp;

        temp = malloc(sizeof(struct node));
        temp -> info = data;
        temp -> key = key;
        temp -> link = start;
        temp -> linkprev = NULL;

        start = temp;

        q = start;

        while(q -> link != NULL)
                q = q -> link;
        q -> linkprev -> link = NULL;

        free(q);
        updatetable(key);

        return 0;
}
