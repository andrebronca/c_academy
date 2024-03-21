#include <stdio.h>

int main(){
    char choice;
    puts("Meal Plans:");
    puts("A - Breakfast, Lunch, and Dinner");
    puts("B - Lunch and Dinner only");
    puts("C - Dinner only");
    printf("Your choice: ");
    scanf("%c", &choice);

    printf("You've opted for ");
    switch (choice)
    {
    case 'A':
        printf("Breakfast, ");
        break;
    case 'B':
        printf("Lunch and ");
        break;
    case 'C':
        printf("Dinner ");
        break;
    default:
        puts("as your meal plan.\n");
    }

    return 0;
}