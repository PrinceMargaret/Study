#include<stdio.h>
int main(){
int i;           //          ____________________
int arr[5]={1}; // arr +>>> | 1 | 0 | 0 | 0 | 0 |    by default store 0 otherwise it omit garbages value. 
                //           ____________________
for(i=0;i<5;i++){
  printf("%d",arr[i]);
}
return 0;
}

