#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  string x;
  cin >> x;
  
  vector<short> v;
  for (char i : x){
    if (i!='+'){
      v.push_back(i-'0');
    }
  }
  sort(v.begin(), v.end());
  bool first = true;
  for (short i: v){
    if (!first) cout << '+' ;
    cout << i;
    first = false;
  }
  
  
}
