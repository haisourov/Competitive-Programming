#include <iostream>
#include <vector>

using namespace std;
int main(){
  int n, k;
  cin >> n;
  vector<int> v;
  while(n--){
    cin >> k;
    v.push_back(k);
  }
  cin >> n;
  v.erase(v.begin()+n-1);
  cin >> n >> k;
  v.erase(v.begin()+n-1, v.begin()+k-1);
  cout << v.size() << endl;
  for(int i: v){
    cout << i << " ";
  }
  
  
}
