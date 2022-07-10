#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int complementoD2(int valor){
		if(valor==0){
			valor=1;
			return valor;
		}else{
			valor=0;
			return valor;
		}
	
}
void octal(int nf){
	printf("\n\n|----------------------------------------------------------------------------------------------|");
	printf("\n|                                          OCTAL                                               |");
	printf("\n|----------------------------------------------------------------------------------------------|\n");
	int aa=nf;
	int octaDec[20],octa[20],comp[20],um[20],compF[20];
	int aux,aux2;
	int j=0,tam=0,inc=1;
	for(int i=0;i<19;i++){
		um[i]=0;
	}
	do{
		if(nf<=7){
			octaDec[0]=nf;
			nf=nf/nf;
		}else{
			aux = nf % 8; //resto da divisão do numero digitado
			nf=nf/8; //divisão do numero digitado
			octaDec[j]=aux; //vetor binDec guarda os valores do aux
			j++;
			
		}

	}while(nf>=8); //codição de saida enquanto o valor digitado for diferente de 1 ele continua fazendo o calculo do resto
	if(aa>=8){
		octaDec[j]=nf;
	}
	//Exibir o octal
		printf("                                             ");
		for(int z=j;z>=0;z--){
			octa[tam]=octaDec[z]; //inverte a ordem do numero octal
			printf("%d",octa[tam]); //exibe a ordem certa do numero octal
			tam++;//incremento para o bin
		}

	um[tam-1]=1;
	printf("\n|                                                                                              |");
	printf("\n|----------------------------------------------------------------------------------------------|\n");
}
char vhexa(int nf){
	char hexa;
	if(nf==10){
		hexa = 'A';
	}else if(nf==11){
		hexa = 'B';
	}else if(nf==12){
		hexa = 'C';
	}else if(nf==13){
		hexa = 'D';
	}else if(nf==14){
		hexa = 'E';
	}else if(nf==15){
		hexa = 'F';
	}
	return hexa;
}
void hexaDecimal(int nf){
	printf("\n\n|----------------------------------------------------------------------------------------------|");
	printf("\n|                                       HEXADECIMAL                                            |");
	printf("\n|----------------------------------------------------------------------------------------------|\n");
	 int  i, j;
	      int  quociente;	

 	      i = 0; 

 	      int resto[ i ];		    	 

 	      quociente = nf / 16;
 	      resto[ i ] = nf % 16;		    		  

 	      while ( quociente >= 16 )
 	      {		 	     	   
	      	  i++;				   
 	          resto[ i ] = quociente % 16; 
 	          quociente  = quociente / 16; 	      		  		    		        	      
 	      }
 	      i++;          		  
		  resto[ i ] = quociente;
		  

 	      printf ( "\n                                            ");
 	      for (  ; i >= 0; i-- ) 

		     if ( resto[ i ] >= 10 )			 
			    switch( resto[ i ] )
				{
				   case 10 : printf ( "A" ); break; 		
				   case 11 : printf ( "B" ); break;
				   case 12 : printf ( "C" ); break;
				   case 13 : printf ( "D" ); break;
				   case 14 : printf ( "E" ); break;
				   case 15 : printf ( "F" ); break;						 
				 }	
			  else	       		    	         
                  printf ( "%d", resto[ i ] );
        printf("\n|                                                                                              |");
		printf("\n|----------------------------------------------------------------------------------------------|\n");

	      printf ( "\n\n" );     

}

void binario(int nf){
	printf("\n\n|----------------------------------------------------------------------------------------------|");
	printf("\n|                                         BINARIO                                              |");
	printf("\n|----------------------------------------------------------------------------------------------|\n");
	int aa=nf;
	int binDec[20],bin[20],comp[20],um[20],compF[20],Dec[20],dec=0,decF=0,expo[20];
	int aux,aux2;
	int j=0,tam=0;
	for(int i=0;i<19;i++){
		um[i]=0;
	}
	do{
		if(nf==1){
			int m=1;
			nf = nf+1;
				aux = nf % 2;
				binDec[j]=aux;
				j++;
		}else if(nf==0){
			for(int i=0;i<=1;i++){
				binDec[i]=0;
				j++;
			}
			nf=1;
		}else{
			aux = nf % 2; //resto da divisão do numero digitado
			binDec[j]=aux; //vetor binDec guarda os valores do aux
			j++;
			nf=nf/2; //divisão do numero digitado
		}

	}while(nf!=1); //codição de saida enquanto o valor digitado for diferente de 1 ele continua fazendo o calculo do resto
	binDec[j]=1;
		if(aa==1){
		binDec[0]=1;
		binDec[2]=0;
	}
	if(aa==0){
		binDec[j]=0;
	}
	
	//Exibir o Binario 
	if(aa>1 && aa<=7){
		printf("                                          0");
		for(int z=j;z>=0;z--){
			bin[tam]=binDec[z]; //inverte a ordem do numero binario
			printf("%d",bin[tam]); //exibe a ordem certa do numero binario
			tam++;//incremento para o bin
		}
	}else{
		printf("                                          ");
		for(int z=j;z>=0;z--){
			bin[tam]=binDec[z]; //inverte a ordem do numero binario
			printf("%d",bin[tam]); //exibe a ordem certa do numero binario
			tam++;//incremento para o bin
		}
	}

	um[tam-1]=1;
	printf("\n|                                                                                              |");
	printf("\n|----------------------------------------------------------------------------------------------|\n");
	for(int i=0;i<tam;i++){
		aux2 = complementoD2(bin[i]);
		comp[i]= aux2;
	}
	printf("\n\n|----------------------------------------------------------------------------------------------|");
	printf("\n|                                    COMPLEMENTO DE 2                                          |");
	printf("\n|----------------------------------------------------------------------------------------------|\n");
	printf("                                          ");
	for(int i=0;i<tam;i++){
		printf("%d",comp[i]);
	}
	printf("\n                                      -------------- =\n                                          ");
		for(int i=0;i<tam;i++){
		printf("%d",um[i]);
	}
	int ntam,vaiUm=0;
	for(ntam = tam-1;ntam>=0;ntam--){
		if(comp[ntam]==0 && um[ntam]==0 && vaiUm==0)
			compF[ntam]=0;
		else if(comp[ntam]==1 && um[ntam]==0 && vaiUm==0)
			compF[ntam]=1;
		else if(comp[ntam]==0 && um[ntam]==1 && vaiUm==0)
			compF[ntam]=1;
		else if(comp[ntam]==0 && um[ntam]==0 && vaiUm==1){
			compF[ntam]=1;
			vaiUm=0;
		}
		else if(comp[ntam]==1 && um[ntam]==1 && vaiUm==0){
			compF[ntam]=0;
			vaiUm=1;
		}
		else if(comp[ntam]==1 && um[ntam]==0 && vaiUm==1){
			compF[ntam]=0;
			vaiUm=1;
		}
			
	}
		printf("\n                                      \n                                          ");
		for(int i=0;i<tam;i++){
		printf("%d",compF[i]);
	}
	printf("\n\n|----------------------------------------------------------------------------------------------|\n\n");
	int h=0;
	for(int i=tam-1;i>=0;i--){
		expo[i]=pow(2,h);
		h++;
		dec = expo[i]*compF[i];
		decF= decF+dec;
	}
	octal(decF);
    hexaDecimal(decF);
}

int main() {
	int nf,aa,opc=0;
    while(opc!=2){
    	printf("\n1- Iniciar o Programa!!");
    	printf("\n2- Fechar o Programa");
    	printf("\nOpcao: ");
    	scanf("%d",&opc);
    	printf("\n\nPrecione ENTER para continuar\n\n");
    	getch();
    	switch(opc){
    		case 1:
    			printf("\nDigite um numero: ");
    			scanf("%d",&nf);
    			aa=nf;
    			system("cls");
    			binario(nf);
    			printf("\nCaracter digitado: %c , Codigo Decimal ASCII: %d", aa, aa); //exibe a letra correspondente do teclado e o codigo decimal
    			printf("\nPrecione ENTER para continuar\n\n");
    			getch();
    			break;
    		case 2:
    			break;
    		default:
    			printf("\n\nPor favor Informe uma Opcao valida!!!!\n\n");
    			printf("\n\nPrecione ENTER para continuar\n\n");
    			getch();
    			
		}
    	
	}
    

	
    return 0;
}
