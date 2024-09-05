#include <stdio.h>

int main() {
    int paisa,rupee,remaining_paisa;

    printf("Enter the paisa: ");
    scanf("%d", &paisa);

    rupee = paisa / 100;
    remaining_paisa = paisa % 100;

    printf("%d paisa is equal to %d rupee and %d paisa\n", paisa, rupee, remaining_paisa);
    
    return 0;
}