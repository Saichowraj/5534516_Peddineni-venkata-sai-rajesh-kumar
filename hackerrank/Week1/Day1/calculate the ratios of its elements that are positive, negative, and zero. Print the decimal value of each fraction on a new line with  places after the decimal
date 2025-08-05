#include<stdio.h>

int main(){
    int i,n,pos=0, neg=0, zero=0;
    scanf("%d", &n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n;i++){
        if(arr[i]>0){
           pos++; 
        }
        else if (arr[i]<0){
            neg++;
        }
        else {
            zero++;
        }
        
    }
    
    printf("%.6f\n",(float)pos/n);
    printf("%.6f\n",(float)neg/n);
    printf("%.6f\n",(float)zero/n);
    
    return 0;
    
}