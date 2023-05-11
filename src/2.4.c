#include <stdio.h>
#include <stdlib.h>

int main() {
	float peso, altura, imc;

	printf ("Digite o seu peso (Kg):");
	scanf ("%f", &peso);

	printf ("Digite a sua altura (m):");
	scanf ("%f", &altura);

	imc = peso/(altura*altura);

	if (imc<18.5) {
		printf ("Voce esta abaixo do peso");
	}

	if (imc >= 18.5 && imc < 25) {
		printf ("Voce esta com o peso normal");
	}

	if (imc >= 25 && imc <30) {
		printf ("Voce esta acima do peso");
	}
}
