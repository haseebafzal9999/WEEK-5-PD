#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void header();
float brand(string product, string brandname, int quantity);
main(){
	system("cls");
	header();
	const string name="Haseeb Afzal";
	string product, BrandName;
	int quantity;
	cout<<"Enter the product name: ";
	cin>>product;
	cout<<"Enter the brand name: ";
	cin>>BrandName;
	cout<<"Enter the quantity: ";
	cin>>quantity;
	float result;
	result=brand(product,BrandName,quantity);
	cout<<result;
	system("cls");
	gotoxy(25,4);
	cout<<"LOOT LOO ONLINE $HOPPING CENTRE";
	gotoxy(20,5);
	cout<<"Product name";
	gotoxy(20,6);
	cout<<product;
	gotoxy(40,5);
	cout<<"Brand name";
	gotoxy(40,6);
	cout<<BrandName;
	gotoxy(60,5);
	cout<<"Quantity";
	gotoxy(60,6);
	cout<<quantity;
	gotoxy(15,9);
	cout<<"________________________________________________________________________________________";
	gotoxy(15,11);
	cout<<"Total price: ";
	gotoxy(30,11);
	cout<<"Rs"<<result;
	gotoxy(65,12);
	cout<<"Cashier: ";
	gotoxy(75,12);
	cout<<name;
}
	void gotoxy(int x,int y){
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
	
}
float brand(string product, string brandname, int quantity){
	float totalprice = 0;
	 string item1="Pants";
	 string item2="T_Shirts";
	 string item3="Perfume";
	 string brand1="Nike";
	 string brand2="Maria_B";
	 string brand3="Diesel";
	 float p_pants_n=2000;
	 float p_pants_d=3000;
	 float p_pants_m=1000;
	 float p_tshirt_n=1500;
	 float p_tshirt_d=2000;
	 float p_tshirt_m=1200;
	 float p_perfume_n=2500;
	 float p_perfume_d=5500;
	 float p_perfume_m=1500;
if(product==item1){
	if(brandname==brand1){
	totalprice=quantity*p_pants_n;
}
	if(brandname==brand2){
	totalprice=quantity*p_pants_m;
}
	if(brandname==brand3){
	totalprice=quantity*p_pants_d;
}
	return totalprice;
}
	if(product==item2){
	if(brandname==brand1){
	totalprice=quantity*p_tshirt_n;
	return totalprice;
}
	if(brandname==brand2){
	totalprice=quantity*p_tshirt_m;
	return totalprice;
}
	if(brandname==brand3){
	totalprice=quantity*p_tshirt_d;
	return totalprice;
}
return 0;
}
if(product==item3)
	if(brandname==brand1){
	totalprice=quantity*p_perfume_n;
	return totalprice;
}
	if(brandname==brand2){
	totalprice=quantity*p_tshirt_m;
	return totalprice;
}
	if(brandname==brand3){
	totalprice=quantity*p_tshirt_d;
	return totalprice;
}
return 0;
}
void header()
{
	cout << "\t\t\t\tZ Mart\n\n\n\n";
}