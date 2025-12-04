/* title	: get.c
 * date		: 04/12/2025
 * author	: Dayanand
 * description	: This function searches the LRU cache for a given key and returns its associated value.
 If the key is found, the node is moved to the front (MRU position) using updatetable().
 If the key is not present, it notifies the user and returns failure.
 It ensures correct LRU behavior by updating recency on every successful access.
 */

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
