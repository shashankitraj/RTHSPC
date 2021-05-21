#include <iostream>

using namespace std;

int main()
{
    int number;
    int num[] = {1,4,5,9,10,40,50,90,100};
    string sym[] = {"I","IV","V","IX","X","XL","L","XC","C"};
    int i=8;
    cout<<"num = ";
    cin>>number;
    while(number>0)
    {
      int div = number/num[i];
      number = number%num[i];
      while(div--)
      {
        cout<<sym[i];
      }
      i--;
    }
    return 0;
}
