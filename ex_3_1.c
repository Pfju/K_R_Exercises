/*******************************************************************/
/****************** https://github.com/Pfju/ ***********************/
/*******************************************************************/
/* Exercise 3-1.
 * Our binary search makes two test inside the loop, when one
 * would suffice (at the price of more tests outside.)
 * Write a version with only one test inside the loop and
 * measure the difference in run-time.
 */

#include <stdio.h>
#include <time.h>

int binsearch(int x, int v[], int n);
int binsearch2(int x, int v[], int n);

int main()
{
	clock_t t;
	int i, pos;
	unsigned j;
    int array[5] = { 1, 2, 3, 4, 5 };
	pos = 0;
	t = clock();
	for(j = 0; j < 1000000; j++)
		for(i = 1; i < 7; i++)
		{
			pos = binsearch(i, array, 5);
			//printf("%d\n", pos);
		}
	t = clock() - t;
	printf("Time elapsed: %f s\n", ((float)t)/CLOCKS_PER_SEC);
	t = clock();
	for(j = 0; j < 1000000; j++)
		for(i = 1; i < 7; i++)
		{
			pos = binsearch2(i, array, 5);
			//printf("%d\n", pos);
		}
	t = clock() - t;
	printf("Time elapsed: %f s\n", ((float)t)/CLOCKS_PER_SEC);
    return 0;
}

int binsearch(int x, int v[], int n)
{
    int low, high, mid;

    low = 0;
    high = n-1;
    while (low <= high)
    {
	mid = (low+high)/2;
	if (x < v[mid])
	    high = mid - 1;
	else if (x > v[mid])
	    low = mid + 1;
	else	/* found match */
	    return mid;
    }
    return -1;	/* no match */
}

int binsearch2(int x, int v[], int n)
{
    int low, high, mid;

    low = 0;
    high = n-1;
    mid = (low+high)/2;
    while (low <= high && x != v[mid])
    {
	if (x <= v[mid])
	    high = mid - 1;
	else
	    low = mid + 1;

	mid = (low+high)/2;
    }
    return (x == v[mid]) ? mid : -1;
}
