/* title        : get.c
 * date         : 04/12/2025
 * author       : Dayanand
 * description  : This function prints all the entries currently stored in the LRU cache.
 It traverses the linked list from MRU (start) to the LRU (end) node.
 Each node’s key–value pair is displayed in the order of recency.
 It helps the user visualize the current state and ordering of the cache.
 */

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
