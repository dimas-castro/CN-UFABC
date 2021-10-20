#include <stdio.h>
#include <math.h>

int main(){
    double a, b, h, n, resposta, soma=0;
    scanf("%lf %lf %lf", &a, &b, &n);
    h = (b-a)/n;
    int i;
    for(i=1; i<n; i++){
        soma = soma + (a+h*i)*sin(pow(a+h*i, 3)/10);
    }    
    resposta = (((a)*sin(pow(a, 3)/10)+2*soma+(b)*sin(pow(b, 3)/10))*h)/2;
    printf("%.12f", resposta);
}