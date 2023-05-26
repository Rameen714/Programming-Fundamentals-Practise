
#include <iostream>

using namespace std;

void
cin_Array (int arr[], int n)
{
  cout << "enter the values" << endl;
  for (int i = 0; i < n; i++)
    cin >> arr[i];
}

void
cout_Array (const int arr[], int n)
{
  cout << "the values are" << endl;
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
}

int main ()
{
    int a[20], b[10], n;
    cout << "enter total number of values to be processed" << endl;
    cin >> n;
    cin_Array (a, n);
    cout_Array (a, n); 

  return 0;
}
