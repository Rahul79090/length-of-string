#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i=0 ,ans=0;
    while (n!=0) 
    {
        /* code */int digit=n%10;
        if (digit==1)
        {
               /* code */ans =ans+pow(2,i);
        }
        n=n/10;
        i++;
        
    }
    cout<<ans<<endl;
    
    
}