#include<stdio.h>
int main()
{
    int i,n,ele,pos;
    printf("enter the size:");
    scanf("%d",&n);
    
    int a[n];
    
    printf("enter the elements");
    
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    n++;
    printf("enter the new element:");
    scanf("%d",&ele);
    
    printf("enter the positon:");
    scanf("%d",&pos);
    
    for (i=n;i>pos;i--){
        a[i-1] =a[i-2];
    }
    a[pos-1] = ele;
    
    printf("enter the new array is :");
    for (i=0;i<n;i++){
        printf("%d\t",a[i]);
    
    }
    
}