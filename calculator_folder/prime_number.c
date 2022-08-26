#include <stdio.h>
/* This function identifies a prime nunber
 *
 * beware... stay away if you're a prime nunber
 *
 */
void find(int n);
int main() 
{
    int num;
    printf ("Enter a number : ");
    scanf ("%d", &num);
    find(num);
}

void find(int n)
{
    if (n%2 == 0 || n%3 == 0)
    printf ("Not a prime number");
    else
    printf ("Prime number achieved");
}
