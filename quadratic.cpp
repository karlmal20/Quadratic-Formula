#include <iostream>
#include <cmath>
using namespace std;
int main() {
  double a;
  double b;
  double c;
  cout << "Enter a: \n";
  cin >> a;
  cout << "Enter b: \n";
  cin >> b;
  cout << "Enter c: \n";
  cin >> c;
  double root1;
  double root2;
  root1 = (-b + sqrt(pow(b,2) - 4 * a * c)) / (2 * a);
  root2 = (-b - sqrt(pow(b,2) - 4 * a * c)) / (2 * a);
  cout << "Root 1 is " << root1 << "\n";
  cout << "Root 2 is " << root2 << "\n";
}
