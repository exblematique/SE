#include <iostream>
#include <array>
using namespace std;

// C++11 STL array template class, parameters between < and > 
// Using C++11 uniform initialisation by an initializer_list {…}

int main(){
  array<int, 3> ar{2, -2, 3}; 
  
  // Range-based for loop, el is not the index of a specific 
  // element in the array!
  // e1 is a reference to an array element in ar (we used &),
  // now we can change the contents of the array.
  // auto declaration: type will be deduced by the compiler.

  for (auto&& el: ar)  {
    cout << el << " ";
    el *= 10;
  }
  cout << endl; 
  
  ar.at(0) = 10 * ar.at(1); 
  
  for (auto& el: ar){
    cout << el << " ";
    el += 1;
  }
  

  array<int, 3> ar2 {ar};
  ar.at(0) = 10 * ar.at(0);
  cout << "ar: " << ar.at(0) << ", ar2:  " << ar2.at(0);
  return 0;
}
