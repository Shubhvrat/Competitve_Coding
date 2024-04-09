#include <iostream>

using namespace std;

int main()
{
    int a,minimum,maximum,ans=0;
    cin>>a;
    int arr[a];
   
   
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
        
    }

   
    for(int i=0;i<a;i++)
    {
        if(i == 0)
        {
            minimum = arr[i];
            maximum = arr[i];
        }
       if(arr[i] < minimum)
        {
            minimum = arr[i];
            ans++;
        }
        if(arr[i] > maximum)
        {
            maximum = arr[i];
            ans++;
        }
        
    }
    cout<<ans<<endl;
    return 0;
}
