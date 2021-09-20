//break - continue
#include<iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 30; i++)
    {
        if (i == 15)
        {
            break;
        }
        cout << i << endl;
    }
    
    return 0;
}