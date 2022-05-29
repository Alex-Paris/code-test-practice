#include <iostream>
using namespace std;

int main()
{
  int input, t, n;

  cin >> t;
  while (t--)
  {
    int degree;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
      cin >> input;
      if (input != 0)
        degree = i;
    }
    cout << degree << "\n";
  }

  return 0;
}
