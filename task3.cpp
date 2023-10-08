#include<iostream>
using namespace std;
float taxCalculator(char type,float price);
int main()
{
    char type;
    float price;
    cout<<"Enter the vehicle type code ( M , E , S , V , T ): ";
    cin>>type;
    cout<<"Enter the price of the vehicle: $";
    cin>>price;
    cout<<taxCalculator( type, price);
}
 float taxCalculator(char type,float price)
 {
    float Tax_Amount,Tax_Rate,Final_Price;
    if(type == 'M')
    {
        Tax_Amount=price*6/100;
        Final_Price=price + Tax_Amount;

    }
    if(type=='E')
    {
        Tax_Amount=price*8/100;
        Final_Price=price + Tax_Amount;

    }
    if(type=='S')
    {
        Tax_Amount=price*10/100;
        Final_Price=price + Tax_Amount;

    }
    if(type=='V')
    {
        Tax_Amount=price*12/100;
        Final_Price=price + Tax_Amount;
    }
    if(type=='T')
    {
        Tax_Amount=price*15/100;
        Final_Price=price + Tax_Amount;
    }
    return Final_Price;
 }
