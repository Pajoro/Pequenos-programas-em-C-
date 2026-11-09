#include <stdio.h>
#include <stdlib.h>

void contagemate100 () {
int i;

 for (i = 1; i <= 100; i++) {

printf("Numero: %d\n", i); 
	}
}


void numeroparate50 () {

int i = 0;

 while (i <= 50) {

printf("Numero par %d\n", i);

i += 2;
	}
}

void contadorate10 () {
int contador = 10;

 do {

printf("%d\n", contador);

contador--;

} while (contador >= 0); 

 printf("Fim da contagem!\n");
}

void tabuada () {
int numero;

 printf("Digite um numero inteiro positivo: ");

 scanf("%d", &numero);
	
 printf("\nTabuada do %d:\n", numero);

 for (int i = 1; i <= 10; i++) {

printf("%d x %d = %d\n", numero, i, numero * i);

	}
}

void somade1ate () {

int N, i = 1, soma = 0;

 printf("Digite um numero inteiro positivo: ");

 scanf("%d", &N);

 while (i <= N) {

soma += i; 

i++; 

	}

 printf("A soma de 1 ate %d e: %d\n", N, soma);
}

void somade10num () {
int soma = 0;
int numero;

for (int i = 1; i <= 10; i++) {

 printf("Digite o numero %d: ", i);

 scanf("%d", &numero);

 soma += numero; 

}

printf ("A soma destes numeros e %d\n", soma);
}

void numerosnegativos () {
int negativo = 0;

int numero;

for (int i = 1; i <= 10; i++) {

 printf("Digite o numero %d: ", i);

 scanf("%d", &numero);

if (numero <= 0){

negativo++;

	}

	}

printf ("A quantidade de numeros negativos que voce digitou foi de %d\n", negativo);
}

void  somadenumerosinfi () {
int soma = 0;

int numero ;

printf("Soma infinita de numeros, para finalizar e mostrar o resultado digite 0 \n");

while (numero != 0) { 

 printf("Digite o numero: "); 

 scanf("%d", &numero); 

 soma += numero; 

} 

printf ("A soma dos numeros digitados foi de %d\n", soma);

}

void multiplosde3ate100 () {
int multi;

for (int i = 1; multi < 99; i++) { 

 multi = 3 * i;

 printf ("Multiplo de 3 : %d\n", multi);

	} 

}

void numerosimparesaapadenum () {
int N;

 printf("Digite um numero inteiro positivo N: ");

 scanf("%d", &N);

 printf("Os primeiros %d numeros impares sao:\n", N);

 for (int i = 1; i <= N; i++) {

int impar = 2 * i - 1;

printf("%d\n", impar);

	}

}







int main (){
	
	int opcao;
	do{

	printf("----------Menu de programas-----------\n");
	printf("1-- Mostrar numeros de 1 a 100\n");
	printf("2-- Mostrar numeros pares ate 50\n");
	printf("3-- Contador ate 10\n");
	printf("4-- Tabuada\n");
	printf("5-- Soma ate numero especificado\n");
	printf("6-- Soma de 10 numeros\n");
	printf("7-- Numeros negativos\n");
	printf("8-- Soma de numeros infintos\n");
	printf("9-- Multiplos de 3 ate 100\n");
	printf("10-- Numeros impares\n");
	printf("0-- Sair do programa\n");
	printf("Escolha uma opcao: ");
	
	scanf("%d", &opcao);
	
	switch (opcao){
		
	case 1:
		contagemate100 ();
			getchar(); 
            printf("\nPressione [Enter] para voltar ao menu...\n");
            getchar();
            system("cls");
		break;
		   
	
	case 2:
		numeroparate50 ();
			getchar(); 
            printf("\nPressione [Enter] para voltar ao menu...\n");
            getchar();
            system("cls");
		break;
		
	case 3:
		contadorate10 ();
			getchar(); 
            printf("\nPressione [Enter] para voltar ao menu...\n");
            getchar();
            system("cls");
		break;
	
	case 4:
		tabuada ();
			getchar(); 
            printf("\nPressione [Enter] para voltar ao menu...\n");
            getchar();
            system("cls");
		break;
		
	case 5:
		somade1ate ();
			getchar(); 
            printf("\nPressione [Enter] para voltar ao menu...\n");
            getchar();
            system("cls");
		break;
		
	case 6:
		somade10num ();	
			getchar(); 
            printf("\nPressione [Enter] para voltar ao menu...\n");
            getchar();
			system("cls");		
		break;
	
	case 7:
		numerosnegativos ();
			getchar(); 
            printf("\nPressione [Enter] para voltar ao menu...\n");
            getchar();
            system("cls");
		break;
		
	case 8:
		somadenumerosinfi ();
			getchar(); 
            printf("\nPressione [Enter] para voltar ao menu...\n");
            getchar();
            system("cls");
		break;
		
	case 9:
		multiplosde3ate100 ();
			getchar(); 
            printf("\nPressione [Enter] para voltar ao menu...\n");
            getchar();
            system("cls");
		break;
		
	case 10:
		numerosimparesaapadenum ();
			getchar(); 
            printf("\nPressione [Enter] para voltar ao menu...\n");
            getchar();
            system("cls");
		break;
		
	case 0:
		printf("Saindo do sistema, Obrigado!");
		break;
		
	default:
		printf("Opcao invalida!\n");
		system("cls");
	}

	} while(opcao != 0);
	
	return 0;
}
