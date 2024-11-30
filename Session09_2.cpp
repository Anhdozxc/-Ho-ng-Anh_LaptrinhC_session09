#include <stdio.h>

 int main() {
    int arr[5] = {1, 2, 3, 4, 5}; 
    int pos, newValue;

    printf("Moi ban nhap vi tri can sua (0 - 4): ");
    scanf("%d", &pos); 

    if (pos >= 0 && pos < 5) { 
        printf("Nhap gia tri moi: ");
        scanf("%d", &newValue); 

        arr[pos] = newValue; 

        printf("Mang sau khi sua: ");
        for (int i = 0; i < 5; i++) { 
            printf("%d ", arr[i]);
        }
    } else {
        printf("Vi tri khong hop le!\n");
    }

    return 0;
}


