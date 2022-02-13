#include<stdio.h>
#include<stdlib.h>

int main(){

char *a[5]={"Hello"};

printf("%s\n",*a);
free(a[3]);
for(int i=0;i<5;i++){
if(i!=3){
printf("a[%d]:%c\n",i,*a[i]);
}
if(i==3){
printf("3\n");
}
}
return 0;

}
