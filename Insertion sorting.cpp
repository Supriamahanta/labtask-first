
#include<iostream>
using namespace std;
void insertionSort(int a[], int n) {
   int key, j;
   for(int i = 1; i<n; i++) {
      key = a[i];
      j = i;
      while(j > 0 && a[j-1]>key) {
         a[j] = a[j-1];
         j--;
      }
      a[j] = key;
   }
}
void Array(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<" "<<a[i];
    }
    cout<<"\n";
}
int main()
{


    int a[]={50,90,70,80,40,10,20,30,60};


  cout << "Array before Sorting: ";
   Array(a, 9);
   insertionSort(a, 9);
   cout << "Array after Sorting: ";
   Array(a, 9);
}


