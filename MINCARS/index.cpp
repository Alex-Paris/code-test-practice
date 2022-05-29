#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int t, n;

  cin >> t;
  while (t--)
  {
    cin >> n;
    float result = round((n / 4) + 0.5);
    cout << result << endl;
  }
  return 0;
}
