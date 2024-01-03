#include <stdio.h>

int main ()
{
    char myName[100];
    int age;
    float height;
    double weight;
    char firstCharOfMyName;
    //Ismni kiriting:
    printf("Ismni kiriting: ");
    scanf("%s", &myName);
    //Yoshni kiriting:
    printf("Yoshni kiriting: ");
    scanf("%d", &age);
    //Bo'y balandligini kiriting:
    printf("Bo'y balandligini kiriting: ");
    scanf("%f", &height);
    //Vaznni kiriting:
    printf("Vaznni kiriting: ");
    scanf("%lf", &weight);
    //Ismingizning birinchi belgisini kiriting:
    printf("Ismingizning birinchi belgisini kiriting: ");
    scanf(" %c", &firstCharOfMyName);
    //Sizning ismingiz:
    printf("Sizning ismingiz: %s\n", myName);
    printf("Sizning yoshingiz: %d\n", age);
    printf("Sizning bo'yingiz: %.1f\n", height);
    printf("Sizning vazningiz: %.1lf\n", weight);
    printf("Sizning ismingizni birinchi belgisi: %c\n", firstCharOfMyName);

    return 0;
}
