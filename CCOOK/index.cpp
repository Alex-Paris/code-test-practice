#include <iostream>
using namespace std;

int main()
{
  int n, input;

  cin >> n;
  while (n--)
  {
    int solved = 0;
    for (int i = 0; i < 5; i++)
    {
      cin >> input;
      if (input == 1)
        solved++;
    }

    switch (solved)
    {
    case 0:
      cout << "Beginner";
      break;
    case 1:
      cout << "Junior Developer";
      break;
    case 2:
      cout << "Middle Developer";
      break;
    case 3:
      cout << "Senior Developer";
      break;
    case 4:
      cout << "Hacker";
      break;
    case 5:
      cout << "Jeff Dean";
      break;
    }
    cout << endl;
  }
  return 0;
}
