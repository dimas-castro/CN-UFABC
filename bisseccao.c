#include <stdio.h>
#include <math.h>

int main(){
    double k, a, b, f, g, media;
    int i=0;
    scanf("%lf %lf %lf", &k, &a, &b);
    while(i<10){
        media = (a+b)/2;
        f = a*pow(2.718281, a)-k;
        g = media*pow(2.718281, media)-k;
        if(f*g<0){
            b=media;
        }else{
            a=media;
        }
        i++;
    }
    printf("%.6f\n", media);
    return 0;
}