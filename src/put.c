#include<header.h>

int put(int n)
{
        struct node *q,*temp;
        static int num = 0;
        int key;
        int data;
        int found = 0;

        printf("enter the key : ");
        scanf("%d",&key);
        printf("enter the value for key : ");
        scanf("%d",&data);

        q = start;

        while(q != NULL)
        {
                if(q -> key == key)
                {
                        found = 1;
                        break;
                }
                q = q -> link;
        }

        if(found == 1)
        {
                q -> info = data;
                updatetable(key);
                return 0;
        }

        if(num >= n)
        {
                insertnew(key,data);
                return 0;
        }

        temp = malloc(sizeof(struct node));

        temp -> info = data;
        temp -> key = key;
        temp -> link = start;
        temp -> linkprev = NULL;

        if(start != NULL)
                start -> linkprev = temp;

        start = temp;
        num++;

        return 0;
}
