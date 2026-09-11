#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int t;
  cin >> t;
  for (int k = 1; k <= t; k++){
  long long N, K, sum = 0, M = pow(2, 32);
  cin >>N>>K;
  for (int i =1; i <= N; i++){
    sum += (long long) pow(i, K) % M;
  }
  cout << "Case " << k <<": "<< sum << endl;
  }
}