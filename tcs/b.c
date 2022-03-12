#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
int c,n;
scanf("%d",&c);
scanf("%d",&n);
int college[c],total=0;
char studentid[n],per[5],percount=10;
float percentage[n];
char choice1[n],choice2[n],choice3[n];
for(int i=0;i<c;i++){
scanf("%d",&college[i]);
total=total+college[i];
}
char str[30];
for(int i=0;i<n;i++){
scanf("%s",str);
studentid[i]=str[8];
for(int j=0;j<5;j++){
per[j]=str[percount];
percount++;
}
percentage[i]=(float) atoll(per);
choice1[i]=str[18];
choice2[i]=str[22];
choice3[i]=str[26];
}
for(int i=0;i<n;i++){
printf("\nStudent-%c C-%c\n",studentid[i],choice1[i]);
}
return 0;
}
