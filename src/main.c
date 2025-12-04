#include<header.h>

struct node *start = NULL;

int main()
{
        int n;
        int choice;

        printf("Enter the LRU Cache Capacity : ");
        scanf("%d",&n);

        while(1)
        {
                printf("1.PUT into cache\n");
                printf("2.GET from Cache\n");
                printf("3.Display\n");
                printf("4.Exit\n");

                printf("\nchoose one : ");
                scanf("%d",&choice);

                switch(choice)
                {
                        case 1:
                                put(n);
                                break;
                        case 2:
                                get(n);
                                break;
                        case 3:
                                display();
                                break;
                        case 4:
                                exit(1);
                        default:
                                printf("wrong choice\n");
                                break;
                }
        }

        return 0;
}
