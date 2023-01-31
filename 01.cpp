#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	float v[10],maior,menor,ind_maior,ind_menor;
	
	for(int i=0;i<10;i++){
		printf("Digite um número: ");
		scanf("%f",&v[i]);
	}
	printf("\n\n");
	
	maior=v[0];
	menor=v[0];
	
	for(int x=0;x<10;x++){
		if(maior<v[x]){
			maior=v[x];
			ind_maior=x;
		}
		if(menor>v[x]){
			menor=v[x];
			ind_menor=x;
		}
	}
	printf("%.2f cujo indice é %.0f\n",maior,ind_maior+1);
	printf("%.2f cujo indice é %.0f\n",menor,ind_menor+1);
	
	return 0;
}
