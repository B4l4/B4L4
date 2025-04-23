#include<stdio.h>
int search(int a[10],int key)
{
    int i;
    for(i=0;i<10;i++)
    {
        if (a[i]== key)
        {
            return 1;
        }
    }
return 0;
}
int main()
{
    int a[10] = {10,20,13,14,15,23,45,67,31,28};
    int item;
    printf("Enter a search item:");
    scanf("%d",&item);
    int i = search(a,item);
    if(i==1)
    printf("\nSearch Sucessful.");
    else
    printf("\nSearch Unsucessful.");
    return 0;
}