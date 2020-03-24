#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;

void TriInsertion();

void IniTab(int tab[10])
{
    int nb = rand() %10;
    int i; 
    for(i = 0; i < 10; i++)
    {
        tab[i] = nb;
    }
}

void LireTab(int tab[10])
{
    int i;
    for (i = 0; i < 10; i++)
    {
        cout << tab[i] ;
    }
}



int main()
{
    int tab[10];
    IniTab(tab);
    LireTab(tab);
}