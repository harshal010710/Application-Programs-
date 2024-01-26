#include <iostream>

using namespace std;


void fun(int n)
{
    if(fun(n)>0)
    {
        cout<<fun(n);

        fun(n-1);
    }
}
// int fun(int n)
// {
//     static int i = n;

//     if(i > 0)
//     {
//         cout<<i;

//         i = fun(n-1);
//     }

//     return i;
// }
int main()
{
    fun(8);

    return 0;
}