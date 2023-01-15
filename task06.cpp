#include<iostream>
using namespace std;
int calculate_apartment(string month,float stays);
int calculate_studio(string month,float stays);

main()
{
string month;
float stays;
cout<<"ENTER MONTH: ";
cin>>month;
cout<<"Number of Stays: ";
cin>>stays;
calculate_apartment(month,stays);
calculate_studio(month,stays);
}

int calculate_studio(string month,float stays)
{
float studio;
if(month == "May" ||month == "October" )
{

 studio = stays*50;
 if(stays>7 && stays<14)
 {
    studio = studio - (studio*0.05);
 }
  if(stays>14)
 {
    studio = studio - (studio*0.3);
 }
}
else if(month == "June" ||month == "September" )
{
 studio = stays*75.2;
  if(stays>14)
 {
    studio = studio - (studio*0.2);
 }

}
else if(month == "July" ||month == "August" )
{
 studio = stays*76;
 
}
else
{
cout<<"Wrong Valueo";
}

cout<<endl<<"Studio: "<<studio;
return 0;

}



int calculate_apartment(string month,float stays)
{
float appartment;
if(month == "May" ||month == "October" )
{

 appartment = stays*65;

}
else if(month == "June" ||month == "September" )
{
 appartment = stays*68.70;
}
else if(month == "July" ||month == "August" )
{
 appartment = stays*77;
}
else
{
cout<<"Wrong Valueo";
}
if(stays > 14)
{
appartment = appartment - (appartment*0.10);

}
else
{
    appartment = appartment;
}
cout<<"Appartment: "<<appartment;
return 0;

}

