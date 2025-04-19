#include <stdio.h>
#include <locale.h>

void inserirVetor(int array[8]){
    printf("Preenchendo o array: \n");
    for(int i=0; i<8; i++){
        printf("Digite o %d° número: \n", i+1);
        scanf("%d", &array[i]);
    }

}

void imprimirVetor(int array[8]){
    
    printf("Imprimindo vetor: \n");
    for(int i=0; i<8; i++){
        printf(" %d ", array[i]);
    }
}

void converterParaMatriz(int array[8], int matriz[2][2][2]){

    int aux=0;

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            for(int k=0; k<2; k++){
                matriz[i][j][k] = array[aux];
                aux++;
            }
        }
    }

    printf("\nMatriz convertida: \n\n");

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            for(int k=0; k<2; k++){
                printf( " %d ", matriz[i][j][k]);  
            }
            printf("\n");
        }
    }
}


int main() {
    setlocale(LC_ALL, "Portuguese");

    int array[8], matriz[2][2][2];
    inserirVetor(array);
    imprimirVetor(array);
    converterParaMatriz(array, matriz);
}