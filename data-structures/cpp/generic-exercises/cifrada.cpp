#include <iostream>
#include <string>
using namespace std;

int main(){
    string fraseOriginal, somenteConsoantes, somenteVogais;
    char letra;
    int qtdVogais=0, qtdConsoantes=0, qtdPalavras = 0;
    bool ehVogal;

    cout << "Digite uma frase: ";
    getline(cin, fraseOriginal);
    
    char vogais[5] = {'a', 'e', 'i', 'o', 'u'};
    
    for(int i=0; i < fraseOriginal.length();i++){
    	letra = fraseOriginal[i];
		
		if(isalpha(letra)){
			
			ehVogal = false;
		
			for(int j=0; j < 5; j++){
				if(vogais[j] == tolower(letra)){
    				ehVogal = true;
    				break;
				}
			}
			
			if(ehVogal){
				qtdVogais++;
				somenteVogais += letra;
			}else{
				qtdConsoantes++;
				somenteConsoantes += letra;
			}
			
			
		}else if (isspace(letra)){
			qtdPalavras++;
		}
	}
	
	string stringConcatenada = somenteConsoantes+somenteVogais;
	string chave = "Bunda";
	
	string cifrada = stringConcatenada+chave;
	string fraseCifrada;
	
	for(int i=0; i < cifrada.length(); i++){
		letra = cifrada[i];
		
		if(isalpha(letra)){
			
			ehVogal = false;
			
			for(int j=0; j < 5; j++){
				if(vogais[j] == tolower(letra)){
					ehVogal = true;
					break;
				}
			}
			
			
			if(ehVogal){
				letra += 5;
			}else{
				letra -= 3;
			}
			
			fraseCifrada += letra;
		}
	}
	
    
	
	cout << "A frase Original: " << fraseOriginal << endl;
    cout << "A quantidade de Letras: " << fraseOriginal.length() << endl;
	cout << "A quantidade de Vogais: " << qtdVogais << endl;
	cout << "A quantidade de Consoantes: " << qtdConsoantes << endl;
	cout << "A quantidade de Palavras: " << qtdPalavras+1 << endl;
	cout << "String de Consoantes: " << somenteConsoantes << endl;
	cout << "String de Vogais: " << somenteVogais << endl;
	cout << "Concatenando essas Strings: " << stringConcatenada << endl;
	cout << "Frase Final Cifrada: " << fraseCifrada << endl;
}