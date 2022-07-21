#include <iostream>
using namespace std;

int main()
{

  int n;
  cin >> n;
  int a[n];

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  // MAKE A N variable to store the missing number
  const int N = 1e6 + 2;
  // making bull array to store the presence of the number in the array
  bool check[N];
  for (int i = 0; i < N; i++)
  {
    // making all of the index initially false
    check[i] = 0;
  }

  for (int i = 0; i < n; i++)
  {
    // if the number is present in the array, then make the index true
    if (a[i] >= 0)
    {
      check[a[i]] = 1;
    }
  }

  int ans = -1;
  for (int i = 0; i < N; i++)
  {
    // if the index is false, then the number is missing
    if (check[i] == 0)
    {
      ans = i;
      break;
    }
  }
  cout << ans;
  return 0;
}