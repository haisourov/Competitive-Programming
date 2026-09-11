#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
  freopen("angle2.in", "r", stdin);
  freopen("angle2.out", "w", stdout);
  long double x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  long double dot = x1 * x2 + y1 * y2;
  long double v1 = x1 * x1 + y1 * y1;
  long double v2 = x2 * x2 + y2 * y2;
  long double out = acosl(dot/sqrtl(v1*v2));
  cout << setprecision(8) << out << endl;
  
}
