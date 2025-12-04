#include<header.h>

void display()
{
        struct node *q;

        printf("The LRU cach [key : value] : \n");
        q = start;

        while(q != NULL)
        {
                printf("[%d : %d]\n",q -> key,q -> info);
                q = q -> link;
        }
}
