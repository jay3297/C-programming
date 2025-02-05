#include <stdio.h>
void main() {
    char arr[5]="ketul";
    
    for (int i=0;i<5;i++) {
        for (int j=0;j<4; j++) {
            printf(" ");
        }
        for (int j=i;j>=0;j--) {
            printf("%c",arr[j]);
        }
        printf("\n");
    }
}
