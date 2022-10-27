#include<iostream>
using namespace std;
int main()
{
    int a,b,c,temp;
    cout<<"How many integers you want to input: ";
    cin>>a;
    int arr[a];
    cout<<"Input the integers: ";
    for(i=0; i<a; i++)
        cin>>arr[i];

    for(i=0; i<a-1; i++)
    {
        for(c=0; c<a-b-1; c++)
        {
            if(arr[c]>arr[c+1])
            {
                temp = arr[c];
                arr[c] = arr[c+1];
                arr[c+1] = temp;
            }
        }
    }
    cout<<"The sorted array: ";
    for(i=0; i<a; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
