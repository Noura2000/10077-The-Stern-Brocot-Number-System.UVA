#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>m>>n;
    while(1)
    {
        if(n==1&&m==1) return 0;
        int a=0,b=1,c=1,d=0,up=1,down=1;

        while(1)
        {
            if(up==m&&down==n) break;

            if(up*n>down*m)
            {
                cout<<"L";
                c=up;
                d=down;
            }else{
            cout<<"R";
            a=up;
            b=down;
            }
            up=a+c;
            down=b+d;
        }
    cout<<endl;
        cin>>m>>n;
    }
    return 0;
}
