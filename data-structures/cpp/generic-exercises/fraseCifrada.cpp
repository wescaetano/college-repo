#include <iostream>
#include <locale>
#include <string>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    string fraseOriginal;

    cout << "Informe uma frase: " << endl;
    getline(cin, fraseOriginal);

    cout << fraseOriginal << endl;

    int contLetras=0, contVogal=0, contCons=0, contPalavra=0;
    char vogal[5] = {'a', 'e', 'i', 'o', 'u'}, letra;
    bool ehvogal=false, dentroPalavra=false;
    string apenasCons, apenasVog, concatenada;

    for(int i=0; i<fraseOriginal.length(); i++){
        // Quantidade de letras
        if(isalpha(fraseOriginal[i])){
            letra= tolower(fraseOriginal[i]);
            contLetras++;

            for(int j=0; j<5; j++){
                if(letra == vogal[j]){
                    ehvogal=true;
                    contVogal++;
                    apenasVog += letra;
                    break;
                }
                ehvogal=false;
            }

            if(!ehvogal){
                contCons++;
                apenasCons += letra;
            }
        }
    }

    for(char c : fraseOriginal){
        if(isalpha(c) || isdigit(c)){
            if(!dentroPalavra){
                contPalavra++;
                dentroPalavra=true;
            } 
        } else{
            dentroPalavra=false;
        } 
    } 

    concatenada = apenasVog + apenasCons;
    string chave;
    cout << "Informe uma palavra-chave com cinco letras: ";
    cin >> chave;

    string concatenadaFinal = concatenada + chave;

    for(int i=0; i<concatenadaFinal.length(); i++){
        char c = concatenadaFinal[i];
        bool ehvogal =false;
        
        for(int j=0; j<5; j++){
            if(c == vogal[j]){
                ehvogal=true;
                break;
            }
        }

        if(ehvogal){
            concatenadaFinal[i] += 5;
        } else{
            concatenadaFinal[i] -= 3;
        }
    }
    cout << "A quantidade de letras é: " << contLetras << endl;
    cout << "A quantidade de vogais é: " << contVogal << endl;
    cout << "A quantidade de consoantes é: " << contCons << endl;
    cout << "A quantidade de palavras é: " << contPalavra << endl;
    cout << "String de vogais: " << apenasVog << endl;
    cout << "String de consoantes: " << apenasCons << endl;
    cout << "String de vogais e consoantes concatenada: " << concatenada << endl;
    cout << "String final criptografada: " << concatenadaFinal << endl;

}
