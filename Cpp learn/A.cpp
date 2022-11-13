#include <iostream>
using namespace std;
int x,y,L;
int sum;

int main() {
  string number = "booo ";
  cout << "Hello World!\n";
  cout << "\tAsu\t\n";    // \t is tab spacing
  cout << number << endl;
  cout << "i was born in " << number << "hehe\n";
  cout << "Type a number:   \n";
  cin >> x;
  cout << "Type other :     \n";
  cin >> y;
  sum = x*y;
  cout << sum << endl;
  int sum2 = sum*2;
  cout << sum2;
  cout << number << number.size();
  return 0;
}
