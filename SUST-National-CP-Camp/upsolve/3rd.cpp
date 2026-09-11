#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

long double tri(long double x1, long double y1, long double x2, long double y2, long double x3, long double y3){
  return 0.5 * abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
}


int main(){
  freopen("area.in", "r", stdin);
  freopen("area.out", "w", stdout);
  int n;
  long double sum = 0.0;
  long double x1, y1, x2, y2, x3, y3;
  cin >> n >> x1 >> y1 >> x2 >> y2;
  for(int i = 2; i < n ; i++){
    cin >> x3 >> y3;
    sum += tri(x1, y1, x2, y2, x3, y3);
    x2 = x3;
    y2 = y3;
  }
  cout << sum << endl;
}