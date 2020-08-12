#include <iostream>
#include <vector>
#include <algorithm>

using std::string;
using std::vector;
using std::istream;
using std::cout;
using std::endl;

istream& readWords(istream& in, vector<string>& words) {
  if (in) {
    words.clear();
    string word;

    while (in >> word){
      words.push_back(word);
    }

    in.clear();
  }
}

vector<string>::size_type vectorSize(const vector<string>& words){
    return words.size();
}

void countAndPrintRepeatedWords(vector<string> words){

    typedef vector<string>::size_type vec_sz;
    vec_sz verifier, counter, vec_size = 0;
    bool equal;

    sort(words.begin(), words.end());

    while(vec_size != words.size()){
        counter = 1;
        verifier = vec_size + 1;
        equal = true;

        while(equal){
            //I don't know if I would have to take care on not letting the verifier be a
            //value greater than the size of the vector. This happens on the last verification.
            if(words[vec_size] == words[verifier]){
                counter++;
                verifier++;
            }else{
                cout << words[vec_size] << ": " << counter << endl;
                equal = false;
            }
        }
        vec_size+=counter;
    }
}
