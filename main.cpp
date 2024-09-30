#include <iostream>
#include <list>

using namespace std;

int main()
{
    int n, k;
    list <int> lista;
    list <int>::iterator it;
    cout<<"n = "; cin>>n;
    cout<<"k = ";cin>>k;
    for (int i=1;i<=n;i++) lista.push_back(i);
    it=lista.begin();
    for(int i=1;i<n;i++)
    {
        for (int j=1;j<k;j++)
        {
            it++;
            if(it==lista.end()) it=lista.begin();
        }
        cout<<"Krok "<<i<<": usuniety element ";
        cout<<*it<<endl;
        it=lista.erase(it);
        if (it==lista.end()) it=lista.begin();
    }
    cout<<" Ostatni element: "<<*it;
    return 0;
}
