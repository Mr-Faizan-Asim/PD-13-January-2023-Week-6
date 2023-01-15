#include<iostream>
using namespace std;
int dat_take();
string mont_take();
string check();

void check(int date, string month_take);
main()
{
int date;
string month;
date = dat_take();
month = mont_take();
check(date,month);




}

void check(int date, string month)
{
    if((month == "March" && date >=21 ) || (month == "April" && date <=19))
    {
    cout<<"Aries";
    }

    else if((month == "April" && date >=20 ) || (month == "May" && date <=20))
    {
    cout<<"Taurus";
    }
    else if((month == "May" && date >=21 ) || (month == "June" && date <=20))
        {
    cout<<"Gemini";
}
else if((month == "June" && date >=21 ) || (month == "July" && date <=22))
{
    cout<<"Cancer";
}
else if((month == "July" && date >=23 ) || (month == "August" && date <=22))
{
    cout<<"Leo";
}
else if((month == "August" && date >=23 ) || (month == "September" && date <= 22))
{
    cout<<"Virgo";
}
else if((month == "September" && date >=23 ) || (month == "October" && date <=22))
{
    cout<<"Libra";
}
else if((month == "October" && date >=23 ) || (month == "November" && date <=21))
{
    cout<<"Scorpio";
}
else if((month == "November" && date >=22 ) || (month == "December" && date <=21))
{
    cout<<"Sagittarius";
}
else if((month == "December" && date >=22 ) || (month == "January" && date <=19))
{
    cout<<"Capricon";
    }
    else if((month == "January" && date >=20 ) || (month == "Februray" && date <=18))
    {
    cout<<"Aquarius";
    }
    else if((month == "Feburary" && date >=19 ) || (month == "March" && date <=20))
    {
    cout<<"Pisces";
    }


}


int dat_take()
{
int dat;
cout<<"Enter Date: ";
cin>> dat;
return dat;
}


string mont_take()
{
string month;
cout<<"Enter Month: ";
cin>> month;
return month;
}