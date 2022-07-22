#include <iostream>
#include <iomanip> //library to manipulate i/o streams and add precision to visualize data without more scientific symbols
using namespace std;

long double fib[100000]; int n;

int main()
{
    cout<<"This program shows user-defines number of Fibonacci sequence "<<endl;
    cout<<"How many numbers would you like to see:?";
    cin>>n;
    fib[0]=1;
    fib[1]=1;

    for(int i=2; i<n; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }
    cout<<setprecision(10000);
    for(int i=0; i<n; i++)
    {
        cout<<endl<<"Index"<<i+1<<": "<<fib[i];
    }

    cout<<"\nPress any key to exit";
    getchar();
    getchar();
   return 0;
}
