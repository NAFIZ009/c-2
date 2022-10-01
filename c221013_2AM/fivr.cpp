#include <iostream>
#include<math.h>

#define PI 3.141

using namespace std;

class AreaRectangle
{
    float area;


  public:
    AreaRectangle(float length, float breadth);
    int Area()
    {
        float ar;
        ar = length * breadth;
        area=ar
        cout << "Area:\t" << area << endl;
    }
};

int main()
{
    float length, breadth;

    cout << "Enter the length:\t";
    cin >> length;

    cout << "Enter the breadth:\t";
    cin >> breadth;
    AreaRectangle a1(length, breadth);
    a1.Area();
    return 0;
}
