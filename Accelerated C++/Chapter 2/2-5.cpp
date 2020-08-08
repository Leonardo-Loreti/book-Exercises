#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){

    cout << "Digite um numero correspondente ao tipo de figura desejada, quadrado[1], retangulo[2] ou triangulo[3]: ";
    int tipo;
    cin >> tipo;
    cout << endl;

    cout << "Digite a largura desejada para a figura, no caso do triângulo, a largura precisa ser impar: ";
    int base;
    cin >> base;
    cout << endl;

    if(tipo == 1){
        for(int linha=0; linha != base; linha++){
            for(int coluna=0; coluna != base; coluna++){
                if(linha == 0 || linha == base - 1 || coluna == 0 || coluna == base - 1){
                    cout << "*";
                }else{
                    cout << " ";
                }
            }
            cout << endl;
        }
    }else if(tipo == 2){
        cout << "Digite a altura do retangulo: ";
        int altura;
        cin >> altura;
            for(int linha = 0; linha != altura; linha++){
                for(int coluna = 0; coluna != base; coluna++){
                    if(linha == 0 || linha == altura - 1 || coluna == 0 || coluna == base - 1){
                        cout << "*";
                    }else{
                        cout << " ";
                    }
                }
                cout << endl;
            }
    }else if(tipo == 3){
        for(int linha = 0; linha != base/2 + 1; linha++){
            for(int coluna = 0; coluna != base; coluna++){
                if(coluna == base/2 - linha || coluna == base/2 + linha || linha == base/2){
                    cout << "*";
                }else{
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
}
