#include <iostream>
#include "ZFraction.h"
using namespace std;

int main()
{
    ZFraction  a,b,c,d;

   cout <<"Entrez le numerateur et le denominateur d'une fraction."<< endl;
   cin >>a;
   cout <<a<<endl;
   cout <<"Entrez le numerateur et le denominateur d'une deuxieme fraction."<<endl;
   cin >>b;


    c=a+b;
    d=a*b;


    cout << a << " + " << b << " = " << c << endl;

    cout << a << " * " << b << " = " << d << endl;

    if(a > b)
        cout << "a est plus grand que b." << endl;
    else if(a==b)
        cout << "a est egal a b." << endl;
    else
        cout << "a est plus petit que b." << endl;

    return 0;
}

