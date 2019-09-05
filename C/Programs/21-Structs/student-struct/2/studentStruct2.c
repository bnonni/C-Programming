

#include <stdio.h>
#include <string.h>

struct student
{
 int no;
 char *name;
};             

void main()
{
 struct student s;
 s.no = 8;
 // strcpy(s.name, "Demo");
 s.name = "Demo";
 printf("%d  %s \n", s.no, s.name);
}