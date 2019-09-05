   #include <stdio.h>
    union p
    {
        int x;
        char y;
    };
    int main()
    {
        union p p, b;
        p.y = 60;
        b.x = 12;
        printf("%d\n", p.y);
    }