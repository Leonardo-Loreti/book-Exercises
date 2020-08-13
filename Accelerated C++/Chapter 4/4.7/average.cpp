#include <iostream>
#include <vector>
#include <stdexcept>

using std::vector;
using std::domain_error;

double average(const vector<double>& numbers){

    if(numbers.size() == 0){
        throw domain_error("Empty vector.");
    }else{
        vector<double>::size_type vec_size;
        double sum;

        for(vec_size = 0; vec_size != numbers.size(); ++vec_size){
            sum += numbers[vec_size];
        }

        return sum/vec_size;
    }
}
