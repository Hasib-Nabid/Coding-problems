#include<bits/stdc++.h>
using namespace std;

int *func(){
    int *a= new int;
    *a=100;
    return a;
}

int main()
{
    int *a=func();
    cout<<*a<<endl;
    return 0;
}