#include <iostream>
using namespace std;

int main()
{
  int t, x, y, result;

  cin >> t;

  while (t--)
  {
    cin >> x >> y;

    if (x * 3 > y * 2)
      result = x * 3;
    else
      result = y * 2;
    cout << result << "\n";
  }

  return 0;
}
