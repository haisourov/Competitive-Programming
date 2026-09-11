#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  freopen("angle1.in", "r", stdin);
  freopen("angle1.out", "w", stdout);

  const long double pi = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;
  long double x , y;
  cin >> x >> y;
  
  long double rad = atan2(y,x);
  
  rad += (rad<0)? (2.0*pi) : 0;
  
  cout << setprecision(17) << rad << endl;
}
