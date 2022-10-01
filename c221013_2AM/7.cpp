#include<iostream>
using namespace std;
class Area
{

    public:
    float len, bre;
    Area(float l,float b)
    {
    len =l;
    bre=b;
    }
    float getArea();

};

float Area::getArea()
{
    return (len*bre);
}
int main()
{
    float x,y,area;
    cout<<"Enter Length and Breadth of Rectangle: "<<endl;
    cin>>x>>y;
    Area c(x,y);
    area = c.getArea();
    cout<<"\nArea = "<<area;
    cout<<endl;
    return 0;
}
