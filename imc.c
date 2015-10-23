#include <stdio.h>

int main()
{
    float peso;
    float altura;
    float imc;
    
    printf("\nQual seu peso?");
    scanf("%f", &peso);
    
    printf("\nQual sua altura?");
    scanf("%f", &altura);
    
    imc = peso / (altura*altura);
    printf("Seu imc foi %f", imc);
    
    if (imc<19) printf("-Voce esta abaixo do peso recomendado");
        
         else if (imc>19, imc<25) printf("-Voce esta com o peso ideal ");
        
         else if (imc>25, imc<30) printf("-Voce esta com sobrepeso");
     
         else if (imc>30) printf("-Voce esta obeso");
        
    return 0;
    
}
