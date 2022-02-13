#include<stdio.h>

int main(){

int a=10;
int *b;
b=&a;
printf("b:%d\n",*b);
printf("a:%d\n",a);
*b=*b*2;
printf("b:%d\na:%d\n",*b,a);
return 0;

}
