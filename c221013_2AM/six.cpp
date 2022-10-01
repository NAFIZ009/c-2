#include<iostream>
using namespace std;
class Area
{
    private:
        float len, bre;
    public:
        void setDim();
        float getArea();
};
void Area::setDim()
{
    cout<<"Enter Length and Breadth of Rectangle: ";
    cin>>len>>bre;
}
float Area::getArea()
{
    return (len*bre);
}
int main()
{
    Area c;
    float area, per;
    c.setDim();
    area = c.getArea();
    cout<<"\nArea = "<<area;
    cout<<endl;
    return 0;
}
