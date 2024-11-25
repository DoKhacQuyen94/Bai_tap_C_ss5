#include <stdio.h>

int main() {
    float num1, num2, ketQua;
    int choice;

    printf("Nhập số thứ nhất: ");
    scanf("%f", &num1);
    printf("Nhập số thứ hai: ");
    scanf("%f", &num2);

    do {
        printf("\nCALCULATOR\n");
        printf("1. Tổng 2 số\n");
        printf("2. Hiệu 2 số\n");
        printf("3. Tích 2 số\n");
        printf("4. Thương 2 số\n");
        printf("5. Thoát\n");
        printf("Lựa chọn của bạn: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                ketQua = num1 + num2;
                printf("Tổng 2 số là: %.2f\n", ketQua);
                break;
            case 2:
                ketQua = num1 - num2;
                printf("Hiệu 2 số là: %.2f\n", ketQua);
                break;
            case 3:
                ketQua = num1 * num2;
                printf("Tích 2 số là: %.2f\n", ketQua);
                break;
            case 4:
                if (num2 != 0) {
                    ketQua = num1 / num2;
                    printf("Thương 2 số là: %.2f\n", ketQua);
                } else {
                    printf("Không thể chia cho 0.\n");
                }
                break;
            case 5:
                printf("Thoát chương trình.\n");
                break;
            default:
                printf("Lựa chọn không hợp lệ. Vui lòng thử lại.\n");
        }
    } while (choice != 5);

    return 0;
}
