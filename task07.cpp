#include<iostream>
using namespace std;
void check(int st_hour,int st_min,int sa,int sm);
main()
{
int st_hour,st_min,sa,sm;
cout<<"Exam Starting Time (hour): "; 
cin>>st_hour;
cout<<"Exam Starting Time (minutes): "; 
cin>>st_min;
cout<<"Student hour of arrival: ";
cin>>sa;
cout<<"Student minutes of arrival:"; 
cin>>sm;
check(st_hour,st_min,sa,sm);



}
void check(int st_hour,int st_min,int sa,int sm)
{
    int valueo_m = st_min - sm;
    int valueo_h = st_hour - sa;
    if(valueo_h > 0 )
    {
        cout<<"Early"<<endl;
        cout<<valueo_h<<":"<<valueo_m<<" before the start";
    }
    else if(valueo_h == 0 && valueo_m >= 0 )
    {
        cout<<"On time"<<endl;
        cout<<valueo_h<<":"<<valueo_m<<" before the start";
    }
    else if(valueo_h < 0 || valueo_m < 0)
    {
        cout<<"Late"<<endl;
        cout<<valueo_h*-1<<":"<<valueo_m<<" After the start";
    }



}