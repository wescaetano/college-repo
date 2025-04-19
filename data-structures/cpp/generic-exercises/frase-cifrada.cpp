#include <iostream>
#include <locale>
#include <string>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    string fraseOriginal;
    int qtdChar=0;

    cout << "\nInforme uma frase: ";
    getline(cin, fraseOriginal);

    qtdChar = fraseOriginal.length();

    char character, letra;
    int contLetras=0, contVogais=0, contCon=0;
    int contPalavras=0;
    bool dentroPalavra = false, ehvogal;
    string stringConsoantes, stringVogais;
    char vogais[5] = {'a', 'e', 'i', 'o', 'u'};


    for(int i=0; i<qtdChar; i++){
        character = fraseOriginal[i];
        if(isalpha(character)){
            contLetras++;
            letra = tolower(character);

            ehvogal=false;

            for(int j=0; j<5; j++){
                if(letra == vogais[j]){
                    contVogais++;
                    ehvogal=true;
                    stringVogais += letra;
                } 
            }
            
            if(!ehvogal){
                contCon++;
                stringConsoantes += letra;
            }
        }
    }

    for(char c : fraseOriginal){
        if(isalpha(c) || isdigit(c)){
            if(!dentroPalavra){
                contPalavras++;
                dentroPalavra=true; 
            }
        } else{
            dentroPalavra=false;
        }
    }

    string stringConcatenada = stringVogais+stringConsoantes;

    string palavraChave;
    cout << "Informe uma chave com cinco letras para criptografar a  frase: ";
    cin >> palavraChave;

    string fraseCifrada;

    for(size_t i=0; i<stringConcatenada.length(); i++){
        letra=stringConcatenada[i];
        ehvogal=false;
        
        for(int j=0; j<5; j++){
            if(letra == vogais[j]){
                ehvogal=true;
                break;
            }
        }

        if(ehvogal){
            letra += 5;
        } else{
            letra -= 3;
        }

        fraseCifrada += letra;
    }

    
    cout << "\nFrase original: " << fraseOriginal;
    cout << "\nQuantidade de letras: " << contLetras;
    cout << "\nQuantidade de vogais: " << contVogais;
    cout << "\nQuantidade de consoantes: " << contCon;
    cout << "\nQuantidade de palavras: " << contPalavras;
    cout << "\nString apenas de vogais: " << stringVogais;
    cout << "\nString apenas de consoantes: " << stringConsoantes;
    cout << "\nString concatenada: " << stringConcatenada;
    cout << "\nFrase final criptografada: " << fraseCifrada;


}