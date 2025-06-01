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
    char a[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            a[i][j] = ' ';
        }
    }
    int row,col;
    printGrid(a);
    while(1)
    {
        cout<<"Player 1 (x)"<<endl;
        cout<<"select a row: ";
        cin>>row;
        cout<<"select a column: ";
        cin>>col;
        a[row-1][col-1]= 'x';
        printGrid(a);
        if(((a[0][0]=='x')&&(a[0][1]=='x')&&(a[0][2]=='x'))||((a[1][0]=='x')&&(a[1][1]=='x')&&(a[1][2]=='x'))||((a[2][0]=='x')&&(a[2][1]=='x')&&(a[2][2]=='x'))||((a[0][1]=='x')&&(a[1][1]=='x')&&(a[2][1]=='x'))||((a[0][0]=='x')&&(a[1][0]=='x')&&(a[2][0]=='x'))||((a[0][2]=='x')&&(a[1][2]=='x')&&(a[2][2]=='x'))||((a[0][0]=='x')&&(a[1][1]=='x')&&(a[2][2]=='x'))||((a[0][2]=='x')&&(a[1][1]=='x')&&(a[2][0]=='x')))
        {
            cout<<"Player 1 wins!"<<endl;
            break;
        }
        cout<<endl;
        cout<<"Player 2 (o)"<<endl;
        cout<<"select a row: ";
        cin>>row;
        cout<<"select a column: ";
        cin>>col;
        a[row-1][col-1]= 'o';
        printGrid(a);
        if(((a[0][0]=='o')&&(a[0][1]=='o')&&(a[0][2]=='o'))||((a[1][0]=='o')&&(a[1][1]=='o')&&(a[1][2]=='o'))||((a[2][0]=='o')&&(a[2][1]=='o')&&(a[2][2]=='o'))||((a[0][1]=='o')&&(a[1][1]=='o')&&(a[2][1]=='o'))||((a[0][0]=='o')&&(a[1][0]=='o')&&(a[2][0]=='o'))||((a[0][2]=='o')&&(a[1][2]=='o')&&(a[2][2]=='o'))||((a[0][0]=='o')&&(a[1][1]=='o')&&(a[2][2]=='o'))||((a[0][2]=='o')&&(a[1][1]=='o')&&(a[2][0]=='o')))
        {
            cout<<"Player 2 wins!"<<endl;
            break;
        }
    }
}