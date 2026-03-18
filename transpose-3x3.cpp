#include <iostream>
using namespace std;

void transpose(int m[3][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            cout<<m[j][i]<<" ";
        cout<<endl;
    }
}

int main()
{
    int m[3][3];

    cout<<"Enter matrix:\n";
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin>>m[i][j];

    cout <<"Transpose matrix is:"<<endl;
	transpose(m);

    return 0;
}
