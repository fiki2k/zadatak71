// Program ce izracunat oplosje stozca.

#include<stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14

//Funkcija za izracunavanje oplosja stozca.
float oplosje(int polumjer,int visina){
	
	float s;
	s=sqrt(polumjer*polumjer+visina*visina);
	float O=PI*polumjer*(polumjer+s);
	return O;
}

int main(){
   int polumjer,visina;
   printf("Unesi polumjer stozca:\n");
   scanf("%d",&polumjer);
   printf("Unesi visinu stozca:\n");
   scanf("%d",&visina);
   float O=oplosje(polumjer,visina);
   printf("Oplosje stozca je %f\n",O);
   return 0;
}
