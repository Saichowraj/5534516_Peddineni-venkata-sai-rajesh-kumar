#include<stdio.h>
int main()
{
    int i,n,ele;
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
    
    
    for (i=n;i>1;i--){
        a[i-1] =a[i-2];
    }
    a[0] = ele;
    
    printf("enter the new array is :");
    for (i=0;i<n;i++){
        printf("%d\t",a[i]);
    
    }
    
}