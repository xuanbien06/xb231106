#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, s, area;

    printf("Nhap do dai canh a: ");
    scanf("%f", &a);

    printf("Nhap do dai canh b: ");
    scanf("%f", &b);

    printf("Nhap do dai canh c: ");
    scanf("%f", &c);

    if (a + b > c && a + c > b && b + c > a) {

        s = (a + b + c) / 2;

        area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("Dien tich tam giac: %.f", area);
    } else {
        printf("Ba canh khong tao thanh tam giac.");
    }

    return 0;
}
