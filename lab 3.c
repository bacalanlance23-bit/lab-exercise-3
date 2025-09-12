#include <stdio.h>

int main() {
  

    char completename[20];
    char section[15];

    int firstnumber;
    int secondnumber;

    printf("Student Calculator\n");

    printf("Enter your Complete name: \n");
    fgets(completename, sizeof(completename), stdin);

    printf("Enter section: \n");
    fgets(section, sizeof(section), stdin);

    printf("Enter first number: \n");
    scanf("%d", &firstnumber);

    printf("Enter second number: \n");
    scanf("%d", &secondnumber);

    printf("Student Name:, %s\n", completename);
    printf("section: ,%s\n", section );

    printf("%d + %d =", firstnumber, secondnumber);
    printf("d\n", firstnumber + secondnumber);
    printf("%d - %d = ", firstnumber, secondnumber);
    printf("%d \n", firstnumber - secondnumber);
    printf("%d * %d = ", firstnumber, secondnumber);
    printf("%d\n", firstnumber * secondnumber); 
    printf("%d / %d = ", firstnumber, secondnumber);
    printf("%d\n", firstnumber / secondnumber);


   

    return 0;
}
