#include <iostream>
using namespace std;

int fib(int z);
void Fib();

int main()
{
	Fib();

    return 0;
}

int fib(int z)
{
        int f[z];
        f[0]=0;
        f[1]=1;
        if(z>1)
        {
        for(int i=2;i<=z;i++)
        {
            f[i]=f[i-1]+f[i-2];
        }
        }
        return f[z-1];
}


void Fib()
{
	int z;
	cout << "which Fibonacci number do you want?" << endl;
	cin >> z;
	if(z>0)
	{
	    cout << "The number " << z << "Fibonacci number is " << fib(z) << endl;
		Fib();
	}
	else cout<<"z<1"<<endl;
}
