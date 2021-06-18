/*#include<stdio.h>
int main()
{
    printf("hello  c");
    return 0;
}*/
#include<stdio.h>
void main(){
    int a=3;
    int* p=&a;   //& adddress of
    printf("%hex",p);
    printf("%hex",&a);
}