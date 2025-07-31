#include <stdio.h>

int main() {
    // ประกาศตัวแปรชนิด float
    float x = 10.0, y = 2.0, z = 3.0, a = 1.0;
    float price = 100.0, quantity = 2.0, discount = 10.0;
    float rate = 5.0;
    float total = 0.0;

    // ประกาศตัวแปรชนิด int
    int mistake = 2;
    int penalty = 3;
    int score = 100;

    // แสดงค่าก่อนเริ่มการคำนวณ
    printf("ค่าเริ่มต้น:\n");
    printf("x = %.2f\n", x);        // x = 10.00
    printf("total = %.2f\n", total); // total = 0.00
    printf("score = %d\n", score);   // score = 100

    // ใช้ -= เพื่อลดค่า x ลง 4.0 → x = 10.0 - 4.0 = 6.0
    x -= 4.0;
    printf("\nหลังจาก x -= 4.0: x = %.2f\n", x); // x = 6.00

    // ใช้ *= เพื่อคูณค่า x ด้วย 6.5 → x = 6.0 * 6.5 = 39.0
    x *= 6.5;
    printf("หลังจาก x *= 6.5: x = %.2f\n", x); // x = 39.00

    // ใช้ % (modulo) ต้องแปลง float เป็น int ก่อน
    // y + z * a = 2.0 + 3.0 * 1.0 = 5.0 → (int)5.0 = 5
    // (int)x = 39 → 39 % 5 = 4 → x = 4.0
    x = (int)x % (int)(y + z * a);
    printf("หลังจาก x %%= (y + z * a): x = %.2f\n", x); // x = 4.00

    // แบ่ง x ด้วย (2.0 * x) → x = 4.0 / (2.0 * 4.0) = 4.0 / 8.0 = 0.5
    x /= (2.0 * x);
    printf("หลังจาก x /= (2.0 * x): x = %.2f\n", x); // x = 0.50

    // คำนวณมูลค่ารวม: total += (price * quantity - discount)
    // → total = 0.0 + (100.0 * 2.0 - 10.0) = 0.0 + (200.0 - 10.0) = 190.0
    total += (price * quantity - discount);
    printf("หลังจาก total += (price * quantity - discount): total = %.2f\n", total); // total = 190.00

    // ปรับค่า x ตามอัตราเพิ่มขึ้น: x *= (1 + rate / 100)
    // → rate = 5 → 1 + 5/100 = 1.05 → x = 0.5 * 1.05 = 0.525
    x *= (1 + rate / 100);
    printf("หลังจาก x *= (1 + rate / 100): x = %.2f\n", x); // x = 0.52

    // หักคะแนนตามจำนวนความผิดพลาด:
    // score -= (penalty * (mistake + 1)) = 100 - (3 * (2 + 1)) = 100 - 9 = 91
    score -= (penalty * (mistake + 1));
    printf("หลังจาก score -= (penalty * (mistake + 1)): score = %d\n", score); // score = 91

    return 0;
}
