#include<iostream>
using namespace std;
void countEvenOdd(int m[3][3])
{
	int even =0, odd=0;
	for(int i=0; i<3; i++)
	for(int j=0; j<3; j++)
	{
		if (m[i][j]%2==0)
		even++;
		else
		odd++;
	}
	cout<<"Even = "<<even<<endl;
	cout<<"Odd = "<<odd;
}
int main()
{
	int m[3][3];
	cout<<"Enter matrix:"<<endl;
	for(int i=0; i<3; i++)
	for(int j=0; j<3; j++)
	cin>>m[i][j];
	
	countEvenOdd(m);
	return 0;
}
