#include <iostream>
using namespace std;

int main()
{
  int input, t, Na;

  cin >> t;
  while (t--)
  {
    Na = 0;
    while (cin >> input)
      if (input > Na)
        Na = input;
  }

  cout << Na;
  return 0;
}
