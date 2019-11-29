#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

void  menu ();
void leer(int &opt);
void scanVector(int *ptr, int size);


void printMatrix(int *ptr,int size1, int size2);
void printMatrix(int arr[3][3]);
void suma(int *prtC, int *ptr2b, int *ptr2a, int d);
void resta(int *prtC, int *ptr2b, int *ptr2a, int d);
void producto(int *ptr, int *ptr2b, int *ptr2, int &s);
void Fac(int *ptr, int *ptr2b, int f, int c, int &o, int &ret);
int main(){
	int opt, o = 3;	
	float n,e;
	char rep;



int uno[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
int dos[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
int resultado[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
	
int *ptrR = &resultado[0][0];;
int *ptra = &uno[0][0];
int *ptrb = &dos[0][0];
	printf(" \n Vector 1\n");
	scanVector(ptra,3);
		printf(" \n Vector 2\n");
		scanVector(ptrb,3);

 printf(" \nMatriz 1 \n");
 printMatrix(ptra,3,3);
 printf(" \nMatriz 2 \n");
 printMatrix(ptrb,3,3);
 
 do{
  
  		menu ();
		leer(opt);
switch(opt){
	case 1:
	
	printf(" \n ***********    La matris sumada    *********\n");
suma(ptrR, ptrb, ptra,3);
 break;
case 2:  
printf(" \n ***********   La matris restada   ******* \n");
resta(ptrR, ptrb, ptra,3);
break;


case 3: 
printf(" \n *************** matris multiplicada    *********** \n");
producto(ptra, ptrb, ptrR,o);

break;
 default: printf("\n SIN RESPUESTA. INTENTA DE NUEVO"); 
break;
 }

 printf("\nDesea hacer otra operacion? S N \n");
 
rep = getch();

} 		while((	rep=='S'	) || (	rep=='s'	));





}
void scanVector(int *ptr,int size){
	int valor;
	int i,j;
for (i=0; i<size; i++){
	for( j = 0; j < size ; j++){
	printf("[%d][%d]: \n",i,j);
	scanf("%d",&valor);
*(ptr+j+(i*size)) = valor;
	
	}
}}

void printMatrix(int *ptr,int s1, int s2){
	int i,j;
	for( i = 0; i < s1 ; i++){
		for( j = 0; j < s2 ; j++){
			printf("%d   ",*(ptr+j+(i*s1)));
		}
		printf("\n");
	}
}

void printMatrix(int arr[3][3]){
int i,j;
	for( i = 0; i < 3; i++){
		
		for( j = 0; j < 3; j++){
			printf("%d   ",arr[i][j]);
		}
		printf("\n");
	}
}
void suma(int *ptr, int *ptr2b, int *ptr2, int ss){
  
	int suma =0,i,j;
	
	for(i = 0; i<ss; i++){
	
		for(j = 0; j<ss; j++){
				
				*(ptr+j+(i*ss)) = *(ptr2+j+(i*ss))+ *(ptr2b+j+(i*ss)) ;
				printf("%d   ",*(ptr+j+(i*ss)));
		
		
		}
		printf("\n");
}}	
void resta(int *ptr1, int *ptrb, int *ptrA, int s){
  
	int suma =0,i,j;
	for(i i = 0; i<s; i++){
	
		for(j = 0; j<s; j++){
	
		*(ptr1+j+(i*s)) = *(ptrA+j+(i*s)) - *(ptrb+j+(i*s));
		printf("%d   ",*(ptr1+j+(i*s)));
		}
		printf("\n");
}	
}
void producto(int *ptr2, int *ptr2b, int *ptr, int &s){
  int v=0,i,j;
  for( i=0; i<ss; i++){
  	for( j =0; j<ss;j++)
	  {
	  	Fac(ptr2,ptr2b,i,j,s,v);
	  	*(ptr+j+(i*ss))=v;
	  		printf("%d   ",*(ptr+j+(i*ss)));
	  }
	  	printf("\n");
  }
  
}
void Fac(int *ptr2, int *ptr2b, int f, int c, int &o, int &ret){
	ret = 0 ;
	for(int i=0; i<o; i++){
		ret += (*(ptr2+i+(f*o)))*(*(ptr2b+c+(i*o)));
	}
}


void menu(){
 printf("1. >>>>>>> Para Suma\n");
 printf("2. >>>>>>> Para Resta\n");
 printf("3. >>>>>>> Para Multiplicacion\n ");
  

 }	
 void leer(int& opt){
 printf("\n Introduce una opcion a validar \n");
 scanf("%d",&opt);
 }

