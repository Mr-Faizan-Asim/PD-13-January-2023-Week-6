#include<iostream>
using namespace std;

string add();
int quantity_take();
int check(string fruit,string day,int quantity);
main()
{
string fruit,day;
int quantity,result;
fruit = add();
day = add();
quantity = quantity_take();
result = check(fruit,day,quantity);

}


int check(string fruit,string day,int quantity)
{
    if(day !="Saturday" && day != "Sunday")
    {
            if(fruit == "banana")
            {
                cout<<"Price is "<< quantity*2.50;
            }
                       if(fruit == "apple")
            {
                cout<<"Price is "<< quantity*1.20;
            }
                       if(fruit == "orange")
            {
                cout<<"Price is "<< quantity*0.85;
            }
                       if(fruit == "grapefruit")
            {
                cout<<"Price is "<< quantity*1.45;
            }
                       if(fruit == "kiwi")
            {
                cout<<"Price is "<< quantity*2.7;
            }
                       if(fruit == "pineapple")
            {
                cout<<"Price is "<< quantity*5.50;
            }
                       if(fruit == "grapes")
            {
                cout<<"Price is "<< quantity*3.85;
            }
           
    }
    else if(day =="Saturday" || day == "Sunday")
    {
        if(fruit == "banana")
            {
                cout<<"Price is "<< quantity*2.70;
            }
                       if(fruit == "apple")
            {
                cout<<"Price is "<< quantity*1.25;
            }
                       if(fruit == "orange")
            {
                cout<<"Price is "<< quantity*0.90;
            }
                       if(fruit == "grapefruit")
            {
                cout<<"Price is "<< quantity*1.60;
            }
                       if(fruit == "kiwi")
            {
                cout<<"Price is "<< quantity*3.0;
            }
                       if(fruit == "pineapple")
            {
                cout<<"Price is "<< quantity*5.60;
            }
                       if(fruit == "grapes")
            {
                cout<<"Price is "<< quantity*4.20;
            }
    }
        else
        {
            return 0;
        }



return 0;



}

string add()
{
string x;
cout<<"Enter: ";
cin>> x;
return x;
}

int quantity_take()
{
int x;
cout<<"Enter Quantity: ";
cin>>x;
return x;

}