#include <stdio.h>
    struct student
    {
        char *name;
    };
    struct student s;
    struct student fun(void)
    {
        s.name = "newton";
        printf("%s ", s.name);
        s.name = "alan";
        return s;
    }
    int main()
    {
        struct student m = fun();
        printf("%s ", m.name);
        m.name = "turing";
        printf("%s ", s.name);
    }