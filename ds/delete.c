#include<stdio.h>

int main(){
int index,value,size=5,a[5]={1,2,3,4,5};
for(int i=0;i<5;i++){
printf("\nindex:%d\tvalue:%d",i,a[i]);
}
printf("\nEnter the index value to be delete:");
scanf("%d",&index);
for(int i=index;i<size;i++){
a[index]=a[index+1];
}
size--;
for(int i=0;i<size;i++){
printf("\nindex:%d\tvalue:%d",i,a[i]);
}
printf("\n");
return 0;
}
