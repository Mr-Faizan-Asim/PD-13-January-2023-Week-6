#include<iostream>

using namespace std;
float total_marks();
int cal_percentage(float total);
string check(float percentage);
main()
{
float total;
int percentage;
string grade;
total = total_marks();
cout<<"Total Marks Are "<<total<<endl;
percentage = cal_percentage(total);
cout<<"Percentage: "<<percentage<<"%"<<endl;
grade = check(percentage);
cout<<"Grade: "<<grade;





}
float total_marks()
{
string name;
float total_m,subject_1,subject_2,subject_3,subject_4,subject_5;
cout<<"Enter Your Name: ";
cin>> name;
cout<<"Enter Maths Marks: ";
cin>> subject_1; 
cout<<"Enter English Marks: ";
cin>> subject_2; 
cout<<"Enter Chemistry Marks: ";
cin>> subject_3; 
cout<<"Enter Social Science Marks: ";
cin>> subject_4; 
cout<<"Enter Biology Marks: ";
cin>> subject_5;
total_m = subject_1+subject_2+subject_3+subject_4+subject_5;
return total_m; 

}
int cal_percentage(float total)
{
int per;
per = (total/500)*100;
return per;



}
string check(float percentage)
{

if(percentage>=90 && percentage<=100)
{
    return "A+";
}
else if(percentage>=80 && percentage<90)
{
    return "A";
}
else if(percentage>=70 && percentage<80)
{
    return "B+";
}
else if(percentage>=60 && percentage<70)
{
    return "B";
}
else if(percentage>=50 && percentage<60)
{
    return "C";
}
else if(percentage>=40 && percentage<50)
{
    return "D";
}
else if(percentage<=40 && percentage>50)
{
    return "D";
}
else
{
    return "F";
}
return 0;
}