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
