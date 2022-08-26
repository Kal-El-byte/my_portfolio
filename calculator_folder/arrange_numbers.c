#include <stdio.h>  
#include <stdlib.h>  
  
#include<string.h>
/** Arrange numbers in ascending order
 *
 * Return 1
 *
 */

int compare(const int *p, const int *q);  
int (*f)(const void *a, const void *b);  
int main()  
{  
    int a[]={4,7,6,1,3,2};  
    int num=sizeof(a)/sizeof(int);  
    f=&compare;  
    qsort(a, num, sizeof(int), (*f));  
    for(int i=0;i<num;i++)  
    {  
        printf("%d ,",a[i]);  
    }  
      
}  
  
int compare(const int *p, const int *q)  
{  
     if (*p == *q)  
        return 0;  
    else if (*p < *q)  
        return -1;  
    else  
        return 1;  
}  
