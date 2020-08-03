#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){

    cout << "Please enter your fist name: ";
    string name;
    cin >> name;

    const string greeting = "Hello, " + name + "!";

    cout << "Digit an odd number for the quantity of rows: ";
    int rows;
    cin >> rows;

    const int pad = 1;
    const string stringPad(pad, ' ');
    const string row1(2 + 2*pad + greeting.size(), '*');                //Imprime toda uma linha com '*'. Serve para a primeira e ultima linhas
    const string blankSpace(2 * pad + greeting.size(), ' ');            //Espaços em branco para linhas que não possuem nada para escrever,
                                                                        //a não ser os '*' inicial e final
    const string row2 = '*' + blankSpace + '*';                         //Segundo tipo de linha com caracteres '*' inicial e final e espaço em branco
    const string row3 = '*' + stringPad + greeting + stringPad + '*';   //Imprime a linha com a saudação.

    for(int r=0; r!=rows; ++r){

        if(r==0 || r==rows-1){
            cout << row1 << endl;
        }else if(r == (rows/2)){
            cout << row3 << endl;
        }else{
            cout << row2 << endl;
        }
    }
}
