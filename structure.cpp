#include <iostream>
#include <cstring>
using namespace std;
struct Cricket
{
    char pname[100],tname[100];
    int bavg;   
};

int main()
{
    int n;
    cout<<"Enter the number of records:"<<endl;
    cin>>n;
    Cricket arr[n];
    for(int i=0;i<n;i++)
    {   
        cout<<"Enter the Player name, Team name and their Batting average of player no. "<<i+1<<":"<<endl;
        cin>>arr[i].pname;
        cin>>arr[i].tname;
        cin>>arr[i].bavg;
    }
    for(int j=1;j<n;j++)
    {
       
        for(int i=j;i<n;i++)
        {
            int k = 0;
            Cricket temp;
            while(arr[j-1].tname[k] != '\0' && arr[j].tname[k] != '\0')
            {
                if(arr[j-1].tname[k]>arr[j].tname[k])
                {
                    temp=arr[j-1];
                    arr[j-1]=arr[j];
                    arr[j]=temp;
                }
                k++;
            }
        }
    }
    cout<<"The Players and their details arranged in the order of team name are:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout <<arr[i].pname<<", "<<arr[i].tname<<", "<<arr[i].bavg<<endl;
    }
    return 0;
}
