#include <stdio.h>

int main() {
    int n;      // сколько надо чисел сложить
    int i;      // считаем какое число читаем
    int x;      // сюда читаем число
    int sum;    // здесь считаем сумму
    
    scanf("%d", &n);                // сначала прочитаем сколько чисел читать и складывать
    
    sum = 0;                        // сумма сначала 0

    for(i = 0; i < n; i++) {
        scanf("%d", &x);           // читаем число в х
        sum = sum + x;              // вычисляем новую сумму
    }
    
    printf("%d\n", sum);            // печатаем полученную сумму
    return 0;
}