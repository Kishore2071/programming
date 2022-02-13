#include<stdio.h>

int main(){
int index,value,a[5]={1,2,4,5};
for(int i=0;i<4;i++){
printf("\nindex:%d\tvalue:%d",i,a[i]);
}
printf("\nEnter the index value:");
scanf("%d",&index);
printf("\nEnter the value:");
scanf("%d",&value);
for(int i=4;i>=index;i--){
a[i+1]=a[i];
}
a[index]=value;
printf("\nOutput:");
for(int i=0;i<5;i++){
printf("\nindex:%d\tvalue:%d",i,a[i]);
}
return 0;
}
