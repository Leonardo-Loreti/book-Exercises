#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//Programa que conta a repetição das palavras.
int main(){

    vector<string> palavras;
    vector<int> repeticao;
    string x;

    typedef vector<string>::size_type size_string;
    size_string tam;

    typedef vector<int>::size_type size_int;
    size_int i=0, j, c;

    while(cin >> x){
        palavras.push_back(x);
        repeticao.push_back(0);
    }

    tam = palavras.size();

    sort(palavras.begin(), palavras.end());

    while(i < tam){
        repeticao[i]=1;
        c=1;

        for(j = i+1; j < tam; j++){
            if(palavras[i] == palavras[j]){
                c++;
                repeticao[i]+=1;
            }
        }
        i+=c;
    }

    for(i=0; i<tam; i++){
        if(repeticao[i] != 0){
            cout << palavras[i] << ": " << repeticao[i] << endl;
        }
    }

    return 0;
}
