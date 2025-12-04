#include<header.h>

int get(int n)
{
        int key;
        struct node *q;

        printf("Enter the key : ");
        scanf("%d",&key);

        q = start;
        while(q != NULL)
        {
                if(q -> key == key)
                {
                        printf("value : %d\n",q->info);
                        updatetable(key);
                        return 1;
                }
                q = q -> link;
        }
        printf("key is npt present\n");
        return 0;
}
