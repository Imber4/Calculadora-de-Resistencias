
#include<stdio.h>
#include <stdlib.h> 
#include <math.h>

void color3();
double valor2c();
double valor3c();
float tolerancia(int x);
int temperatura();

main (){
	system("cls");
	printf("----CALCULADORA DE RESISTENCIAS----\n\n");
	
	int opc,opc1,x, temp;
	float t;
	double s;
	

	printf("Seleccione una opcion\n");
	printf("1.- 3 bandas \n2.- 4 bandas \n3.- 5 bandas \n4.- 6 bandas\n");
	do{
		scanf("%i",&opc);
		if(opc<1 || opc>4){
			printf("Valor erroneo, intente de nuevo\n");
		}
	}while(opc<1 || opc>4);
	
	switch (opc){
		case 1:
			printf("Ingrese colores\n");
			s=valor2c();
			printf("Valor de la resistencia:%.2f",s);
			printf("\n");
			system("pause");
			
			main();
		case 2:
			system("cls");
			printf("Ingrese colores\n");
			s = valor2c();
			x=4;
			t=tolerancia(x);
			system("cls");
			printf("Valor de la resistencia:%.2f",s);
			printf("\nTolerencia:%.2f",t);
			printf("%s", "%");
			
			printf("\n");
			system("pause");
			
			main();
			
		case 3:
			x=5;
			system("cls");
			printf("Ingrese colores\n");
			s =valor3c();

			t=tolerancia(x);
			system("cls");
			printf("Valor de la resistencia:%.2f",s);
			printf("\nTolerencia:%.2f",t);
			printf("%s", "%");
			
			printf("\n");
			system("pause");
			
			main();
		case 4:	
			x=6;
			system("cls");
			printf("Ingrese colores\n");
			s= valor3c();
			t=tolerancia(x);
			temp= temperatura();
			system("cls");
			printf("Valor de la resistencia:%.2f",s);
			printf("\nTolerencia:%.2f",t);
			printf("%s", "%");
			printf("\nCoeficiente de temperaruta:%i ppm/k",temp);
			
			printf("\n");
			system("pause");
			
			main();
			
			break;
	}

	
}

void color3(){
	system("cls");
	valor2c();
}

double valor2c(){
	int opc1, opc2, opc3, valor1, valor11, valor22, valorx;
	double valorff,valor23;
	double valor2, valorf;
	printf("Seleccione el primer color");
	printf("\n\n1.- Cafe \n2.- Rojo \n3.- Naranja \n4.- Amarillo \n5.- Verde \n6.- Azul \n7.- Violeta \n8.- Gris \n9.- Blanco\n");
	do{
		scanf("%i",&opc1);
		if(opc1<1 || opc1>9){
			printf("\nValor erroneo, intente de nuevo\n");
		}
	}while(opc1<1 || opc1>9);
	
	printf("Seleccione el segundo color");
	printf("\n1.- Negro \n2.- Cafe \n3.- Rojo \n4.- Naranja \n5.- Amarillo \n6.- Verde \n7.- Azul \n8.- Violeta \n9.- Gris \n10.- Blanco \n");
	do{
		scanf("%i",&opc2);
		if(opc2<1 || opc2>10){
			printf("\nValor erroneo, intente de nuevo\n");
		}
	}while(opc2<1 || opc2>10);
	valor11= opc1;
	valorx= opc2-1;
	valor1= valor11*10+valorx;
	
	printf("Seleccione el tercer color");
	printf("\n1.- Negro \n2.- Cafe \n3.- Rojo \n4.- Naranja \n5.- Amarillo \n6.- Verde \n7.- Azul \n8.- Violeta \n9.- Gris \n10.- Blanco \n11.- Oro \n12.- Plata \n");
	do{
		scanf("%i",&opc3);
		if(opc3<1 || opc3>12){
			printf("\nValor erroneo, intente de nuevo\n");
		}
	}while(opc3<1 || opc3>12);
	
	if(opc3<11){
		valor22=opc3-1;
		valor2=pow (10, valor22);
		valorf = (valor1)*(valor2);
		//printf("Valor de la resistencia=  %.1f",valorf);
		return valorf;
	}
	if(opc3==11){
		valor22=-1;
		valor23= pow (10, valor22);
		valorff= (valor1)*(valor23);
		//printf("Valor de la resistencia= %.2f",valorff);
		return valorff;
	}
	if(opc3==12){
		valor22=-2;
		valor23= pow (10, valor22);
		valorff= (valor1)*(valor23);
		//printf("Valor de la resistencia= %.2f",valorff);
		return valorff;
	}
	

	
	
}

float tolerancia(int x){
		
	if(x==4){
		printf("\nSeleccione el cuarto color");
	}
	if(x==5 || x==6){
		printf("\nSeleccione el quinto color");
	}
	int opct;
	float t;
	printf("\n1.- Marron \n2.- Rojo \n3.- Naranja \n4.- Amarillo \n5.- Verde \n6.- Azul \n7.- Violeta \n8.- Gris \n9.- Oro \n10.- Plata \n11.- Nada \n");
	do{
		scanf("%i",&opct);
		if(opct<1 || opct>11){
			printf("Opcion incorrecta");
		}
	}while(opct<1 || opct>11);
	
	switch(opct){
		case 1:
			t=1.0;
			break;
		case 2:
			t=2.0;
			break;
		case 3:
			t=3.0;
			break;
		case 4:
			t=4.0;
			break;
		case 5:
			t=0.5;
			break;
		case 6:
			t=0.25;
			break;
		case 7:
			t=0.1;
			break;
		case 8:
			t=0.05;
			break;
		case 9:
			t=5.0;
			break;
		case 10:
			t=10.0;
			break;
		case 11:
			t=20.0;	
			break;
		break;
	}
	//printf("valor t: %f",t);
	return t;
}

double valor3c(){
	int opc1, opc2,opc3, opc4, valor1,valor2, valor3, valorx;
	double valorf1, valorff1;
	double valorf, valory;
	printf("Seleccione el primer color");
	printf("\n\n1.- Cafe \n2.- Rojo \n3.- Naranja \n4.- Amarillo \n5.- Verde \n6.- Azul \n7.- Violeta \n8.- Gris \n9.- Blanco\n");
	do{
		scanf("%i",&opc1);
		if(opc1<1 || opc1>9){
			printf("\nValor erroneo, intente de nuevo\n");
		}
	}while(opc1<1 || opc1>9);
	
	printf("Seleccione el segundo color");
	printf("\n1.- Negro \n2.- Cafe \n3.- Rojo \n4.- Naranja \n5.- Amarillo \n6.- Verde \n7.- Azul \n8.- Violeta \n9.- Gris \n10.- Blanco \n");
	do{
		scanf("%i",&opc2);
		if(opc2<1 || opc2>10){
			printf("\nValor erroneo, intente de nuevo\n");
		}
	}while(opc1<1 || opc2>10);
	
	printf("Seleccione el tecer color color");
	printf("\n1.- Negro \n2.- Cafe \n3.- Rojo \n4.- Naranja \n5.- Amarillo \n6.- Verde \n7.- Azul \n8.- Violeta \n9.- Gris \n10.- Blanco \n");
	do{
		scanf("%i",&opc3);
		if(opc3<1 || opc3>10){
			printf("\nValor erroneo, intente de nuevo\n");
		}
	}while(opc3<1 || opc3>10);
	valor1 = opc2-1;
	valor2 = opc3-1;
	valorx= opc1*100 + valor1*10 + valor2;
	//printf("Valor x=%i \n",valorx);
	
	printf("Seleccione el cuarto color");
	printf("\n1.- Negro \n2.- Cafe \n3.- Rojo \n4.- Naranja \n5.- Amarillo \n6.- Verde \n7.- Azul \n8.- Violeta \n9.- Gris \n10.- Blanco \n11.- Oro \n12.- Plata \n");
	do{
		scanf("%i",&opc4);
		if(opc4<1 || opc4>12){
			printf("\nValor erroneo, intente de nuevo\n");
		}
	}while(opc4<1 || opc4>12);
	
	if(opc3<11){
		valor3=opc4-1;
		valory=pow (10, valor3);
		//printf("\n Valor y=%i \n", valory);
		valorf = (valorx)*(valory);
		//printf("Valor de la resistencia= %.1f",valorf);
		return valorf;
	}
	if(opc3==11){
		valor3=-1;
		valorf1= pow (10, valor3);
		valorff1= (valorx)*(valorf1);
		//printf("Valor de la resistencia=%.2f",valorff1);
		return valorff1;
	}
	if(opc3==12){
		valor3=-2;
		valorf1= pow (10, valor3);
		valorff1= (valorx)*(valorf1);
		//printf("Valor de la resistencia=%.2f",valorff1);
		return valorff1;
	}
	
	
}
	
int temperatura(){
	int opc4, valort;
	printf("Seleccione el sexto color");
	printf("\n1.- Negro \n2.- Cafe \n3.- Rojo \n4.- Naranja \n5.- Azul \n6.- Violeta \n7.- Gris \n");
	do{
		scanf("%i",&opc4);
		if(opc4<1 || opc4>7){
			printf("\nValor erroneo, intente de nuevo\n");
		}
	}while(opc4<1 || opc4>7);
	
	switch(opc4){
		case 1:
			valort=100;
			break;
		case 2:
			valort=50;
			break;
		case 3:
			valort=15;
			break;
		case 4:
			valort=25;
			break;
		case 5:
			valort=10;
			break;
		case 6:
			valort=5;
			break;
		case 7:
			valort=1;
			break;
			
	}
	
	
	return valort;
		
}
