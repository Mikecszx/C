#include <stdio.h>

int main (){
	double c,d,h=20,h2=25,h3=28,t;
    int a,b;
	printf("******************************************\n");
	printf("****TENEMOS TRES TIPOS DE HAMBURGUESAS****\n");
	printf("1. Haburguesa sencilla vale 20 pesos \n\n");
	printf("2. Haburguesa doble vale 25 pesos \n\n");
	printf("3. Haburguesa triple vale 28 pesos \n\n");
	printf("4. ¿Cual eliges?\n");
	scanf("%i",&a);
	printf("¿Pagaras con tarjeta de credito? 1. Si  2. No\n");
	scanf("%i",&b);
	if (b==1)
	{
		switch(a)
		{
			case 1:
			d=h*.05;
			t=h+d;
			printf("El precio del impuesto sera de %.1f pesos\n",d);
			printf("El precio total sera de %.1f pesos\n",t);
			break;
			
			case 2:
			d=h2*.05;
			t=h2+d;
			printf("El precio del impuesto sera de %.1f pesos\n",d);
			printf("El precio total sera de %.1f pesos\n",t);
			break;
			
			case 3:
			d=h3*.05;
			t=h3+d;
			printf("El precio del impuesto sera de %.1f pesos\n",d);
			printf("El precio total sera de %.1f pesos\n",t);
			break;
		default:
			printf("Esa hamburguesa no la tenemos amigo :)))\n\n");
			
		}
		
	}
	else 
		switch(a)
		{
			case 1:
			printf("El precio total sera de %.1f pesos\n",h);
			break;
			
			case 2:
			printf("El precio total sera de %.1f pesos\n",h2);
			break;
			
			case 3:
			printf("El precio total sera de %.1f pesos\n",h3);
			break;
			
		default:
			printf("Esa hamburguesa no la tenemos :))))\n\n");
		}
	
	
}
