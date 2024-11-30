#include <stdio.h>

 int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) if (n % i == 0) return 0;
    return 1;
}
 int main() {
    int arr[100], n = 0, choice, pos, value;

    while (1) {
        printf("\nMENU\n");
        printf("1. Nhap so phan tu va gia tri cac phan tu\n");
        printf("2. In gia tri cac phan tu\n");
        printf("3. In gia tri cac phan tu chan va tinh tong\n");
        printf("4. In gia tri lon nhat va nho nhat\n");
        printf("5. In so nguyen to va tinh tong\n");
        printf("6. Thong ke so xuat hien trong mang\n");
        printf("7. Them phan tu vao vi tri chi dinh\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Moi ban nhap so luong phan tu (toi da 100): ");
            scanf("%d", &n);
            for (int i = 0; i < n; i++) {
                printf("Phan tu %d: ", i);
                scanf("%d", &arr[i]);
            }
        } else if (choice == 2) { 
            printf("Mang hien tai: ");
            for (int i = 0; i < n; i++) printf("%d ", arr[i]);
            printf("\n");
        } else if (choice == 3) {
            int sum = 0;
            printf("Cac phan tu chan: ");
            for (int i = 0; i < n; i++) {
                if (arr[i] % 2 == 0) {
                    printf("%d ", arr[i]);
                    sum += arr[i];
                }
            }
            printf("\nTong cac phan tu chan: %d\n", sum);
        } else if (choice == 4) { 
            int max = arr[0], min = arr[0];
            for (int i = 1; i < n; i++) {
                if (arr[i] > max) max = arr[i];
                if (arr[i] < min) min = arr[i];
            }
            printf("Gia tri lon nhat: %d\n", max);
            printf("Gia tri nho nhat: %d\n", min);
        } else if (choice == 5) { 
            int sum = 0;
            printf("Cac so nguyen to: ");
            for (int i = 0; i < n; i++) {
                if (isPrime(arr[i])) {
                    printf("%d ", arr[i]);
                    sum += arr[i];
                }
            }
            printf("\nTong cac so nguyen to: %d\n", sum);
        } else if (choice == 6) {
            printf("Nhap so can thong ke: ");
            scanf("%d", &value);
            int count = 0;
            for (int i = 0; i < n; i++) if (arr[i] == value) count++;
            printf("So %d xuat hien %d lan trong mang.\n", value, count);
        } else if (choice == 7) {
            printf("Nhap vi tri can them (0 - %d): ", n);
            scanf("%d", &pos);
            if (pos >= 0 && pos <= n && n < 100) {
                printf("Nhap gia tri: ");
                scanf("%d", &value);
                for (int i = n; i > pos; i--) arr[i] = arr[i - 1];
                arr[pos] = value;
                n++;
            } else {
                printf("Vi tri khong hop le!\n");
            }
        } else if (choice == 8) {
            printf("Ket thuc.\n");
            break;
        } else {
            printf("Lua chon khong hop le!\n");
        }
    }

    return 0;
}




