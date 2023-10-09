#include<iostream>
using namespace std;

int main()
{
    
   
    int i,cnt=0,n;
    cout<<"Enter size of array:";
    cin>>n;
     int a[n];
     cout<<"Enter"<<" "<<n<<" "<<"Elements\n";

    for(i = 0; i < n; i++)
    {
    
         cin >> a[i];
    }

    for(i = 0; i < n; i++)
    {
        if(a[i]==0)
        {
    
            cnt++;
        }
        
    }
    cout<<"Zero occured at how many times::"<<" "<<cnt<<" "<<"times";
   

    return 0;
}
