#include <stdio.h>
#include <stdlib.h>
    struct student
    {
        char *c;
    };
     main()
    {
        struct student *s;
        (*s).c = "hello";
        printf("%s", s);
    }