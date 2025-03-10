#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n=0;
    char opt[2];
    
    

    do{
    printf("\nDigite um número:");
    scanf("%d", &n);

    for(int i=1; i<=10; i++){
            printf("\n%dX%d: %d", n, i, i*n);
    }
        printf("\nDeseja repetir a tabuada? (y/n)");
        scanf("%s", opt);

    } while(opt[0] == 'y');
    return 0;
}