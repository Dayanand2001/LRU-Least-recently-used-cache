/* title 	: main.c
 * date		: 04/12/2025
 * author	: Dayanand
 * description	: This program implements an LRU (Least Recently Used) Cache using a doubly linked list in C.
 It allows users to insert (PUT), retrieve (GET), and display cache entries interactively.
 The cache maintains the most recently used item at the front and evicts the least recently used item when full.
 Users can set the cache capacity and manage entries through a simple menu-driven interface.
 */

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
