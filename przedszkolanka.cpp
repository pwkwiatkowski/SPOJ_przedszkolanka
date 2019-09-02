#include <iostream>

using namespace std;

int main()
{
    int N;
    int a,b;

    cin>>N;
    for(int k=0; k<N; k++)
    {

        cin>>a>>b;
        //najwiekszy spolny dzielnik?

        int index=0;
        int liczba_dzielnikow=1;

        //dzielniki pierwszej liczby
        for(int i=1; i<=a/2; i++)
        {
            if(a%i==0)
            {
                liczba_dzielnikow++;
            }
        }

        int l_dziel1=liczba_dzielnikow;
        int * dziel;
        dziel=new int [liczba_dzielnikow];

        for(int i=1; i<=a/2; i++)
        {
            if(a%i==0)
            {
                dziel[index]=i;
                index++;
            }
        }
        dziel[liczba_dzielnikow-1]=a;

        /*    for(int i=0; i<liczba_dzielnikow; i++)
            {
                cout<<dziel[i]<<endl;
            }
        */
        //dzielniki drugiej liczby
        index=0;
        liczba_dzielnikow=1;

        for(int i=1; i<=b/2; i++)
        {
            if(b%i==0)
            {
                liczba_dzielnikow++;
            }
        }

        int l_dziel2=liczba_dzielnikow;
        int * dziel2;
        dziel2=new int [liczba_dzielnikow];

        for(int i=1; i<=b/2; i++)
        {
            if(b%i==0)
            {
                dziel2[index]=i;
                index++;
            }
        }
        dziel2[liczba_dzielnikow-1]=b;

        /*    for(int i=0; i<liczba_dzielnikow; i++)
            {
                cout<<dziel2[i]<<endl;
            }
        */
        int maks;
        for(int i=0; i<l_dziel1; i++)
        {
            for(int j=0; j<l_dziel2; j++)
            {
                if(dziel[i]==dziel2[j])
                {
                    maks=dziel[i];
                }
            }
        }
        //cout<<"Najwiekszy wspolny dzielnik: "<<maks<<endl;

        delete [] dziel;
        delete [] dziel2;

        int iloczyn=a*b;
        int wynik=iloczyn/maks;
        cout<<wynik<<endl;
    }

    return 0;
}
