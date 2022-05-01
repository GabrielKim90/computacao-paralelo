#include <iostream>
#include <iomanip>
using namespace std;

struct ad_list 
{
    double S;
    ad_list *next;
}*np = NULL, *p = NULL;

struct Gr 
{
    int v;
    ad_list *ptr;
}arr[10];

void Insert(int s, double S)
{
    np = new ad_list;
    np->S = S;
    np->next = NULL;
    if (arr[s].ptr == NULL) 
    {
        arr[s].ptr = np;
        p = arr[s].ptr;
        p->next = NULL;
    } 
    else 
    {
        p = arr[s].ptr;
        while (p->next != NULL) 
        {
            p = p->next;
        }
        p->next = np;
    }
}

void Print(int n) 
{
    for (int i = 0; i < n; i++) 
    {
        cout << "Vertice " << arr[i].v << ": ";
        while (arr[i].ptr != NULL) 
        {
            cout << "Head -> " << (arr[i].ptr)->S << " ";
            arr[i].ptr = (arr[i].ptr)->next;
        }
        cout << endl;
    }
}

int main()
{
    int T = 11;
    double S = 0;
    float i;
    
    cout << "Numero de vertices: " << T << endl;
    for (int i = 0; i < T; i++) 
    {
        arr[i].v = i;
        arr[i].ptr = NULL;
    }
    
    for(i = 1; i<T; i++)
    {
        S += (1/i);
        Insert(i, S);
    }
    cout << setprecision(30);
    Print(T);
    return 0;
}


