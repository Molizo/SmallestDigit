#include <iostream>

using namespace std;

int main()
{int n,uc,mi;
    cout<<"Introduceti numarul:";
    cin>>n;
    while(n>0)
    {
        uc=n%10;
        if(mi>uc)
        {
            if(uc%2==1)
            {
                mi=uc;
            }
        }
        n=n/10;
    }
    cout<<endl<<endl<<endl<<"Cifra este:"<<mi<<endl<<endl<<endl;
    return 0;
}
