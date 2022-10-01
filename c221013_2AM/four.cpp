#include<iostream>
#include<math.h>
#include<cstdlib>
using namespace std;

class Area
{
        int pre;
        float ar;
        public:
                Area(float a, float b, float c)
                {
                        int pr;
                        float s;
                        pr=int(a+b+c);
                        s=(a+b+c)/2;
                        ar=s*(s-a)*(s-b)*(s-c);
                        ar=pow(ar,0.5);
                        pre=pr;
                }
                void display()
                {
                        cout<<"\n Area : "<<ar;
                        cout<<"\n perimeter : "<<pre;
                }
};
int main()
{
        int ch;
        float x, y, z;



                                cout<<"\n Enter Sides of the Triangle : ";
                                cin>>x>>y>>z;
                                Area a1(x,y,z);
                                a1.display();


        return 0;
}
