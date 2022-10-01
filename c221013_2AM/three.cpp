#include<iostream>
#include<cmath>
using namespace std;
class triangle
{
    private:
        float a, b, c, s, ar;
    public:
        void getData();
        float areaOfTriagle();
        float perOfTriangle();
};
void triangle::getData()
{
    cout<<"Enter Length of all Three Sides: ";
    cin>>a>>b>>c;
}
float triangle::areaOfTriagle()
{
    s = float((a+b+c))/2;
    ar = sqrt(s*(s-a)*(s-b)*(s-c));
    return ar;
}
float triangle::perOfTriangle()
{
    return (a+b+c);
}
int main()
{
    triangle triangle1;
    float area, perimeter;
    triangle1.getData();
    area = triangle1.areaOfTriagle();
    cout<<"\nArea = "<<area;
    perimeter = triangle1.perOfTriangle();
    cout<<"\nPerimeter = "<<perimeter;
    cout<<endl;
    return 0;
}
