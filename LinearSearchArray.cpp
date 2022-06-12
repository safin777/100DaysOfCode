#include <iostream>
using namespace std;

int main()
{
  int n;
  int key;
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  for (int i = 0; i < n; i++)
  {
    cout << arr[i];
    
  }
  cout<<endl;
  cout << "Enter the value:"<<endl;
  cin >> key;

  for (int i = 0; i < n; i++)
  {

    if (arr[i] == key)
    {
      cout <<" The key found in index no: " << i;
    }
  }

  return 0;
}