//4. Определить, принадлежит ли действительное число x объединению отрезков [a; b], [c; d].
//Проверочные значения : 1) x = 3, a = -5, b = -4, c = 10, d = 20 ⇨ не принадлежит; 
// 2) x = 2.8, a = 1.5, b = 3, c = 2, d = 4 ⇨ принадлежит

#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    float a, b, c, d, x;
    cout << "x a b c d \n";
    cin >> x >> a >> b >> c >> d;
    if (c > a && c < b || a > c && a < d) {
        if (x > c && x < b) {
            printf("Число x принадлежит обьединению отрезков");
        }
        else if (x > a && x < d) {
            printf("Число x принадлежит обьединению отрезков");
        }
    }
    else {
        printf("Число x не принадлежит обьединению отрезков т.к нет обьединения отрезков");
    }

    return 0;
}
