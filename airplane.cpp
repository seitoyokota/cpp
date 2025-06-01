#include <iostream>
using namespace std;

void printArray (int array[12][4])
{
  for(int i=0;i<12;i++)
  {
    for(int j=0;j<4;j++)
    {
      cout<<array[i][j]<<" ";
    }
    cout<<endl;
  }
}
int main()
{
  int sect, child, age, count=0, seatsNeeded, num=0,seat;
  int seats[12][4] = {};
  while(1)
{
  for(int row=0; row<12; row++)
{
    for(int col=0; col<4; col++)
{
    if(seats[row][col]==0)
    {
      break;
    }
    else if(row==12 && col==4)
    {
      cout<<"The plane is full"<<endl;
      return(0);
    }
}
}
while(1)
{
  cout<<"This is the current seating"<<endl;
printArray(seats);
cout<<"What section do you want, 1-12: "<<endl;
    cin>>sect;
    sect-=1;
    if(sect<0)
{
  cout<<"Not a valid answer"<<endl;
}
else
{
  count++;
}
    }
    cout<<"How many children do you have?"<<endl;
    cin>>child;
    count = child;
if(child!=0)
{
      cout<<"Enter their age(s): "<<endl;
      while(count>0)
{
cin>>num;
if(age<0)
{
  cout<<"Not a valid age"<<endl;
}
else if(age<2)
{
child-1;
count--;
}
else
{
count--;
}
}
}
    seatsNeeded = child + 1;
    for(int col=0;col<4;col++)
    {
      num=num+seats[sect][col];
    }
    if(4-seatsNeeded>=num)
    {
      cout<<"There are enough seats in this section"<<endl;
      while(1)
      {	
cout<<"Enter the seat number (from 1 to 4) or -1 to exit: "<<endl;
cin>>seat;
if(seat<0)
  break;
if(seats[sect][seat-1]==1)
{
  cout<<"The seat is taken"<<endl;
}
else
{
  cout<<"The seat has been successfully booked"<<endl;
  seats[sect][seat-1]=1;
}

}
    }
    else
    {
      cout<<"There are not enough seats in this section"<<endl;
    }
}	
}