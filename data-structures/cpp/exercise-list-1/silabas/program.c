#include <stdio.h>
#include <stdio.h>
#include <locale.h>

void splitsyllable(char words[][50], int n){
    char firstConsonant, secondConsonant;
    char vowels[6] = {'a', 'e', 'i', 'o', 'u'};

    for(int i=0; i<n; i++){
        firstConsonant = words[i][0];  
        secondConsonant = words[i][2];
        
        for(int j=0; j<5; j++){
            printf("%c %c\n", firstConsonant, vowels[j]);
        }
        printf("\n");
        

        for(int j=0; j<5; j++){
            printf("%c %c\n", secondConsonant, vowels[j]);
        }
        printf("\n");
        
    }



}

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n=0;
    
    printf("Enter the number of words: \n");
    scanf("%d", &n);
    getchar();

    char words[n][50];
    
    for(int i=0; i<n; i++){
        printf("Enter the word: ");
        fgets(words[i], sizeof(words[i]), stdin);
        words[i][strcspn(words[i], "\n")] = '\0';
    }

    splitsyllable(words, n);
}
