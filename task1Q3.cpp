
#include <iostream>
using namespace std;
int main() 
{
 int a[10], Smallest =0, n;
 cout << "Enter 10 integers: ";
    for (int i = 0; i < 10; i++) 
    {
        cin >> a[i];
    }
 for (int i=0; i<10; i++)
 {
     for (int j=i+1; j<10; j++)
     {
        if (a[i] > a[j])
        {
         Smallest = a[i];
         a[i] = a[j];
         a[j] = Smallest;
        }
     }
     
 }
  cout << "Sorted array in ascending order: ";
    for (int i = 0; i < 10; i++) 
    {
        cout << a[i] << " ";
    }
    return 0;
}