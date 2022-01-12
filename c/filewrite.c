#include<stdio.h>
#include<stdlib.h>
int main(){
FILE *fp;
fp=fopen("input.txt","w");
char ch='a';
fputc(ch,fp);
fclose(fp);
}
