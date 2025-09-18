#include <stdio.h>
int main() {
    char name[50];
    int age;
    float percent;
    double cgpa;

    printf("Enter name:\n ");
    scanf("%s", name);
    printf("Enter age:\n ");
    scanf("%d", &age);
    printf("Enter percentage:\n ");
    scanf("%f", &percent);
    printf("Enter CGPA:\n ");
    scanf("%lf", &cgpa);

    printf("\nStudent Details\n");
    printf("Name: %s\nAge: %d\nPercentage: %.2f\nCGPA: %.2lf\n", name, age, percent, cgpa);
    return 0;
}
