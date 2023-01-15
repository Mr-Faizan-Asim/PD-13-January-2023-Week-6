#include<iostream>
using namespace std;
string take_temperature();
string take_humidity();
void check(string temp,string humidity);

main()
{
string temp,humidity;
temp = take_temperature();
humidity = take_humidity();
check(temp,humidity);



}
string take_temperature()
{
string x;
cout<<"Enter Temperature: ";
cin>>x;
return x;

}

string take_humidity()
{
string x;
cout<<"Enter Temperature: ";
cin>>x;
return x;

}

void check(string temp,string humidity)
{
    if(temp == "warm" && humidity == "dry")
    {
        cout<<"Play Tennis";
    }
    else if(temp == "warm" && humidity == "humid")
    {
        cout<<"Swim";
    }
    else if(temp == "cold" && humidity == "dry")
    {
        cout<<"Play Basket Ball";
    }
    else if(temp == "cold" && humidity == "humid")
    {
        cout<<"Watch TV";
    }
    

}