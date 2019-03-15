#include <iostream>
#include <string>

int main() {
  using namespace std;

  string a = "Try ";
  string b = "Again";
  b += "?";
  b[b.size()-1] = '!';
  for (unsigned int i=0; i<b.size(); i++){
    switch (b[i]) {
      case 'A':
	b[i] = 'a';
	break;
      case 'a':
	b[i] = 'A';
	break;
    }    
  }
  cout << a << b << endl;

  return 0;
}
