#include <stdio.h>
#define NAME_LEN 10
struct part {
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
};

void print_part (struct part p);
void update_part (struct part *p);
struct part build_part (int number, const char * name, int on_hand);



int main()
{
    struct part myPart;
    myPart=build_part(12,"gift",1);
    update_part(&myPart);
    print_part(myPart);
    
    struct part inventory[3];
    inventory[0]=build_part(1,"a",1);
    inventory[1]=build_part(2,"b",1);
    inventory[2]=build_part(3,"c",1);
    
    
    struct part *p_inventory;
    p_inventory=malloc(3*sizeof(struct part));
    p_inventory[0]=build_part(1,"a",1);
    print_part(p_inventory[0]);
    
    
    
    return 0;
}

void print_part (struct part p){
    printf("Part number: %d\n", p.number);
}

void update_part (struct part *p){
    p->number = 123;
}

struct part build_part (int number, const char * name, int on_hand)
{
    struct part p;
    p.number = number;
    strcpy(p.name, name);
    //p.name=name; /*WRONG*/
    p.on_hand = on_hand;
    return p;
}




