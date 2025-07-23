#include <stdio.h>

int main() {
    int choice;

    printf("This is a menu demo:\n");
    printf("Enter your choice: 1. Largest  2. Smallest  3. Average\n");

    while (1) {
        if (scanf("%d", &choice) != 1) {
            while (getchar() != '\n'); // Clear input buffer
            printf("Invalid input! Not a number.\n");
            continue;
        }

        if (choice < 1 || choice > 3) {
            printf("Invalid choice, try again!\n");
            continue;
        }
        break;
    }

    int i, n, num;
    
    switch (choice) {
        case 1: {
            int largest;

            printf("Number of inputs: ");
            scanf("%d", &n);
            printf("Enter values:\n");

            for (i = 0; i < n; i++) {
                scanf("%d", &num);
                if (i == 0) {
                    largest = num; 
                } else if (num > largest) {
                    largest = num;
                }
            }

            printf("Largest = %d\n", largest);
            break;
        }

        case 2: {
            int smallest;

            printf("Number of inputs: ");
            scanf("%d", &n);
            printf("Enter values:\n");

            for (i = 0; i < n; i++)  {
                scanf("%d", &num);
                if (i == 0) {
                    smallest = num;
                } else if (num < smallest) {
                    smallest = num;
                }
            }

            printf("Smallest = %d\n", smallest);
            break;
			}

        case 3: {
            int sum = 0;
            float average;

            printf("Number of inputs: ");
            scanf("%d", &n);
            printf("Enter values:\n");

            for (i = 0; i < n; i++) {
                scanf("%d", &num);
                sum += num; 
            }

            average = (float)sum / n;
            printf("Average = %.2f\n", average);
            break;
        }
    }

    printf("Your choice: %d\n", choice);
    return 0;
}

