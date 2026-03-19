#include<iostream>
using namespace std;
//Percentage of four subjects
float calculatePercentage(int s1, int s2, int s3, int s4)
{
	float obtained=s1+s2+s3+s4;
	return (obtained/400)*100;
}
//Average of four subjects
float calculateAverage(int s1, int s2, int s3, int s4)
{
	float Average=(s1+s2+s3+s4)/4.0;
	return Average;
}
//Grade of total marks
string calculateGrade(float percentage)
{
	if(percentage>=85)
	{
		return "A+";
	}
	else if(percentage>=80)
   {
	   return "A";
   }
   	else if(percentage>=75)
   {
	   return "B+";
   }
   	else if(percentage>=70)
   {
	   return "B";
   }
   	else if(percentage>=65)
   {
	   return "C+";
   }
   	else if(percentage>=60)
   {
	   return "C";
   }
   	else
   {
	   return "D";
   }   
}

int main()
{
	int sub1, sub2, sub3, sub4;
	cout<<"Enter marks of four subjects:"<<endl;
	cin>>sub1>>sub2>>sub3>>sub4;
	//Checking Validation
	if ((sub1<0 || sub1>100) || (sub2<0 || sub2>100) || (sub3<0 || sub3>100) || (sub4<0 || sub4>100))
	{
		cout<<"Invalid Marks Entered \n Please Enter valid marks between 0 and 100"<<endl;
		return 0;
	}
	//Checking Fail Subjects
	bool fail = false;
	if (sub1<50)
	{
		cout<<"Failed in Subject 1"<<endl;
		fail=true;
	}
	if (sub2<50)
	{
		cout<<"Failed in Subject 2"<<endl;
		fail=true;
	}
	if (sub3<50)
	{
		cout<<"Failed in Subject 3"<<endl;
		fail=true;
	}
	if (sub4<50)
	{
		cout<<"Failed in Subject 4"<<endl;
		fail=true;
	}
	if(fail)
	{
		cout<<"Student Failed"<<endl;
	}
	else
	{
		cout<<"Congratulations! You have passed"<<endl;
	    float Percentage=calculatePercentage(sub1,sub2,sub3,sub4);
	    float Average=calculateAverage(sub1,sub2,sub3,sub4);
	    string Grade=calculateGrade(Percentage);
	    
    cout<<"\n Marks of Subjects:\n";
	cout<<"Subject 1:"<<sub1<<endl;
	cout<<"Subject 2:"<<sub2<<endl;
	cout<<"Subject 3:"<<sub3<<endl;
	cout<<"Subject 4:"<<sub4<<endl;
	cout<<"Your Percentage is:"<<Percentage<<"%"<<endl;
	cout<<"Your Average is:"<<Average<<endl;
	cout<<"Your Grade is:"<<Grade<<endl;
	}
	return 0;
}
