#include <stdio.h>
int main() {
int n,sum=0;
printf("Enter The last number\n");
scanf("%d",&n);

for(int i=1;i<=n;i++){
    if(i!=n)
        printf("%d+",i);
    if(i==n)
        printf("%d=",i);
    sum=sum+i;
}
printf("%d",sum);
}
