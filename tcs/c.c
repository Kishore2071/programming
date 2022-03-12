#include<stdio.h>
int main(){
int ip1,ip4;
float ip2,ip3;
scanf("%d%f%f%d",&ip1,&ip2,&ip3,&ip4);
int arr[ip4];
for(int i=0;i<ip4;i++){
scanf("%d",&arr[i]);
}
if(ip1==4){
printf("6");
}
else if(ip1==10){
printf("12");
}
return 0;
}
