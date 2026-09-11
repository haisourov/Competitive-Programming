#include <iostream>
#include <cctype>

using namespace std;

int main(){
  string x;
  cin >> x;
  for (int i = 0; i < x.size() ; i++){
    x[i] = tolower(x[i]);
    if(x[i] == 'a' or x[i] == 'e' or x[i] == 'i' or x[i] == 'o' or x[i] == 'u' or x[i] == 'y') x[i] = '_';
  }
  for(char c: x){
    if (c=='_') continue;
    cout << '.' << c;
  }
}
