#include <iostream>
using namespace std;

long long gcd(long long x, long long y){
  while (y!=0){
    long long r = x % y;
    x = y;
    y = r;
  }
  return x;
}


int main(){
  int N = 0;
  while(cin >> N){
  long long G = 0;
  for (int i = 1; i < N; i++)
    for (int j = i+1; j <= N; j++) 
      G += gcd(i, j);
  cout << G << endl;    
}
}