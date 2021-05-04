#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>
#include <time.h>
#define _USE_MATH_DEFINES
main()
{
	int inicio,op,n,c,i=1,z;
	float x[n],r=0,y,w;
/*La estructura for es para que cuando se termine una operacion regrese automaticamente al menu para que se pueda realizar
otra operacion */
    for (inicio=0;inicio>=0;inicio++){
/*Las siguientes 4 lineas son solo parte de un arte en ASCII para el titulo del programa*/
		printf("              _____      _            _           _\n             / ____|    | |          | |         | |\n            | |     __ _| | ___ _   _| | __ _  __| | ___  _ __ __ _ \n");
		printf("            | |    / _` | |/ __| | | | |/ _` |/ _` |/ _ \\| '__/ _` |\n            | |___| (_| | | (__| |_| | | (_| | (_| | (_) | | | (_| |\n             \\_____\\__,_|_|\\___|\\__,_|_|\\__,_|\\__,_|\\___/|_|  \\__,_|\n\n\n");
		printf("                    _____ _            _   _  __ _ \n                   / ____(_)          | | (_)/ _(_)\n                  | |     _  ___ _ __ | |_ _| |_ _  ___ __ _ \n");
		printf("                  | |    | |/ _ \\ '_ \\| __| |  _| |/ __/ _` |\n                  | |____| |  __/ | | | |_| | | | | (_| (_| |\n                   \\_____|_|\\___|_| |_|\\__|_|_| |_|\\___\\__,_|\n\n\n");
/*Menu textual de todas las operaciones que se pueden realizar*/
		printf("Operaciones: \n1.Suma \n2.Resta \n3.Multiplicacion \n4.Division \n");
		printf("5.Raiz Cuadrada \n6.Raiz Cubica \n7.Raiz a la y \n8.x^2 \n");
		printf("9.x^3 \n10.x^y \n11.10^x \n12.Logaritmo en base 10 \n");
		printf("13.Logaritmo Natural \n14.Funcion Exponencial e^x \n15.Seno \n16.Coseno \n");
		printf("17.Tangente \n18.Arcoseno \n19.Arcocoseno \n20.Arcotangente \n");
		printf("21.Factorial de x (x!) \n22.Porcentaje (%%) \n23.Numero Aleatorio \n0.Salir \n");
		i=1;
		r=0;
		do 
		{
			printf("Eliga la operacion a realizar:\n");
			scanf("%d",&op);
			printf("Error. Opcion No Valida. Vuelva a Intentarlo\n");
		} while (op>23);
		system("cls");
/*Aqui empiezan las distintas operaciones segun lo que eliga el usuario*/
		switch (op) 
		{
			case 0:
				return 0;
			case 1:
				printf("Suma\n\n");
				printf("Escriba la cantidad de numeros a sumar:");
				scanf("%d",&n);
				for(c=0;c<n;c++)
				{
					printf("Escriba el %d numero a sumar:",i);
					scanf("%f",&x[c]);
					r=r+x[c];
					i++;
				}
				printf("El resultado de la suma es: %.2f",r);
				getch();
				system("cls");
				break;
			case 2:
				printf("Resta\n\n");
				printf("Escriba la cantidad de numeros a restar:");
				scanf("%d",&n);
				for(c=0;c<n;c++)
				{
					printf("Escriba el %d numero a restar:",i);
					scanf("%f",&x[c]);
					i++;
				}
				r=x[0];
				for(c=1;c<n;c++)
				{
					r=r-x[c];
				}
				printf("El resultado de la resta es: %.2f",r);	
				getch();
				system("cls");
				break;
			case 3:
				printf("Multiplicacion\n\n");
				printf("Escriba la cantidad de numeros a multiplicar:");
				scanf("%d",&n);
				r=r+1;
				for(c=0;c<n;c++)
				{
					printf("Escriba el %d numero a multiplicar:",i);
					scanf("%f",&x[c]);
					r=r*x[c];
					i++;
				}
				printf("El resultado de la multiplicacion es: %.2f",r);
				getch();
				system("cls");
				break;
			case 4:
				printf("Division\n\n");
				printf("Escriba la cantidad de numeros a dividir:");
				scanf("%d",&n);
				for(c=0;c<n;c++)
				{
					printf("Escriba el %d numero a dividir:",i);
					scanf("%f",&x[c]);
					i++;
				}
				r=x[0];
				for(c=1;c<n;c++)
				{
					r=r/x[c];
				}
				printf("El resultado de la division es: %.2f",r);	
				getch();
				system("cls");
				break;
			case 5:
				printf("Raiz Cuadrada\n\n");
				printf("Escriba el numero al cual calcularle su raiz:");
				scanf("%d",&n);
				r=pow(n,(double)1/2);
				printf("\nLa raiz cuadrada de %d es: %.3f",n,r);					
				getch();
				system("cls");
				break;
			case 6:
				printf("Raiz Cubica\n\n");
				printf("Escriba el numero al cual calcularle su raiz:");
				scanf("%d",&n);
				r=pow(n,(double)1/3);
				printf("\nLa raiz cubica de %d es: %.3f",n,r);
				getch();
				system("cls");
				break;
			case 7:
				printf("Raiz a la Y\n\n");
				printf("Escriba el numero al cual calcularle su raiz:");
				scanf("%d",&n);
				printf("Escriba la potencia de la raiz:");
				scanf("%f",&y);
				r=pow(n,(double)1/y);
				printf("\nLa raiz a la %.0f de %d es: %.3f",y,n,r);
				getch();
				system("cls");
				break;
			case 8:
				printf("X^2\n\n");
				printf("Escriba el numero al cual calcularle su cuadrado:");
				scanf("%d",&n);
				r=pow(n,2);
				printf("\nEl cuadrado de %d es: %.2f",n,r);
				getch();
				system("cls");
				break;
			case 9:
				printf("X^3\n\n");
				printf("Escriba el numero al cual calcularle su cubo:");
				scanf("%d",&n);
				r=pow(n,3);
				printf("\nEl cubo de %d es: %.2f",n,r);
				getch();
				system("cls");
				break;
			case 10:
				printf("X^Y\n\n");
				printf("Escriba el numero al cual calcularle potencia:");
				scanf("%d",&n);
				printf("Escriba la potencia:");
				scanf("%f",&y);
				r=pow(n,y);
				printf("\nLa potencia de %d a la %.0f es: %.3f",n,y,r);
				getch();
				system("cls");
				break;
			case 11:
				printf("10^X\n\n");
				printf("Escriba la potencia:");
				scanf("%d",&n);
				r=pow(10,n);
				printf("\nLa potencia de 10 a la %d es: %.0f",n,r);
				getch();
				system("cls");
				break;
			case 12:
				printf("Logaritmo en Base 10\n\n");
				printf("Escriba el numero a calcular el logaritmo en base 10:");
				scanf("%d",&n);
				r=log10(n);
				printf("El logaritmo en base 10 de %d es: %.4f\n",n,r);
				getch();
				system("cls");
				break;
			case 13:
				printf("Logaritmo Natural\n\n");
				printf("Escriba el numero a calcular el logaritmo natural:");
				scanf("%d",&n);
				r=log(n);
				printf("El logaritmo natural de %d es: %.4f\n",n,r);
				getch();
				system("cls");
				break;
			case 14:
				printf("Funcion Exponencial e^x\n\n");
				printf("Escriba el numero a calcular su funcion potencial:");
				scanf("%d",&n);
				r=exp(n);
				printf("La funcion potencial de %d es: %.4f\n",n,r);
				getch();
				system("cls");
				break;
			case 15:
				printf("Seno\n\n");
				printf("Escriba el angulo en grados a calcular el seno:");
				scanf("%f",&w);
				y=(w*M_PI)/180;
				r=sin(y);
				printf("El valor del seno del angulo de %.0f grados es: %.4f\n",w,r);
				getch();
				system("cls");
				break;
			case 16:
				printf("Coseno\n\n");
				printf("Escriba el angulo en grados a calcular el coseno:");
				scanf("%f",&w);
				y=(w*M_PI)/180;
				r=cos(y);
				printf("El valor del coseno del angulo de %.0f grados es: %.4f\n",w,r);
				getch();
				system("cls");
				break;
			case 17:
				printf("Tangente\n\n");
				printf("Escriba el angulo en grados a calcular la tangente:");
				scanf("%f",&w);
				y=(w*M_PI)/180;
				r=tan(y);
				printf("El valor de la tangente del angulo de %.0f grados es: %.4f\n",w,r);
				getch();
				system("cls");
				break;
			case 18:
				printf("Arcoseno\n\n");	
				printf("Escriba la cantidad para calcular el arcoseno:");
				scanf("%f",&w);
				y=asin(w);
				r=(y/M_PI)*180;
				printf("El angulo de la cantidad  es: %.2f grados\n",r);
				getch();
				system("cls");
				break;
			case 19:
				printf("Arcocoseno\n\n");
				printf("Escriba la cantidad para calcular la arcocoseno:");
				scanf("%f",&w);
				y=acos(w);
				r=(y/M_PI)*180;
				printf("El angulo de la cantidad es: %.2f grados\n",r);
				getch();
				system("cls");
				break;
			case 20:
				printf("Arcotangente\n\n");
				printf("Escriba la cantidad calcular el arcontangente:");
				scanf("%f",&w);
				y=atan(w);
				r=(y/M_PI)*180;
				printf("El angulo de la cantidad es: %.2f grados\n",r);
				getch();
				system("cls");
				break;
			case 21:
				printf("Factorial de X (X!)\n\n");
				printf("Escribe un numero:");
				scanf("%d",&n);
				r=r+1;
				for (c=1;c<=n;c++)
				{
					r=r*c;
				}
				printf("El factorial de %d es %.0f\n",n,r);
				getch();
				system("cls");
				break;
			case 22:
				printf("Porcentaje (%%)\n\n");
				printf("Escriba la cantidad a calcular el porcentaje:");
				scanf("%f",&w);
				printf("Escriba el porcentaje a calcular:");
				scanf("%f",&y);
				r=(w*y)/100;
				printf("El %.2f %% de %.3f es: %.3f",y,w,r);
				getch();
				system("cls");
				break;
			case 23:
				printf("Numero Aleatorio del 1 al 100\n\n");
				srand (time(NULL));
				r=rand() % 101;
				printf("%.0f",r);
				getch();
				system("cls");
				break;			
		}
	}		
}
