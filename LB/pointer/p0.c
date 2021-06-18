#include<stdio.h>
void main()
{
    int xyx;
    int *p;
    p=&xyx;
    
    printf("address of xyz in digit format %d \n",p);
    printf("address of xyz in decimal %u \n",p);
    printf("address of xyz in Hexadecimal %p \n",p);
}

