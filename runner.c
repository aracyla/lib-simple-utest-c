#include <stdio.h>
#include "power/power.h"
#include "utest.h"//unit test macros


int positive_power_00(){
    int b = 5;
    int a = 2;
    __assert(power(b, a) == 25);
    return 0;
}

int failing_test_01(){
    int b = 5;
    int a = 2;
    __assert(power(b, a) == 23);
    return 0;
}

int positive_power_02(){
    int b = 5;
    int a = 2;
    __assert(power(b, a) == 25);
    return 0;
}

int main(int argc, char **argv){

    __run_test(positive_power_00);
    __run_test(failing_test_01);
    __run_test(positive_power_02);

    __print_result();

    return 0;
}
