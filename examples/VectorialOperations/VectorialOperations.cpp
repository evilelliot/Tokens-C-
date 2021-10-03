#include "../../include/Tokenizer.hpp"
#include <vector>
#include <string>
#include <iostream>
using namespace std;
// Prototypes
void vectorial_sum(vector<float>);
int main(){
    string my_vector_op = "(-33.224,1.24)+(12.45,-23)";
    Tokenizer tokens;

    vector<float> tokens_list = tokens.numbers(my_vector_op);

    if(tokens_list.size() == 4){
        cout << "Base expresion: " << my_vector_op << endl;
        vectorial_sum(tokens_list);
    }else{
        cout << "Operation not recognized" << endl;
    }
    
    return 0;
}
void vectorial_sum(vector<float> data){
    float x  = data[0];
    float y  = data[1];
    float x1 = data[2];
    float y1 = data[3];
    cout << "R => (" << x+x1 << "," << y+y1 << ")" << endl;
}