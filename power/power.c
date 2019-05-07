#include "power.h"

double power(double base, int pow) {
    int i;
    double r = 1;
    for(i = 0; i < pow; i++){
        r = r * base;
    }
    return r;
}
