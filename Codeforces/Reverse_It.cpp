#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
   string name;
   int cls;
	string section;
	int id;
};

int main()
{
    int n;
    cin>>n;
    Student a[n];
    for(int i=0;i<n;i++){
        cin>>a[i].name>>a[i].cls>>a[i].section>>a[i].id;
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            swap(a[i].section,a[j].section);
        }
    }
        for(int i=0;i<n;i++){
         cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].section<<" "<<a[i].id<<endl;
    }
    return 0;
}