#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>


int menu(char* opciones)
{
	int select;
	
	printf("%s",opciones);
	scanf("%d",&select);
	return select;
	
}


void alta(int* codigo,char descripcion[][51], int* importe, int* cantidad, int MAX, int cont){
	    
	system("cls");
		printf("\nIngrese codigo de producto %d: ", cont+1);
		scanf("%d",&codigo[cont]);
		
		printf("\nIngrese descripcion %d: ", cont+1);
		fflush(stdin);
		gets(descripcion[cont]);
		
		printf("\nIngrese importe de producto %d: ", cont+1);
		scanf("%d",&importe[cont]);
		
		printf("\nIngrese cantidad de producto %d: ", cont+1);
		scanf("%d",&cantidad[cont]);
		
		system("cls");
	}
	
void modificar(int* codigo,char descripcion[][51], int* importe, int* cantidad, int MAX, int cont){
		int encontrado;
		int i;
		int aux;
		if(cont>0){		
		printf("\nIngrese codigo de producto a modificar: ");
		scanf("%d",&aux);
		for(i=0;i<MAX;i++){
			if(aux==codigo[i]){	
		printf("\nIngrese codigo de producto %d: ", i+1);
		scanf("%d",&codigo[i]);
		printf("\nIngrese descripcion %d: ", i+1);
		fflush(stdin);
		gets(descripcion[i]);
		printf("\nIngrese importe de producto %d: ", i+1);
		scanf("%d",&importe[i]);
		printf("\nIngrese cantidad de producto %d: ", i+1);
		scanf("%d",&cantidad[i]);
			encontrado=1;
			break;	
			}
		}
		
		if(encontrado=0){
			printf("\nCodigo de producto inexistente!");
		}
		
	}

	}


void baja(int* codigo,char descripcion[][51], int* importe, int* cantidad, int MAX, int cont){
		int encontrado;
		int i;
		int aux;
		if(cont>0){		
		printf("\nIngrese codigo de producto a eliminar: ");
		scanf("%d",&aux);
		for(i=0;i<MAX;i++){
			if(aux==codigo[i]){	
		codigo[i]=-1;
		descripcion[i][0]='\0';
		importe[i]=-1;
		cantidad[i]=-1;
			encontrado=1;
			break;	
			}
		}
		
		if(encontrado=0){
			printf("\nCodigo de producto inexistente!");
		}
	}
}

	void mayor(int* codigo,char descripcion[][51], int* importe, int* cantidad, int MAX, int cont){
		int auximp, auxcod,auxcant;
	    char auxdesc[MAX][51];
		int i;
		int mayor=0;
		for(i=0;i<MAX;i++){
		
		if(cont>0){
		
		if(importe[i]>mayor){
			mayor=importe[i];
			auxcod=codigo[i];
			auxcant=cantidad[i];
			fflush(stdin);
		 	strcpy(auxdesc,descripcion[i]);
		}
		}
	}
		
		printf("El producto de mayor importe es:\nCodigo: %d\nImporte: %d\nCantidad: %d\nDescripcion: %s", auxcod, mayor, auxcant, auxdesc);
		system("pause");
	}


void lista(int* codigo,char descripcion[][51], int* importe, int* cantidad, int MAX,int cont){
	int i;
	int j;
	int auximp, auxcod,auxcant;
	char auxdesc[MAX][51];
	
	if(cont>0){
		
		for(i=0;i<MAX;i++){
			
		 for(j=i+1;j<MAX;j++){
		 	if(importe[j]>importe[i]){
		 		auximp=importe[j];
		 		importe[j]=importe[i];
		 		importe[i]=auximp;
		 		
		 		auxcod=codigo[j];
		 		codigo[j]=codigo[i];
		 		codigo[i]=auxcod;
		 		
		 		auxcant=cantidad[j];
		 		cantidad[j]=cantidad[i];
		 		cantidad[i]=auxcant;
		 		
		 		fflush(stdin);
		 		strcpy(auxdesc,descripcion[j]);
		 		strcpy(descripcion[j],descripcion[i]);
		 		strcpy(descripcion[i],auxdesc);
			 }
		 }
				}
		for(i=0;i<MAX;i++){
			printf("\n%dº Producto mayor:\n Importe: %d\nCodigo: %d\nCantidad: %d\nDescripcion: %s\n",i+1,importe[i], codigo[i],cantidad[i],descripcion[i]);
		}
		system("pause");	
		}
	}
	

	
