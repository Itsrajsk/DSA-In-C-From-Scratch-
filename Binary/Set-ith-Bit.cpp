// Set ith Bit

#include <iostream>
using namespace std;

int main()
{
  int n, i;
  cout << "Enter Numeber : " << endl;
  cin >> n;
  cout << "Enter i Value : " << endl;
  cin >> i;

  if (n || (1 << i))
  {
    cout << "Bit Settled" << endl;
  }
  return 0;
}