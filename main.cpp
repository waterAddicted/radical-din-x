#include <iostream>
#include <cmath>
using namespace std;

double radical(double x,double eps)
{
    double st=0;
    double dr=x;
    double mij=(st+dr)/2;
    while(fabs(mij*mij-x)>eps)
    {
        if(mij*mij<x) st=mij;
        else dr=mij;
        mij=(st+dr)/2;
    }
    return mij;
}

int main()
{
    double x;
    double eps=0.00001;
    cin>>x;
    cout<<radical(x,eps);
}