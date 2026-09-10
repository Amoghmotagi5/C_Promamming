#include <stdio.h>

int main() {
    // Write C code here
    int n,num,x;
    printf("Enter how many digit of number you will give\n");
    scanf("%d",&n);
    printf("Enter the %d digit no\n",n);
    scanf("%d",&num);
    for(int i=1;i<=n;i++){
        x=num%10;
        printf("%d\n",x);
        num=num/10;
    }

    return 0;
}