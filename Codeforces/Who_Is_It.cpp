#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int id;
    char name[100];
    char section[100];
    int marks;
};
int main()
{
    int t;
    cin>>t;
 while(t--){  
    Student a,b,c;
    cin>>a.id>>a.name>>a.section>>a.marks;
    getchar();
    cin>>b.id>>b.name>>b.section>>b.marks;
    getchar();
    cin>>c.id>>c.name>>c.section>>c.marks;

    int mx=max({a.marks,b.marks,c.marks});


    if(mx==a.marks)  cout<<a.id<<" "<<a.name<<" "<<a.section<<" "<<a.marks;
   else if(mx==b.marks)  cout<<b.id<<" "<<b.name<<" "<<b.section<<" "<<b.marks;
    else cout<<c.id<<" "<<c.name<<" "<<c.section<<" "<<c.marks;
    cout<<endl; 
 }
    return 0;
}