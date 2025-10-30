#include <stdio.h>
int main() {
    char  item1[30], item2[30], item3[30];
    int  qty1, qty2, qty3;
    float  price1, price2,price3, total1, total2,total3, grandTotal;
    
    printf("=== MEDICAL LAB EQUIPMENT BILL GENERATOR ===\n");
    printf("\nEnter name of first equipment: ");
    scanf("%s", item1);
    printf("Enter quantity: ");
    scanf("%d", &qty1);
    printf("Enter price per unit: ");
    scanf("%f", &price1);
    
    printf("\nEnter name of second equipment: ");
    scanf("%s", item2);
    printf("Enter quantity: ");
    scanf("%d", &qty2);printf("Enter price per unit: ");
    scanf("%f", &price2);
    
    printf("\nEnter name of third equipment: ");
    scanf("%s", item3);
    printf("Enter quantity: ");
    scanf("%d", &qty3);
    printf("Enter price per unit: ");
    scanf("%f", &price3);


    total1= qty1*price1;
    total2= qty2*price2;
    total3= qty3*price3;
    grandTotal = total1 + total2+ total3;


    printf("\n\n========= MEDICAL LAB EQUIPMENT BILL =========\n");
    printf("S.No\tEquipment\tQty\tPrice\tTotal\n");
    printf("-----------------------------------------------\n");
    printf("1\t%-15s\t%d\t%.2f\t%.2f\n", item1, qty1, price1, total1);
    printf("2\t%-15s\t%d\t%.2f\t%.2f\n", item2, qty2, price2, total2);
    printf("3\t%-15s\t%d\t%.2f\t%.2f\n", item3, qty3, price3, total3);
    printf("-----------------------------------------------\n");
    printf("Grand Total:\t\t\t\t%.2f\n", grandTotal);
    printf("===============================================\n");
    printf("Thank you for purchasing! Stay Healthy!\n");


    return 0;
}
