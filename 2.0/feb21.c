#include <stdio.h>
int main() {
    int i, j, rows;
    printf("How high will the half pyramid be? ");
    scanf("%d", &rows);
    for (i=1; i<=rows; ++i) {
        for (j=1; j<=i; ++j) {
            printf("**");
        }
        printf("\n");
    }
    return 0;
}


// int main() {
//     int i;
//     for (i=1;i<11;++i) {
//         printf("%d ", i);
//     }
//     return 0;
// }

