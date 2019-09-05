#include <stdio.h>
    struct student
    {
        char *name;
    };
    int main()
    {
        struct student s, m;
        s.name = "demo";
        m = s;
        printf("%s %s", s.name, m.name);
    }
