#include <iostream>

using namespace std;

void fun(int n)
{
    if(n != 0)
    {
        cout<<"HELLO\n";

        fun(n-1);
    }
}
int main()
{
    fun(5);

    return 0;
}