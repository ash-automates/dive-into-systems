#include <stdio.h>
#include <string.h>

// define struct here
struct personT
{
    char name[64];
    int age;
    float height;
};

int main(void)
{
    struct personT person1;
    strcpy(person1.name, "Daniel");
    person1.age = 35;
    person1.height = 180.5;
    printf("my name is %s\n", person1.name);
    return 0;
}
