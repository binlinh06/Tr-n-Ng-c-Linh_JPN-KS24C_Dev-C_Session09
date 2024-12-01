#include <stdio.h>
#include <math.h>

#define MAX 100

int kiemTraSoNguyenTo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int arr[MAX];
    int n = 0;
    int luaChon;

    do {
        printf("\nMENU\n");
        printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu dang quan ly\n");
        printf("3. In ra gia tri cac phan tu chan va tinh tong\n");
        printf("4. In ra gia tri lon nhat va nho nhat trong mang\n");
        printf("5. In ra cac phan tu la so nguyen to trong mang va tinh tong\n");
        printf("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do\n");
        printf("7. Them mot phan tu vao vi tri chi dinh\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);

        switch (luaChon) {
            case 1: {
                printf("Nhap so phan tu cua mang: ");
                scanf("%d", &n);
                for (int i = 0; i < n; i++) {
                    printf("Nhap phan tu thu %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;
            }
            case 2: {
                if (n == 0) {
                    printf("Mang chua co phan tu nao!\n");
                } else {
                    printf("Cac phan tu trong mang: ");
                    for (int i = 0; i < n; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;
            }
            case 3: {
                int tong = 0;
                printf("Cac phan tu chan: ");
                for (int i = 0; i < n; i++) {
                    if (arr[i] % 2 == 0) {
                        printf("%d ", arr[i]);
                        tong += arr[i];
                    }
                }
                printf("\nTong cac phan tu chan: %d\n", tong);
                break;
            }
            case 4: {
                if (n == 0) {
                    printf("Mang chua co phan tu nao!\n");
                } else {
                    int lonNhat = arr[0], nhoNhat = arr[0];
                    for (int i = 1; i < n; i++) {
                        if (arr[i] > lonNhat) lonNhat = arr[i];
                        if (arr[i] < nhoNhat) nhoNhat = arr[i];
                    }
                    printf("Gia tri lon nhat: %d\n", lonNhat);
                    printf("Gia tri nho nhat: %d\n", nhoNhat);
                }
                break;
            }
            case 5: {
                int tong = 0;
                printf("Cac phan tu la so nguyen to: ");
                for (int i = 0; i < n; i++) {
                    if (kiemTraSoNguyenTo(arr[i])) {
                        printf("%d ", arr[i]);
                        tong += arr[i];
                    }
                }
                printf("\nTong cac so nguyen to: %d\n", tong);
                break;
            }
            case 6: {
                int x, dem = 0;
                printf("Nhap gia tri can thong ke: ");
                scanf("%d", &x);
                for (int i = 0; i < n; i++) {
                    if (arr[i] == x) dem++;
                }
                printf("Gia tri %d xuat hien %d lan trong mang.\n", x, dem);
                break;
            }
            case 7: {
                if (n >= MAX) {
                    printf("Mang da day, khong the them phan tu!\n");
                } else {
                    int viTri, giaTri;
                    printf("Nhap vi tri can them (0-%d): ", n);
                    scanf("%d", &viTri);
                    if (viTri < 0 || viTri > n) {
                        printf("Vi tri khong hop le!\n");
                    } else {
                        printf("Nhap gia tri can them: ");
                        scanf("%d", &giaTri);
                        for (int i = n; i > viTri; i--) {
                            arr[i] = arr[i - 1];
                        }
                        arr[viTri] = giaTri;
                        n++;
                        printf("Da them phan tu %d vao vi tri %d.\n", giaTri, viTri);
                    }
                }
                break;
            }
            case 8: {
                printf("Thoat chuong trinh.\n");
                break;
            }
            default:
                printf("Lua chon khong hop le. Vui long chon lai!\n");
        }
    } while (luaChon != 8);

    return 0;
}

