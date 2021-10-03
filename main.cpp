/*
* Author: Alberto Ocaranza
*/
#include "include/Tokenizer.hpp"
#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main() {
  // Test expressions
  string basic = "2.23 -243.23,2343";
  string vector3D = "(2,3,-23.42)";
  string operation = "+,232,+ -";
  
  // Creating an instance of tokenizer class
  Tokenizer tk;

  // Storing data locally
  vector<string> tk_data = tk.arithmetic(operation);

  // Printing tokens outside the class
  for(string i: tk_data){
    cout << i << endl;
  }  
  return 0;
  
}