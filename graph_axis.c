#include <stdio.h>

int main(){
    float x,y;
    printf("ENTER VALUE OF TWO NUMBERS X AND Y\n");
    scanf("%f%f",&x,&y);
   if(x>0 && y>0){
    printf("(%.2f,%.2f) lies on first quadrant\n",x,y);
   }
   else if(x<0 && y>0){
    printf("(%.2f,%.2f) lies on secondary quadrant\n",x,y);
   }
   else if(x<0 && y<0){
    printf("(%.2f,%.2f) lies on third quadrant\n",x,y);
   }
   else if(x>0 && y<0){
    printf("(%.2f,%.2f) lies on fourth quadrant\n",x,y);
   }
   else if(x==0 && y!=0){
    printf("(%.2f,%.2f) lies on x axis\n",x,y);
   }
   else if(y==0 && x!=0){
    printf("(%.2f,%.2f) lies on y axis\n",x,y);
   }
   else if(x==0 && y==0){
    printf("(%.2f,%.2f) is origin",x,y);
   }
    
}