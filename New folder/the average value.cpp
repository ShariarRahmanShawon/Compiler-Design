#include <iostream>
using namespace std;

int main()
{
   int n, i;
   cout<<"enter size of array : "<<endl;
 cin>>n;
   float arr[n], sum = 0.0, avg;
   cout<<"n";

   for(i = 0; i < n; i++)
{

    cout<<"enter number" <<i+1<<" : ";
    cin>>arr[i];
    sum += arr[i];
}


   avg = sum/n;
   cout<<"n";

   cout<<"Average of all array elements is "<<avg;


   return 0;
}
