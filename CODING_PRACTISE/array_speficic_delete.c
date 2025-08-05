#include<stdio.h>
int main()
{
    int i,n,ele;
    printf("enter the size:");
    scanf("%d",&n);
    
    int a[n];
    
    printf("enter the elements :");
    
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the position to delete :");
    scanf("%d",&ele);
    
    n--;
    
    for (i=ele;i<n;i++)
    {
        a[i-1] =a[i];
    }
    printf("The new array is :");
    for (i=0;i<n;i++){
        printf("%d\t",a[i]);
    
    }
    
}