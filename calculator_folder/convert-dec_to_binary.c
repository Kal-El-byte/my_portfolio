#include <stdio.h>

int main()
{
	int i, n;
	printf ("Enter a decimal number: ");
	scanf ("%d ", &n);

	for (i=0; i<n; i++)
	{
		if (n%2==0)
			n=i;
		else
			return 1;
	}
}
