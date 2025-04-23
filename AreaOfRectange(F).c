#include<stdio.h>
int area(int l , int b);
int main()
{
    int l, b,  a;
    printf("Enter the length and breadth:");
    scanf("%d%d",&l,&b);
    a=area(l,b);
    printf("The area of a reactange is %d",a);
    return 0;
}
    int area(int l , int b)
{
 int a;
 a=l*b;
 return a;

}
