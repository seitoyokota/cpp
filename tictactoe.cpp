#include<iostream>
using namespace std;

void printGrid(char a[3][3])
{
    cout<<" "<<a[0][0]<<" | "<<a[0][1]<<" | "<<a[0][2]<<endl;
    cout<<"-----------"<<endl;
    cout<<" "<<a[1][0]<<" | "<<a[1][1]<<" | "<<a[1][2]<<endl;
    cout<<"-----------"<<endl;
    cout<<" "<<a[2][0]<<" | "<<a[2][1]<<" | "<<a[2][2]<<endl;
    cout<<endl;
}

int main()
{
    char a[3][3]={' '};
    int row,col;
    printGrid(a);
    while(1)
    {
        cout<<"Player 1"<<endl;
        break;
    }
}