#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;

  for (int tc = 0; tc < t; tc++)
  {
    int x, y;
    cin >> x >> y;

    cout << 10 * x + 90 * y << endl;
  }
  return 0;
}
