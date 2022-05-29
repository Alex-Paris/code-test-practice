#include <iostream>
using namespace std;

int main()
{
  int t, x, y;

  cin >> t;
  while (t--)
  {
    cin >> x >> y;
    if ((x + y) % 2 == 0) // Even
      cout << "Janmansh" << endl;
    else // Odd
      cout << "Jay" << endl;
  }
  return 0;
}
