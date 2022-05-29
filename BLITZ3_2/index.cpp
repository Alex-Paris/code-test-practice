#include <iostream>
using namespace std;

int main()
{
  int t, N, A, B;

  cin >> t;
  while (t--)
  {
    cin >> N >> A >> B;
    cout << 360 + 2 * N - (A + B) << endl;
  }
  return 0;
}
