// take a input array
// find all the possible subarrays of the array
// sum of all the subarrays
// find the maximum sum of the subarrays

#include <iostream>
#include <climits>
using namespace std;

int main()
{

  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int max_sum = INT_MIN;

  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < n; j++)
    {
      int sum = 0;
      for (int k = i; k <= j; k++)
      {
        sum += arr[k];
        // cout << arr[k] << " ";
      }
      // cout << endl;

      max_sum = max(max_sum, sum);
    }
  }
  cout << max_sum << endl;
  return 0;
}