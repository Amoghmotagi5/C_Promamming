#include <stdio.h>

int main(){
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
}