#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float num1, num2, res;
    printf("\n--- Recebe dois n�meros reais(float) e imprime a m�dia aritm�tica ---\n");
    printf("Digite um n�mero: \n");
    scanf("%f", &num1);
    
    printf("Digite outro n�mero: \n");
    scanf("%f", &num2);
    
    res = (num1+num2)/2;
    printf("A m�dia �: %.2f \n",res);
    
    return(0);
}
