#include <stdio.h>

int main(){
   //#manual method
    printf("Manual Method\n\n");

  int a,b,c,d;
  printf("ENTER FOUR NO\n");
  scanf("%d%d%d%d",&a,&b,&c,&d);
  if(a>=b && a>=c && a>=d){
    printf("max of %d,%d,%d,%d is %d\n",a,b,c,d,a);
  }
  else if(b>=c && b>=d){
    printf("max of %d,%d,%d,%d is %d\n",a,b,c,d,b);
  }
  else if(c>=d){
    printf("max of %d,%d,%d,%d is %d\n",a,b,c,d,c);
  }
  else{
    printf("max of %d,%d,%d,%d is %d\n",a,b,c,d,d);
  }

   //#automatic method
  printf("Automatic method\n\n");

  int n1,n2,n3,n4,max;
  printf("Enter four no\n");
  scanf("%d%d%d%d",&n1,&n2,&n3,&n4);

    if(n1>=n2)
        max=n1;
    else
        max=n2;
    if(max<=c)
        max=c;
    else
        max=max;
    if(max<=d)
        max=d;
    else
        max=max;
    printf("Max of %d,%d,%d,%d is %d\n\n",n1,n2,n3,n4,max);

    //#fully automatic
    printf("Fully Automatic\n\n");
    int arr[4],temp;
    printf("Enter four number\n");
    for(int i=0;i<4;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("max of %d,%d,%d,%d is %d\n",arr[0],arr[1],arr[2],arr[3],arr[3]);
   return 0;
}
