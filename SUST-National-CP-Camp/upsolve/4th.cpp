#include <iostream>
#include <iomanip>
#include <vector>
#include <climits>
using namespace std;

long long m = 998244353;


vector<int> vec;
long long product = 1;

int main(){
  for (int i = 1; i<=m ; i++){
  product = (product * (i % m))%m;
  vec.push_back(product);
}
  int t;
  cin >> t;
  while(t--){
    int n, product = 1;
    cin >> n;
    cout << vec[n-1] << endl;
  }
}
