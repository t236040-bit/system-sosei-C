#include <stdio.h>
#include <math.h>

void solveQuadratic(int a, int b, int c) {
    double D;
    double x1, x2;

    D = (double)b * b - 4.0 * a * c;

    if (D > 0) {
        x1 = (-b + sqrt(D)) / (2.0 * a);
        x2 = (-b - sqrt(D)) / (2.0 * a);
        printf("ˆÙ‚È‚é2‚Â‚ÌÀ”‰ğ:\n");
        printf("x1 = %f, x2 = %f\n", x1, x2);

    } else if (D == 0) {
        x1 = -b / (2.0 * a);
        printf("d‰ğ:\n");
        printf("x = %f\n", x1);

    } else {
        double real = -b / (2.0 * a);
        double imag = sqrt(-D) / (2.0 * a);
        printf("‹•”‰ğ:\n");
        printf("x = %f + %fi\n", real, imag);
        printf("x = %f - %fi\n", real, imag);
    }
}

int main(void) {
    int a, b, c;

    /* a ‚ª 0 ‚Å‚È‚¢®”‚ğ“ü—Í‚³‚¹‚é */
    do {
        printf("®” a ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ia ‚ 0j: ");
        scanf("%d", &a);
    } while (a == 0);

    printf("®” b ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢: ");
    scanf("%d", &b);

    printf("®” c ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢: ");
    scanf("%d", &c);

    solveQuadratic(a, b, c);

    return 0;
}
