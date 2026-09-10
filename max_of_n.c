#include <stdio.h>

int main(){
    int n;
    printf("Enter n numbers\n");
    scanf("%d",&n);

    int arr[n],temp;
    for(int i=0;i<n;i++){
        printf("You Have to enter %d numbers more\n",n-i);
        scanf("%d",&arr[i]);
    }
     printf("Max of ");
    for(int i=0;i<n;i++){
        if(i!=n-1)
            printf("%d,",arr[i]);
        else
            printf("%d",arr[i]);
    }
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    
    printf("is %d",arr[n-1]);
}
