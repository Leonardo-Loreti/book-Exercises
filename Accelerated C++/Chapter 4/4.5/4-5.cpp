#include <iostream>
#include <vector>
#include "readWords.h"

using namespace std;

int main()
{
    vector<string>::size_type vecSize = 0;
    vector<string> words;

    readWords(cin, words);
    vecSize = vectorSize(words);

    cout << "Number of words: " << vecSize << endl;
    countAndPrintRepeatedWords(words);

}
