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

  //{{ _______this part is brute force approach________ }}

  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = i; j < n; j++)
  //   {
  //     int sum = 0;
  //     for (int k = i; k <= j; k++)
  //     {
  //       sum += arr[k];
  //     }
  //     max_sum = max(max_sum, sum);
  //   }
  // }

  //{{ _______this part is using cumulative sum approach________ }}
  int currSum[n + 1];
  currSum[0] = 0;
  for (int i = 1; i <= n; i++)
  {
    currSum[i] = currSum[i - 1] + arr[i - 1];
  }

  int maxSum = INT_MIN;

  for(int i =1; i<n; i++){
    int sum =0;
    for(int j=0; j<i; j++){
      sum = currSum[i] - currSum[j];
      maxSum = max(sum,maxSum);
    }
  }

  cout << maxSum << endl;
  return 0;
}