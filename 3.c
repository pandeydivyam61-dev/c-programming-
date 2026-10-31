#include <stdio.h>

//function declaration
float cal_si(float p, float r, float t);

int main() {
    //function call
    float result = cal_si(1000, 5, 2);
    // arguments orders matters

    printf("Simple Interest = %.2f\n", result);

    return 0;
}

// function defination
float cal_si(float p, float r, float t) {
    float si;
    //assigments operatator =
    si = p * r * t / 100;

    return si;
    //the calling function must be aware of called function
}



