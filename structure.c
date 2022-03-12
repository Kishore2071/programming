#include<stdio.h>

struct cal{
int ip1;
int ip2;
char c;
};

int calculator(struct obj){
int op=0;
struct cal obj;
switch(obj.c){
case '+':
    op=obj.ip1+obj.ip2;
    break;
case '-':
    op=obj.ip1-obj.ip2;
    break;
case '*':
    op=obj.ip1*obj.ip2;
    break;
case '/':
    op=obj.ip1/obj.ip2;
    break;
default:
    op=-5;
    printf("Invalid Character");
}
if(op>=0){
printf("%d",op);
}
}

int main(){
struct cal obj;
printf("Structure");
printf("\nEnter the inputs:");
scanf("%d%c%d",&obj.ip1,&obj.c,&obj.ip2);
//printf("\nip1:%d\nc:%c\nip2:%d",obj.ip1,obj.c,obj.ip2);
calculator(struct cal obj);
return 0;
}
