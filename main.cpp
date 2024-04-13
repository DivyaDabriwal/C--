#include <iostream>
using namespace std;

    void sum(int &x, int &y)

    {if (x<y) x+=41; else y-=52;}

    int main()
    {int a=41,b=52; sum(a,b); cout<<a<<b;}
