#include <iostream>
using namespace std;
 
int main(){
	int divorciado, casado=0, solteiro, viuvo, estadoCivil=0, idade;
	float somaIdade, somaTotal, porcentagemDivorciado, idadeViuvo;

    cout << "(1 - Casado 2 - Solteiro 3 - Viúvo 4 - Divorciado)" << endl;
    cout << "Digite seu estado civil: ";
    cin >> estadoCivil;
    cout << "Digite a idade correspondente: ";
    cin >> idade;

  while(estadoCivil >= 1 && idade >= 1) {
    switch (estadoCivil) {
      case 1:
        casado++;
        somaTotal++;
        break;
      case 2:
        solteiro++;
        somaTotal++;
        break;
      case 3:
        somaIdade += idade;
        viuvo++;
        somaTotal++;
        break;
      case 4:
        divorciado++;
        somaTotal++;
        break;
    }

    cout << "(1 - Casado 2 - Solteiro 3 - Viúvo 4 - Divorciado)" << endl;
    cout << "Digite seu estado civil: ";
    cin >> estadoCivil;
    cout << "Digite a idade correspondente: ";
    cin >> idade;
  }
  porcentagemDivorciado = (divorciado/somaTotal)*100;
  idadeViuvo = somaIdade/viuvo;
  cout << "Quantidade de pessoas casadas: " << casado << endl;
  cout << "Quantidade de pessoas solteiras: " << solteiro << endl;
  cout << "Quantidade de pessoas divorciadas: " << divorciado << endl;
  cout << "Quantidade de pessoas viúvas: " << viuvo << endl;
  cout << "A porcentagem de pessoas divorciadas corresponde a: " << porcentagemDivorciado << "%";
  cout << "A média das idades das pessoas viuvas corresponde a: " << idadeViuvo;

}