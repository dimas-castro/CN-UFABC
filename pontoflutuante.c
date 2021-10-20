#include <stdio.h>
#include <math.h>

int main(){
    double n, e;
    scanf("%lf", &n);
    e = pow((1+1/n), n);
    printf("%f", e);
}