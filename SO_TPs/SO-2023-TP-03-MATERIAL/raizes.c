#include <math.h>

void roots(double a, double b, double c, double roots[]){
    double binom = sqrt(b*b - 4*a*c);

    if(binom < 0){
        roots[0] = -1.0f;
        roots[1] = -1.0f;
        return;
    }

    roots[0] = (-b + binom) / (2*a);
    roots[1] = (-b - binom) / (2*a);
}
