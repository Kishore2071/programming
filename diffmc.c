#include<stdio.h>
#include<stdlib.h>

int main(){
int *p,*p1;
int i;
p=(int *)malloc(3*sizeof(int));
p1=(int *)calloc(3,sizeof(int));
printf("Values in *p\n");
for(int i=0;i<3;i++)
	printf("%d\t",p[i]);
printf("Values of *p1\n");
for(int i=0;i<3;i++){
	printf("%d\t",p1[i]);
}
return 0;
}
