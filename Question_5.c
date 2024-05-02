#include <stdio.h>

// Define structure for car
struct Car {
    char model[20];
    int year;
    float price;
};

int main() {
    int n;

    printf("Enter the number of cars: ");
    scanf("%d", &n);

    
    struct Car cars[n];

    
    for (int i = 0; i < n; i++) {
        printf("Enter model, year, and price for car %d: ", i + 1);
        scanf("%s %d %f", cars[i].model, &cars[i].year, &cars[i].price);
    }

    
    printf("\n**Details of %d cars:**\n", n);
    for (int i = 0; i < n; i++) {
        printf("Car %d: Model - %s, Year - %d, Price - $%.2f\n", i + 1, cars[i].model, cars[i].year, cars[i].price);
    }

    return 0;
}
