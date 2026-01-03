#include <stdio.h>
int main() {
    int vehicleCount[4] = {0, 0, 0, 0};  
    int n, type, i;
    int total = 0;
    printf("Enter total number of vehicles: ");
    scanf("%d", &n);
    printf("\nVehicle Types:\n");
    printf("0 - Car\n");
    printf("1 - Bike\n");
    printf("2 - Bus\n");
    printf("3 - Truck\n\n");
    for (i = 0; i < n; i++) {
        printf("Enter vehicle type for vehicle %d: ", i + 1);
        scanf("%d", &type);

        if (type >= 0 && type <= 3) {
            vehicleCount[type]++;
            total++;
        } else {
            printf("Invalid vehicle type!\n");
        }
    }
    printf("\nVehicle Count:\n");
    printf("Cars   : %d\n", vehicleCount[0]);
    printf("Bikes  : %d\n", vehicleCount[1]);
    printf("Buses  : %d\n", vehicleCount[2]);
    printf("Trucks : %d\n", vehicleCount[3]);
    printf("\nTotal Vehicles: %d\n", total);
    return 0;
}