#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//////////////////////////////////////
////////////////////////////////////

int** createMat(int *a, int *b){

	do{
	printf("Input m : ");
	scanf("%d", &*a);
	printf("Input n : ");
	scanf("%d", &*b);
	}while((*a<1) || (*b<1));


	int **tab = (int**)malloc(sizeof(int*)*(*a));
    for(int i=0;i<*a;i++){
        tab[i] = (int*)malloc((*b) * sizeof(int));
    }
	
	return tab;
}

//////////////////////////////////////
////////////////////////////////////

void fillIn(int** tab, int* m,int* n){
	
	int k = 0;
	for(int i=0;i<*m;++i){
		for(int j=0;j<*n;++j){
			tab[i][j]=rand()%255;
		}
	}
}

//////////////////////////////////////
////////////////////////////////////

void displayMat(int**tab, int* m, int* n){
	printf("Result : \n\n");
	for(int i=0;i<*m;++i){
		for(int j=0;j<*n;++j){
			printf("%d  ", tab[i][j]);
		}
		printf("\n");
	}
}

//////////////////////////////////////
////////////////////////////////////


int main(){
	
	srand(time(NULL));
	int a;
    int b;
	int** mat;
	
	mat = createMat(&a,&b);
	fillIn(mat, &a,&b);
	displayMat(mat, &a,&b);

	return 0;
}