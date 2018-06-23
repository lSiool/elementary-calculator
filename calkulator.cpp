#include <iostream.h>
#include <string.h>
int main()
{
    cout<<"hotite li vy uvidet pravila raboty s programmoy? y\\n"<<'\n';
    char q;    // da ili net
    cin>>q;
    if (q=='y')
    {
        cout<<"pravila raboty s kalkulatorom"; //tut budut pravila raboty
    }
    int a;
    int b;
    char z; //znak deystviya: * umnogit, / delit, + pribavliaet, - otnimaet, = vyhod iz cikla i pokaz rezultata 
    cin>>a>>z;// vvod pervogo chisla i znaka 
    while (z!='=')
    {
        cin>>b; //vvod vtorogo chisla
        switch(z)    //vychislenie
        {
            case '+':
                a=a+b;
                break;
            case '-':
                a=a-b;
                break;
            case '*':
                a=a*b;
                break;
            case '/':
                a=a/b;
                break;
            default:
                cout<<"luchshe by vy posmotreli pravila raboty s programmoy\n";
                return 0;
        }
        cin>>z;//vvod deystviya, tak kak resultat zapisyvaetsya v pervoe chislo. 
    }
    cout<<a<<'\n';
    return 0;
}