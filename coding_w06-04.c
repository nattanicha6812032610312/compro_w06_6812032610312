#include <stdio.h>

int main() {
    int x1 = 12, x2 = 12, y = 7, z = 12, a = 3;
    float rate = 5.0, total1 = 0, total2 = 0, price = 10, quantity = 2, discount = 3;
    int score1 = 100, score2 = 100, penalty = 10, mistake = 2;

    // 1. x = x - 4.0;
    x1 = x1 - 4.0;
    x2 -= 4.0;
    printf("1. แบบเต็ม: %d, แบบย่อ: %d\n", x1, x2);

    // 2. x = 6.5 * x;
    x1 = 12; x2 = 12;
    x1 = 6.5 * x1;
    x2 *= 6.5;
    printf("2. แบบเต็ม: %d, แบบย่อ: %d\n", x1, x2);

    // 3. x = x % (y + z * a);
    x1 = 12; x2 = 12;
    x1 = x1 % (y + z * a);   // 12 % (7 + 12*3) = 12 % 43 = 12
    x2 %= (y + z * a);
    printf("3. แบบเต็ม: %d, แบบย่อ: %d\n", x1, x2);

    // 4. x = x / (2.0 * x);
    float xf1 = 12, xf2 = 12;
    xf1 = xf1 / (2.0 * xf1);   // 12 / (2*12) = 12/24 = 0.5
    xf2 /= (2.0 * xf2);
    printf("4. แบบเต็ม: %.2f, แบบย่อ: %.2f\n", xf1, xf2);

    // 5. total = total + (price * quantity - discount);
    total1 = total1 + (price * quantity - discount);  // 0 + (10*2 - 3) = 17
    total2 += (price * quantity - discount);
    printf("5. แบบเต็ม: %.2f, แบบย่อ: %.2f\n", total1, total2);

    // 6. x = x * (1 + rate / 100);
    float x6_1 = 12, x6_2 = 12;
    x6_1 = x6_1 * (1 + rate / 100);   // 12 * 1.05 = 12.6
    x6_2 *= (1 + rate / 100);
    printf("6. แบบเต็ม: %.2f, แบบย่อ: %.2f\n", x6_1, x6_2);

    // 7. score = score - (penalty * (mistake + 1));
    score1 = score1 - (penalty * (mistake + 1));  // 100 - 10*(2+1) = 70
    score2 -= (penalty * (mistake + 1));
    printf("7. แบบเต็ม: %d, แบบย่อ: %d\n", score1, score2);

    return 0;
}