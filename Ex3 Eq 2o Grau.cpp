//Calcule e mostre as raízes reais de uma função polinomial de segundo grau.
//Delta = b² -4.a.c
//x = (-b+/-sqrtDelta)/2.a

#include<stdio.h>
#include<math.h>
main()
{
	float Delta, X1, X2, A, B, C;
	
	printf("\nVamos calcular as raizes reais de uma equacao de 2o grau!");
	printf("\nInforme os valores da equacao seguindo a formula: ax² + bx + c = 0");
	printf("\nInforme o valor de 'A': ");scanf("%f",&A);

	
	if(A == 0){
		printf("Essa nao e uma equacao do 2o grau!");
	}
	else{
	
		printf("\nInforme o valor de 'B': ");scanf("%f",&B);
		printf("\nInforme o valor de 'C': ");scanf("%f",&C);
		
		Delta = pow(B,2) - 4 * A * C;
	
		if(Delta > 0){
			
			X1 = ((-1 * B) + sqrt(Delta))/(2 * A);
			X2 = ((-1 * B) - sqrt(Delta))/(2 * A);
			printf("\nO Valor de Delta e: %.2f e possui duas raizes reais e distintas!",Delta);
			printf("\nO Valor de X1 e: %.2f", X1);
			printf("\nO Valor de X2 e: %.2f", X2);
				
		}
		if(Delta == 0){

			X1 = ((-1 * B) + sqrt(Delta))/(2 * A);
			printf("\nO Valor de Delta e: %.2f e possui raizes reais iguais!",Delta);
			printf("\nO Valor de X1 e: %.2f", X1);
			
		}
		if(Delta < 0){
			printf("\nO valor de Delta e: %.2f!", Delta);
			printf("\nDelta menor do que 0 'zero' (Delta < 0) e nao possui raizes reais");
		}
	}

}

