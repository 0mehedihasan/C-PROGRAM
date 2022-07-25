#include<iostream>
using namespace std;
class info
{
public:
char name[20];
int id;
int section;
};
int main()
{
//classa and objects
int i;
info student[100];
for(i=0;i<4;i++)
{
cout<<"Enter Student name =";
cin>>student[i].name;
cout<<endl;
cout<<"Enter Student id=";
cin>>student[i].id;
cout<<endl;
cout<<"Enter Student section=";
cin>>student[i].section;
cout<<endl;
}
for(i=0;i<4;i++)
{
cout<<student[i].name<<"\t"<<student[i].id<<"\t"<<student[i].section<<endl;
}

    return 0;
}