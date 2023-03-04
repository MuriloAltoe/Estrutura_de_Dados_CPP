#include <bits/stdc++.h>
using namespace std;
 

void inverte(string frase)
{
    if(frase.size() == 0){
        return;
    }
    
    inverte(frase.substr(1));
    
    cout << frase[0];
}
 

int main()
{
    string m = "Murilo Altoe";
    inverte(m);
    return 0;
}
