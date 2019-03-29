#include <iostream>
#include <string>
#include <cstdlib>

int main() {
  using namespace std;
  string txt;
  string out = "";
  while (true) {

    cout << "Nombre à entrer : ";
    cin >> txt;
    cout << txt << "\n";
    for (int i=0; i<txt.length(); i++){
      if (txt[i] == ' '){
        char c = (char)(atoi(out.c_str()) + 64);
        cout << "out: " << out << "   c: " << c << endl;
        out = "";
      }
      else{
        out.append(&txt[i]);
      }
    }
    if (out != ""){
        char c = (char)(atoi(out.c_str()) + 64);
        out = "";
        cout << c << "\n";
    }
  }
  return 0;
}
