#include "myfunc.h"
#include <math.h>

void myfunc(double* roots, double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;

    if (a == 0) {
        roots[0] = roots[1] = 00; // Обработка случая, когда 'a' равно нулю
        return;
    }

    if (discriminant >= 0) {
        roots[0] = (-b + sqrt(discriminant)) / (2 * a);
        roots[1] = (-b - sqrt(discriminant)) / (2 * a);
    }
    else {
        roots[0] = roots[1] = 00; // Обработка случая с комплексными корнями
    }
}
