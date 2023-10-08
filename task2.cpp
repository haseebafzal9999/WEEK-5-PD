#include<iostream>
#include<cmath>
using namespace std;
float pyramidVolume(float L,float W,float H,string a);
main()
{
    float L,W,H;
    string a;
    cout<<"Enter the length of the pyramid (in meters): ";
    cin>>L;
    cout<<"Enter the width of the pyramid (in meters): ";
    cin>>W;
    cout<<"Enter the height of the pyramid (in meters): ";
    cin>>H;
    cout<<"Enter the desired output unit (millimeters,centimeters,meters,kilometers): ";
    cin>>a;
    cout<<pyramidVolume(L,W,H,a);


}
    float pyramidVolume(float L,float W,float H,string a)
    {
        float V;

    
    V=(L*W*H)/3;
    if(a == "millimeters")  
    {
     V = V*pow(1000,3);
    }
    if(a == "centimeters" )
    {
        V=V*pow(100,3);
        
    }
    if(a == "kilometers" )
    {
        V=V/pow(1000,3); 
    }
    return V;
    
    }
    