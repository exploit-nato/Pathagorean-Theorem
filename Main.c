#include <stdio.h>

int main(void){
    int legA, legB, legC;
    printf("Enter Leg A: ");
    scanf("%d", &legA);
    printf("Enter Leg B: ");
    scanf("%d", &legB);
    legC = sqrt((legA * legA) + (legB * legB));
    printf("Leg C = %d", legC);
}
