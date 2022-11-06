#include<iostream>
using namespace std;
void bubbleSort(int a[],int n)
{
    for(int i=0;i<n-1;++i)
    {
        for(int j=0;j<n-1-1;++j)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
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


    int a[]={50,40,30,20,90,80,10,60,70};


  cout << "Array before Sorting: ";
   Array(a, 9);
   bubbleSort(a, 9);
   cout << "Array after Sorting: ";
   Array(a, 9);



}

