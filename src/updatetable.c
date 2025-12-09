/* title        : updatetable.c
 * date         : 04/12/2025
 * author       : Dayanand
 * description  : This function moves a recently accessed or updated key to the front (MRU position) of the LRU cache.
 It detaches the target node from its current position by updating its previous and next pointers.
 The node is then reattached at the head of the list, ensuring correct LRU ordering.
 This operation maintains cache efficiency by keeping the most recently used entries at the start.
 */

#include<header.h>

int updatetable(int key)
{
	struct node *q;

	q = start;
	while(q != NULL)
	{
		if(q->key == key)
		{
			if(q == start)
				return 0;

			if(q -> linkprev != NULL)
				q -> linkprev -> link = q -> link; // give the prev node address to next node

			if(q -> link != NULL)
				q -> link -> linkprev = q -> linkprev;

			q -> link = start;
			q -> linkprev = NULL;
			start -> linkprev = q;
			start = q;

			return 0;
		}
		q = q -> link;
	}
	return 0;
}
