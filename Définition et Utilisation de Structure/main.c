#include <stdio.h>
struct Person {
    char name[50];
    int age;
    char prname[50];
};

int main() {
    struct Person person1;
    strcpy(person1.name, "imily");
    strcpy(person1.prname , "abderrazzak");
    person1.age = 30;
    printf("NOM: %s\n", person1.name);
    printf("PRENOM: %s\n", person1.prname);
    printf("Age: %d\n", person1.age);


    return 0;
}
