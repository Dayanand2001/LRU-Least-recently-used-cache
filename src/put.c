/* title        : put.c
 * date         : 04/12/2025
 * author       : Dayanand
 * description  : This function inserts a new key–value pair into the LRU cache or updates an existing one.
 If the key is already present, its value is updated and the node is moved to the MRU position.
 If the cache is full, the least recently used (LRU) node is removed before inserting the new entry.
 New keys are inserted at the front of the list, maintaining correct LRU ordering and cache capacity.
 */

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
