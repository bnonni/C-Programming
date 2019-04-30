#include <stdio.h>
#include <string.h>

struct student
{
 int no;
 char name[20];
};             

void main()
{
 struct student s;
 s.no = 8;
 strcpy(s.name, "Demo");
 printf("%d  %s \n", s.no, s.name);
}