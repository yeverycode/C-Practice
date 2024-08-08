/*include <stdio.h>
#include <stdbool.h>

int getMana() {
    return(222);
}

float getAttackSpeed() {
    return(0.679f);
}

bool isMelee() {
    return(true);
}

int main()
{
    int mana;
    float attackSpeed;
    bool melee;

    mana = getMana();
    attackSpeed = getAttackSpeed();
    melee = isMelee();

    printf("%d\n", mana);
    printf("%f\n", attackSpeed);
    printf("%d\n", melee);

    return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *getName()
{
    char* str = malloc(sizeof(char) * 20);

    strcpy(str, "Mars");

    return str;
}

int main()
{
    char* name;

    name = getName();

    printf("%s\n", name);

    free(name);

    return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void* allocMemory()
{
    void* ptr = malloc(100);
    return ptr;
}

int main()
{
    char* s1;

    s1 = allocMemory();
    strcpy(s1, "Uranus");
    printf("%s\n", s1);
    free(s1);

    return 0;
}

// void *allocMemory()와 같이 함수의 반환값 자료형은 void 포인터이므로 메모리를 할당할 포인터도 void 포인터로 선언


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    char name[20];
    int age;
};

struct Person* allocPerson()
{
    struct Person* p = malloc(sizeof(struct Person));
    strcpy(p->name, "Kalye");
    p->age = 22;

    return p;
}

int main()
{
    struct Person* p1;

    p1 = allocPerson();

    printf("%s\n", p1->name);
    printf("%d\n", p1->age);

    free(p1);

    return 0;
}


#include <stdio.h>
#include <stdbool.h>

float  getArmor() {
    float a = 20.50f;
    return a;
}

bool hasSlowSkill() {
    bool a = false;
    return a;
}

int main()
{
    float armor;
    bool slow;

    armor = getArmor();
    slow = hasSlowSkill();

    printf("%f\n", armor);
    printf("%s\n", slow == true ? "true" : "false");

    return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *getName() {
    char* a = malloc(100);
    strcpy(a, "Neptune");
    return a;
}


int main()
{
    char* name;

    name = getName();

    printf("%s\n", name);

    free(name);

    return 0;
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void* allocMemory() {
    void* a = malloc(100);
    return a;

    void* stats = malloc(100);
    return stats;
}

int main()
{
    char* name;
    float* stats;

    name = allocMemory();
    strcpy(name, "Mercury");
    printf("%s\n", name);
    free(name);

    stats = allocMemory();
    stats[0] = 87.969f;
    stats[1] = 115.8776f;
    printf("%f %f\n", stats[0], stats[1]);
    free(stats);

    return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>

struct Point2D {
    int x;
    int y;
};

struct Point2D* allocPoint2D(){
    struct Point2D* pos1=malloc(sizeof(struct Point2D));
    pos1->x = 90;
    pos1->y = 75;
}

int main()
{
    struct Point2D* pos1;

    pos1 = allocPoint2D();

    printf("%d %d\n", pos1->x, pos1->y);

    free(pos1);

    return 0;
}