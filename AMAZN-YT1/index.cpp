#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> ratings;
  int n, input, groups, periods = 0;

  cin >> n;
  for (int i = 0; i < n and cin >> input; i++)
    ratings.push_back(input);

  for (int days = 0; days < ratings.size(); days++)
  {
    for (int i = days; i < ratings.size(); i++)
    {
      groups = days;
      for (int d = days; d >= 0; d--)
      {
        if (ratings[i - d] - d == ratings[i])
          groups--;
      }
      if (groups == -1)
        periods++;
    }
  }

  cout << periods;

  return 0;
}
