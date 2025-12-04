/* title        : get.c
 * date         : 04/12/2025
 * author       : Dayanand
 * description  : This function inserts a new key–value pair into the LRU cache by adding a new node at the front (MRU position).
 After insertion, it identifies and removes the least recently used (LRU) node from the end of the list when capacity is full.
 It also updates the recency order by calling updatetable(key) to correctly position the newly added node.
 This ensures the cache maintains the correct size and preserves LRU behavior during insertions.
 */
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
