#include <stdio.h>
#include <math.h>

double trap(double x, double media, double desvio, double alfa){
    double a=media, b=media+x, h, n, resposta, soma=0;
    n = sqrt((-pow(x, 3)*media)/(12*pow(10, -6)));
    h = x/n;
    int i;
    for(i=1; i<n; i++){
        soma = soma + pow(2.718281, -pow(((media+h*i)-media), 2))/(2*pow(desvio, 2));
    }    
    resposta = (((a)*pow(2.718281, -pow(((media)-media), 2))/(2*pow(desvio, 2))+2*soma+(b)*pow(2.718281, -pow(((media)-media), 2))/(2*pow(desvio, 2)))*h)/2;
    resposta = resposta - alfa;
    return resposta;
}
int main(){
    double x=0, resposta=-1;
    double media, alfa, desvio;
    scanf("%lf %lf %lf", &media, &desvio, &alfa);
    while(resposta!=0){
        x=x+0.000001;
        trap(x, media, desvio, alfa);
    }
    printf("%lf", x);
}