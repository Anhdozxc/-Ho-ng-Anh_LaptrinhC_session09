#include <stdio.h>

 int main() {
    int arr[100]; 
    int n, pos;

    printf("Moi ban nhap so luong phan tu ban muon nhap (toi da 100): ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) { 
        printf("So luong phan tu phai trong khoang 1 den 100!\n");
        return 1; 
    }
    printf("Nhap gia tri cho mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Nhap vi tri can xoa (0 - %d): ", n - 1);
    scanf("%d", &pos);

    if (pos >= 0 && pos < n) { 
        for (int i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; 
        printf("Mang sau khi xoa: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("Vi tri khong hop le!\n");
    }

    return 0;
}



