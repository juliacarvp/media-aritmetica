#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float num1, num2, res;
    printf("\n--- Recebe dois números reais(float) e imprime a média aritmética ---\n");
    printf("Digite um número: \n");
    scanf("%f", &num1);
    
    printf("Digite outro número: \n");
    scanf("%f", &num2);
    
    res = (num1+num2)/2;
    printf("A média é: %.2f \n",res);
    
    return(0);
}
