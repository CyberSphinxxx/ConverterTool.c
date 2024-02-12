#include <stdio.h>

int main() {
    double input;
    int choice;

    printf("\nChoose Inches to Meters or Feet to Meters:\n");
    printf("1 for Inches to Meters | 2 for Feet to Meters\n:");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("You chose Inches to Meters\n");
        printf("Enter your height in inches: ");
        scanf("%lf", &input);

        double inchesToMeters = input * 0.0254;
        printf("Your height in meters is: %.2lf meters\n", inchesToMeters);

    } else if (choice == 2) {
        printf("You chose Feet to Meters\n");
        printf("Enter your height in feet: ");
        scanf("%lf", &input);

        double feetToMeters = input * 0.3048;
        printf("Your height in meters is: %.2lf meters\n", feetToMeters);

    } else {
        printf("Your choice is not valid. Please choose 1 or 2.\n");
    }

    return 0;
}
