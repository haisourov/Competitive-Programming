#include <iostream>
#include <string>

using namespace std;

int main(){
  string x, y;
  cin >> x >> y ;
  for (int i = 0; i < x.size() ; i++){
    x[i] = tolower(x[i]);
  }
  for (int i = 0; i < y.size() ; i++){
    y[i] = tolower(y[i]);
  }
  
  if (x > y) cout << 1 << endl;
  else if (x < y) cout << -1 << endl;
  else cout << 0;
}
