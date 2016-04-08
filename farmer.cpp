#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,i;
    ifstream in("file.in",ios::in);
    if(!in)
    {
        cerr<<"Failed opening file.in";
        exit(1);
    }
    in>>n;
    int tmp;
    vector<int> cow;
    for(i=0;i<n;i++)
    {
        in>>tmp;
        cow.push_back(tmp);
    }
    sort(cow.begin(),cow.end());
    int sum=0;
    for(i=n-1;i>=n-5;i--)
    {
        //cout<<cow.at(i)<<" "; 
        sum+=cow.at(i);
    }
    cout<<sum<<endl;
    return 0;
}
