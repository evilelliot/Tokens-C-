#include "../../include/Tokenizer.hpp"
#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main(){
    Tokenizer tokens;
    int aux = 0;
    string my_vector_op = "(2224,1.24)+(156,-2)+(420,600000)+(13,-69)";
    
    vector<float> tokens_list = tokens.numbers(my_vector_op);

    if(tokens_list.size() > 0){
        for(float f: tokens_list){
            cout << "[" << aux++ << "] => " << f << endl;
        }
    }else{
        cout << "Operation not recognized" << endl;
    }
    
    return 0;
}
