#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    int n,t;
    bool good;
    cin >> t;
    while(t--)
    {
        cin>> n;
        char x[n][n];
        for(int i=0;i<n;i++)
        {
            cin>>x[i];
            sort(x[i],x[i]+n);
            cout<<x[i];
            if(i>0)
            {
                for(int j=0;j<n;j++)
                {
                     good = (x[i][j] >= x[i-1][j]);
                     if(good == 0)
                {
                    cout<<"NO";
                    return 0;
                }
                }




            }
        }
        cout<<"YES";



    }
    return 0;
}
