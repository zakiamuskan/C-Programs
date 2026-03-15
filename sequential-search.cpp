#include <iostream>
using namespace std;
void search(int arr[], int num)
{
	bool found = false;
	int index;
	for(int i=0; i<5; i++)
	{
		if(arr[i]==num)
		{
			found = true;
			index = i;
			break;
		}
	}
    	if(found== true)
    	{
    		cout<<"Number Found at index " << index <<endl;
		}
		else
		{
			cout<<"Not Found";	
		}
}

int main()
{
	int arr[5], num;
	for(int i=0; i<5; i++)
	{
		cout<<"Enter your value " << 1+i<< " : " ;
		cin >> arr[i];
	}
	cout<<"Enter a Number to Search :";
	cin>> num;
	
	search(arr,num);
	return 0;
	
}

