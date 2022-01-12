#include<stdio.h>
#include<stdlib.h>
int main(){
FILE *fp;
fp=fopen("input.txt","a");
char ch='i';
fputc(ch,fp);
fclose(fp);
}
