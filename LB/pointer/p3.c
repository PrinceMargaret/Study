#include<stdio.h>
void main(){
    int x=30;
    int y=*&x;
    
  
    printf("\n Value of y =%d ", y);
    //printf("\n value =%d ",*y);  gives error
}