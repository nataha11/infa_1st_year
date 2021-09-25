#include <stdio.h>

int correct (float a, float b, float v, float t, float esp) {
    if (v * t + esp >= a && v * t - esp <= b) {
    return 1;
} else return 0;
}
int main()
{
    float a, b, v, t;
    float esp = 0.1;
    scanf ("%f%f%f%f", &a, &b, &v, &t);
    float s = v * t;
    printf("%s\n", correct(a, b, v, t, esp) ? "YES" : "NO");

    return 0;
}
