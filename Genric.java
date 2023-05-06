using namespace std;
#include<iostream>

int main()
{
    int i;
    float f;
    double d;

    i =  AdditionI(10,11);
    cout<<i<<"\n";

     f =  AdditionF(10.7f,89.5f);
    cout<<f<<"\n";

     d =  AdditionD(10.8,70.8);
    cout<<d<<"\n";
    
    return 0;

}

int Addition(int i,int j)
{
    int result;
    result = i+j;
    return result;
}

float Addition(float i,float j)
{
    int result;
    result = i+j;
    return result;
}

double Addition(double i,double j)
{
    int result;
    result = i+j;
    return result;
}