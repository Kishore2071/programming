#include <stdio.h>
#include <string.h>
struct Student{
    int id;
    char name[20];
};
int main()
{
    struct Student s1;
    s1.id=1;
    strcpy(s1.name,"Ann");
    printf("Student id %d\n",s1.id);
    printf("Student name %s\n", s1.name);
    return e;
}