#include<stdio.h>
int main()
{
    int i,first,last,middle,n,key,found=0;
    printf("enter number of elements\n");
    scanf("%d",&n);
    printf("enter %d integers\n",n);
    int array[100];
    for (i=0;i<n;i++)
    {
    scanf("%d",&array[i]);
    }
    printf("enter value to find\n");
    scanf("%d",&key);
    first=0;
    last=n-1;
    middle=(first+last)/2;
    while(first<=last)
    {
        if(key<array[middle])
            
            last=middle-1;
            
        else if(array[middle]==key)
        {
            printf("%d found at location %d\n",key,middle+1);
            found=1;
            break;
        }
        else if(key>array[middle])
        {
            first=middle+1;
        }
    }
    if (!found)
   { 
    printf("not found %d isn't present in the list\n",key);
   }
    return 0;
}
