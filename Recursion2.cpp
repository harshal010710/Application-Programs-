#include <iostream>

using namespace std;

void fun(int n)
{
    static int i = 1;

    if(i<n+1)
    {
        cout<<i++<<"\t";

        fun(n);
    }
}

int main()
{
    fun(6);

    return 0;
}