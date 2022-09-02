#include <bits/stdc++.h>
using namespace std;

int exceed(int a,int b)
{
    int c=0,s=0;
    while(s<b){
        s+=a;
        a++;
        c++;
    }
    return c;
}

int main()
{
    int x,z;
    cin >> x;
    while(scanf("%d",&z)!=EOF){
        if(z>x)
            break;   
    }
    int r = exceed(x,z);
    cout << r << endl;
    return 0;
}