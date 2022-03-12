#include<stdio.h>
#include<stdlib.h>

int main(){
int size=0,element,a[]={1,2,3,4,5};
printf("Array\n");
for(int i=0;i<5;i++){
printf("a[%d]:%d\n",i,a[i]);
}
printf("Enter the element to remove:");
scanf("%d",&element);
for(int i=element;i<5;i++){
a[i]=a[i+1];
}
printf("\nAfter Deleted:\n");
for(int i=0;i<4;i++){
printf("a[%d]:%d\n",i,a[i]);
}
free(a[5]);
size=sizeof(a)/sizeof(a[0]);
printf("Size of array is %d",size);
return 0;
}
