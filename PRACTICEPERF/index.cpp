#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int input;
  vector<int> P;

  while (cin >> input)
    if (input >= 10)
      P.push_back(input);

  cout << P.size();

  return 0;
}
