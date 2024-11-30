#include <stdio.h>

 int main() {
    int arr[100], n = 0, choice, pos, value;

    while (1) {
        printf("\nMENU\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: 
                printf("Moi ban nhap so luong phan tu (toi da 100): ");
                scanf("%d", &n);
                if (n > 0 && n <= 100) {
                    for (int i = 0; i < n; i++) {
                        printf("Phan tu %d: ", i);
                        scanf("%d", &arr[i]);
                    }
                } else {
                    printf("So luong khong hop le!\n");
                    n = 0;
                }
                break;
            case 2:
                printf("Mang hien tai: ");
                for (int i = 0; i < n; i++) printf("%d ", arr[i]);
                printf("\n");
                break;
            case 3: 
                if (n < 100) {
                    printf("Nhap gia tri can them: ");
                    scanf("%d", &value);
                    arr[n++] = value;
                } else {
                    printf("Mang da day!\n");
                }
                break;
            case 4: 
                printf("Nhap vi tri can sua (0 - %d): ", n - 1);
                scanf("%d", &pos);
                if (pos >= 0 && pos < n) {
                    printf("Nhap gia tri moi: ");
                    scanf("%d", &value);
                    arr[pos] = value;
                } else {
                    printf("Vi tri khong hop le!\n");
                }
                break;
            case 5: 
                printf("Nhap vi tri can xoa (0 - %d): ", n - 1);
                scanf("%d", &pos);
                if (pos >= 0 && pos < n) {
                    for (int i = pos; i < n - 1; i++) arr[i] = arr[i + 1];
                    n--;
                } else {
                    printf("Vi tri khong hop le!\n");
                }
                break;
            case 6: 
                printf("Ket thuc.\n");
                return 0;
            default: 
                printf("Lua chon khong hop le!\n");
        }
    }
    
    return 0;
}





