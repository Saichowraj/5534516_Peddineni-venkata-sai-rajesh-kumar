#include<stdio.h>
int main()
{
    int i,n,ele,pos;
    printf("enter the size:");
    scanf("%d",&n);
    
    int a[n];
    
    printf("enter the elements :");
    
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the element to update :");
    scanf("%d",&ele);
    printf("Enter the position to update :");
    scanf("%d",&pos);
    
    a[pos-1] =ele;
    
    printf("The new array is :");
    for (i=0;i<n;i++){
        printf("%d\t",a[i]);
    
    }
    
}