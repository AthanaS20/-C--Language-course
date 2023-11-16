#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
    string age;
}
person;

int main(void)
{
    person people[2];
    people[0].name = "Athana";
    people[0].number = "+55-21-9652348";
    people[0].age = "28";

    people[1].name = "Larissa";
    people[1].number = "+55-21-9325847";
    people[1].age = "25";

    string s = get_string("Name: ");

       for (int i = 0; i < 3; i++)
   {
        if (strcmp(people[i].name, s) == 0)
        {
            printf("Found %s %s\n", people[i].number, people[i].age);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}