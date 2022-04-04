#include <iostream>
#include<map>
#include<string>
#include<iomanip>
using namespace std;
typedef map<string,int>Phone_no;
void printstar();

int main()
{
    Phone_no p;
    string name;
  long  int num,n;
    cout<<"How many record do you want to insert ?\n";
    cin>>n;
    cout<<"Enter "<<n<<" phone number and name\n";
    for(int i=0;i<n;i++)
    {
        cout<<"enter number \n";
        cin>>num;
        cout<<"Enter name :\n";
        cin>>name;
        p[name]=num;
    }
    //p["Sai"]=452314;
    int m=p.size();
    cout<<"\nSize of map is :"<<m;
    cout<<"\nList of Phone numbers \n";
    printstar();
   Phone_no :: iterator j;
    for(j=p.begin();j!=p.end();j++)
    {
        cout<<setw(10)<<(*j).first<<setw(10)<<(*j).second<<endl;
    }

    return 0;
}
void printstar()
{
    for(int j=0;j<40;j++)
    cout<<"=";
    cout<<endl;
}
