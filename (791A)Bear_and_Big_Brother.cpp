//The brightest known object in the universe are formed by the darkest known object in the universe..
#include<iostream>

using namespace std;

int main()
{
    int a, b, i;
    cin >> a >> b;
    for(i = 1;;i++)
    {
      a *= 3;
      b *= 2;
      if(a > b)break;
    }
    cout << i;
}