#include<iostream>
using namespace std;
char take_type();
char day();
float ser();
float check_a(char type,char day_time,float service);

main()
{
    char type,day_time;
    float service,total;
    type = take_type();
    day_time = day();
    service = ser();
    total = check_a(type,day_time,service);
    cout<<"Charges Are "<< total<<"$";



}
float check_a(char type,char day_time,float service)
{   float total,extra;
    if(type == 'r')
    {
        total = 10;
        if(service>50)
        {
        extra = service - 50;
        total = total + (extra*0.20);
        }
        return total;
    }
    if(type == 'p')
    {
        total = 25;
        if(day_time == 'D')
        {
        if(service>75)
        {
        extra = service - 75;
        total = total + (extra*0.10);
        }
        }
        if(day_time == 'N')
        {
        if(service>100)
        {
        extra = service - 100;
        total = total + (extra*0.05);
        }

        return total;
        }
        
    }


return total;


}

char take_type()
{
char type;
cout<<"Enter Type of Service: ";
cin>>type;
if( type=='r' || type=='p')
{
    return type;
}
else
{
    cout<<"Error";
    return 0;
}
return 0;
}
char day()
{
    char day;
cout<<"Enter Day Time: ";
cin>>day;
if( day=='N' || day=='D')
{
    return day;
}
else
{
    cout<<"Error";
    return 0;
}
return 0;
}
float ser()
{
float x;
cout<<"Enter Mins: ";
cin>> x;
return x;

}