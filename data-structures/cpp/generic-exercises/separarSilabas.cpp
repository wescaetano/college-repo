#include <iostream>
#include <locale>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    string palavra;
    char vogal[5] = {'a', 'e', 'i', 'o', 'u'};
    char letra1;
    char letra2;

    cout << "Digite uma palavra: ";
    cin >> palavra;


    letra1=palavra[0];
    letra2=palavra[2];
    for(int i=0; i<5; i++){
        cout << letra1 << vogal[i] << endl;
    }

    cout << endl;

    for(int i=0; i<5; i++){
        cout << letra2 << vogal[i] << endl;
    }
}