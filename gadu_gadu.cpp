#include <iostream>

using namespace std;

int a,b,k=0,suma;
char tab[20],haslo[10],cyfra;
char pierwsza_lit[17] = "ABCDEFGHIJKLMNOP";
int pierwsza_cyf[16] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
char druga_lit[17] = "ABCDEFGHIJKLMNOP";
int druga_cyf[16] = {0,16,32,48,64,80,96,112,128,144,160,176,192,208,224,240,};

int main()
{
    while(cin>>tab)
    {
        for (int j=0;j<20;j=j+2)
        {
            for (int i=0;i<16;i++)
        {
            if (tab[j]==pierwsza_lit[i])
            {
                a=pierwsza_cyf[i];


            for (int l=0;l<16;l++)
            {
            if (tab[j+1]==druga_lit[l])
            {
                b=druga_cyf[l];
                continue;
            }
            }
                suma=a+b;
                cyfra=char(suma);
                haslo[k]=cyfra;
                k=k+1;
            }
        }
        }
        for (int i=0;i<k;i++)
        {
            cout<<haslo[i];
        }
        k=0;
        cout<<endl;
    }

    return 0;
}
