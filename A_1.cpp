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



Output:
Enter size of array:3
Enter 3 Elements
1
0
1
Zero occured at how many times:: 1 times

Enter size of array:8
Enter 8 Elements
10
20
00
34
000
87
0
000000
Zero occured at how many times:: 4 times
