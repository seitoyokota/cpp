
#include <iostream>
using namespace std;

class player
{
	private:
		int a[10][10]={};
	public:
		int setPatrol(int r1, int r2, int c1, int c2)
 		{		
			if((r1==r2||c1==c2)&&((r1==r2-1||r1==r2+1)||(c1==c2-1||c1==c2+1)) &&(r1<10&&r2<10&&c1<10&&c2<10)&&(r1>-1&&r2>-1&c1>-1&&c2>-1))
			{
			    a[r1][c1]=1;
				a[r2][c2]=1;
				return 1;
			}
			else 
			{
            	return 0;
			}
		}
        int setSubmarine(int r1, int r2, int r3, int c1, int c2, int c3)
        {//if the two end coordinates are good it will fill in the rest
			if((r1==r3||c1==c3)&&((r1==r3-2||r1==r3+2)||(c1==c3-2||c1==c3+2))&&(r1<10&&r2<10&&r3<10&&c1<10&&c2<10&&c3<10)&&(r1>-1&&r2>-1&&r3>-1&&c1>-1&&c2>-1&&c3>-1))
			{
				if(r1==r3)
				{
					r2=r3;
					if(c1==c3-2)
					{
					    a[r1][c1]=1;
                        a[r3][c3]=1;
	          			a[r3][c3-1]=1;
	            		c2=c3-1;
					}
					else
					{
           				a[r1][c1]=1; 
                        a[r3][c3]=1;
	           			a[r3][c3+1]=1;
	 					c2=c3+1;
					}
				}
				else if (c1==c3)
				{
					c2=c3;
					if(r1==r3-2)
					{
					    a[r1][c1]=1;
                        a[r3][c3]=1;
	           			a[r3-1][c3]=1;
						r2=r3-1;
					}
					else
					{
        				a[r1][c1]=1; 
                    	a[r3][c3]=1;
	        			a[r3+1][c3]=1;
						r2=r3+1;
					}
				}
				return 1;
				}
				else
					return 0;
        }
		int setBattleship(int r1, int r2,int r3, int r4, int c1, int c2, int c3, int c4)
		{         
			if((r1==r4||c1==c4)&&((r1==r4+3||r1==r4-3)||(c1==c4-3||c1==c4+3))&&(r1<10&&r2<10&&r3<10&&r4<10&&c1<10&&c2<10&&c3<10&&c4<10)&&(r1>-1&&r2>-1&&r3>-1&&r4>-1&&c1>-1&&c2>-1&&c3>-1&&c4>-1))
			{
				if(r1==r4)
				{
					r2=r1;
                    r3=r1;
					if(c1==c4-3)
					{
			        	a[r1][c1]=1;
                    	a[r4][c4]=1;
	           			a[r4][c4-2]=1;
	          			a[r4][c4-1]=1;
						c2=c4-2;
						c3=c4-1;
					}
					else
					{
	              		a[r1][c1]=1; 
	                    a[r4][c4]=1;
		            	a[r4][c4+1]=1;
		            	a[r4][c4+2]=1;
						c2=c4+2;
						c3=c4+1;
					}
				}
				else if (c1==c4)
				{
					c2=c1;
  					c3=c1;
					if(r1==r4-3)
					{
			            a[r1][c1]=1;
 	            		a[r4][c4]=1;
            			a[r4-1][c4]=1;
            			a[r4-2][c4]=1;
						r2=r4-2;
						r3=r4-1;
					}
					else
					{
            			a[r1][c1]=1; 
            			a[r4][c4]=1;
           				a[r4+1][c4]=1;
            			a[r4+2][c4]=1;
						r2=r4+2;
						r3=r4+1;
					}                                               
				}
   				return 1;
			}
			else
			return 0;
 		}
		int setAircraft_carrier(int r1, int r2, int r3, int r4, int r5 ,int c1, int c2, int c3, int c4, int c5)
    	{
        	if((r1==r5||c1==c5)&&((r1==r5+4||r1==r5-4)||(c1==c5-4||c1==c5+4))&&(r1<10&&r2<10&&r3<10&&r4<10&&r5<10&&c1<10&&c2<10&&c3<10&&c4<10&&c5<10)&&(r1>-1&&r2>-1&&r3>-1&&r4>-1&&r5>-1&c1>-1&&c2>-1&&c3>-1&&c4>-1&&c5>-1))
            {
				if(r1==r5)
				{
					r2=r1;
					r3=r1;
					r4=r1;
					if(c1==c5-4)
					{
				    	a[r1][c1]=1;
	                    a[r5][c5]=1;
		        		a[r5][c5-3]=1;
		           		a[r5][c5-2]=1;
		            	a[r5][c5-1]=1;
						c2=c5-3;
						c3=c5-2;
						c4=c5-1;
					}
					else
					{
	            		a[r1][c1]=1; 
	                	a[r5][c5]=1;
		            	a[r5][c5+1]=1;
		            	a[r5][c5+2]=1;
		            	a[r5][c5+3]=1;
						c2=c5+3;
						c3=c5+2;
						c4=c5+1;
					}
				}
				else if (c1==c5)
				{
					c2=c1;
					c3=c1;
					c4=c1;
					if(r1==r5-4)
					{
					    a[r1][c1]=1;
		 	            a[r5][c5]=1;
		            	a[r5-1][c5]=1;
		            	a[r5-2][c5]=1;
		 	  			a[r5-3][c5]=1;
						r2=r5-3;
						r3=r5-2;
						r4=r5-1;
					}
					else
					{
		           		a[r1][c1]=1; 
		        		a[r5][c5]=1;
		        		a[r5+1][c5]=1;
		        		a[r5+2][c5]=1;
		        		a[r5+3][c5]=1;
		        		r2=r5+3;
		        		r3=r5+2;
		        		r4=r5+1;
					}
	        	}
				return 1;
        	}
			else
    			return 0;
			}
		int hitORmiss(int r1, int c1)
		{
			if(r1<10&&c1<10&&r1>-1&&c1>-1)
{
			if(a[r1][c1]==1)
			{
				cout<<"Hit"<<endl;
				cout<<endl;
				a[r1][c1]=2;
				return 1;
			}
			else
			{
				cout<<"Miss"<<endl;
				cout<<endl;
				return 0;
			}
			}
			else
			return 2;
		}

};

void printMap(int map[10][10])
	{
		for(int i=0;i<10;i++)
		{
			for(int j=0;j<10;j++)
			{
				cout<<map[i][j];
				cout <<" ";
			}
		cout<<endl;
		}
	}

int main()
{
	player p1;
	player p2;
	int check1[10][10]={};
	int check2[10][10]={};
	int map1[10][10]={};
	int map2[10][10]={};
	int num=0,choice,r1,r2,r3,r4,r5,c1,c2,c3,c4,c5,patrol=0,sub=0,battle=0,aircraft=0,a,wrong;	
	int p1R1,p1R2,p1C1,p1C2,s1R1,s1R2,s1R3,s1C1,s1C2,s1C3,b1R1,b1R2,b1R3,b1R4,b1C1,b1C2,b1C3,b1C4,a1R1,a1R2,a1R3,a1R4,a1R5,a1C1,a1C2,a1C3,a1C4,a1C5;
	cout<<"Player 1"<<endl;
	while(1)
	{
		while(1)
		{
			cout<<"1. Patrol ship (size 2)"<<endl;
			cout<<"2. Submarine (size 3)"<<endl;
			cout<<"3. Battleship (size 4)"<<endl;
			cout<<"4. Aircraft carrier (size 5)"<<endl;
			cout<<"Select a ship: ";
			cin>>choice;
			if(choice==1&&patrol==0)
				break;
			else if(choice==2&&sub==0)
				break;
			else if(choice==3&&battle==0)
				break;
			else if(choice==4&&aircraft==0)
				break;
            else if (choice >= 5 || choice <=0)
			{
				cout<<"Invalid choice."<<endl;
			}
			else
				cout<<"Ship's location has already been selected."<<endl;
		}
		switch(choice)
		{
			case 1: 
			{
				while(1)
				{
					cout<<"Enter the row of the first coordinate: ";
					cin>>r1;
					cout<<"Enter the column of the first coordinate: ";
					cin>>c1;
					cout<<"Enter the row of the second coordinate: ";
					cin>>r2;
					cout<<"Enter the column of the second coordinate: ";
					cin>>c2;
					if(check1[r1-1][c1-1]==0||check1[r2-1][c2-1]==0)
						break;
					else
						cout<<"Overlapping ship locations. Please try different coordinates."<<endl;
				}
				wrong=p1.setPatrol(r1-1,r2-1,c1-1,c2-1);
				if(wrong==1)
				{
				num++;
				patrol=1;
				p1R1=r1;
				p1R2=r2;
				p1C1=c1;
				p1C2=c2;
				check1[r1-1][c1-1]=1;
				check1[r2-1][c2-1]=1;
				break;
				}
				else
				{
				cout<<"That is not a possible placement please try again"<<endl;
				break;
				}
			}
			case 2:
			{
				while(1)
				{
					cout<<"Enter the row of the first coordinate: ";
					cin>>r1;
					cout<<"Enter the column of the first coordinate: ";
					cin>>c1;
					cout<<"Enter the row of the second coordinate: ";
					cin>>r2;
					cout<<"Enter the column of the second coordinate: ";
					cin>>c2;
					cout<<"Enter the row of the third coordinate: ";
					cin>>r3;
					cout<<"Enter the column of the third coordinate: ";
	                cin>>c3;
	                if((check1[r1-1][c1-1]==0)&&(check1[r2-1][c2-1]==0)&&(check1[r3-1][c3-1]==0))
						break;
					else
						cout<<"Overlapping ship locations. Please try again."<<endl;
				}
                wrong=p1.setSubmarine(r1-1,r2-1,r3-1,c1-1,c2-1,c3-1);
				if(wrong==1)
				{
					num++;
					sub=1;
					s1R1=r1;
					s1R2=r2;
					s1C1=c1;
					s1C2=c2;
					s1R3=r3;
					s1C3=c3;
					check1[r1-1][c1-1]=1;
					check1[r2-1][c2-1]=1;
					check1[r3-1][c3-1]=1;
					break;
				}
				else
				{
					cout<<"That is not a possible placement. Please try again."<<endl;
					break;
				}
			}
			case 3:
			{
				while(1)
				{
					cout<<"Enter the row of the first coordinate: ";
					cin>>r1;
					cout<<"Enter the column of the first coordinate: ";
					cin>>c1;
					cout<<"Enter the row of the second coordinate: ";
					cin>>r2;
					cout<<"Enter the column of the second coordinate: ";
					cin>>c2;
					cout<<"Enter the row of the third coordinate: ";
					cin>>r3;
					cout<<"Enter the column of the third coordinate: ";
					cin>>c3;
					cout<<"Enter the row of the fourth coordinate: ";
					cin>>r4;
					cout<<"Enter the column of the fourth coordinate: ";
					cin>>c4;
					if((check1[r1-1][c1-1]==0)&&(check1[r2-1][c2-1]==0)&&(check1[r3-1][c3-1]==0)&&(check1[r4-1][c4-1]==0))
						break;
					else
						cout<<"Overlapping ship locations. Please try again."<<endl;
				}
				wrong=p1.setBattleship(r1-1,r2-1,r3-1,r4-1,c1-1,c2-1,c3-1,c4-1);
				if(wrong==1)
				{
					num++;
					battle=1;
					b1R1=r1;
				    b1R2=r2;
				    b1C1=c1;
				    b1C2=c2;
			        b1R3=r3;
			        b1C3=c3;
			        b1R4=r4;
			        b1C4=c4;
			        check1[r1-1][c1-1]=1;
			        check1[r2-1][c2-1]=1;
			        check1[r3-1][c3-1]=1;
			        check1[r4-1][c4-1]=1;
					break;
				}
				else
				{
					cout<<"That is not a possible placement. Please try again."<<endl;
					break;
				}
			}
			case 4:
			{
				while(1)
				{
					cout<<"Enter the row of the first coordinate: ";
					cin>>r1;
					cout<<"Enter the column of the first coordinate: ";
					cin>>c1;
					cout<<"Enter the row of the second coordinate: ";
					cin>>r2;
					cout<<"Enter the column of the second coordinate: ";
					cin>>c2;
					cout<<"Enter the row of the third coordinate: ";
					cin>>r3;
					cout<<"Enter the column of the third coordinate: ";
					cin>>c3;
					cout<<"enter the row of the fourth coordinate: ";
					cin>>r4;
					cout<<"Enter the column of the fourth coordinate: ";
					cin>>c4;
					cout<<"Enter the row of the fifth coordinate: ";
					cin>>r5;
					cout<<"Enter the column of the fifth coordinate: ";
					cin>>c5;
					if((check1[r1-1][c1-1]==0)&&(check1[r2-1][c2-1]==0)&&(check1[r3-1][c3-1]==0)&&(check1[r4-1][c4-1]==0)&&(check1[r5-1][c5-1]==0))
						break;
					else
						cout<<"Overlapping ship locations. Please try again."<<endl;
				}
                wrong=p1.setAircraft_carrier(r1-1,r2-1,r3-1,r4-1,r5-1,c1-1,c2-1,c3-1,c4-1,c5-1);
				if(wrong==1)
				{
					num++;
					aircraft=1;
					a1R1=r1;
					a1R2=r2;
					a1C1=c1;
					a1C2=c2;
					a1R3=r3;
					a1C3=c3;
					a1R4=r4;
					a1C4=c4;
					a1R5=r5;
					a1C5=c5;
					check1[r1-1][c1-1]=1;
			        check1[r2-1][c2-1]=1;
			        check1[r3-1][c3-1]=1;
			        check1[r4-1][c4-1]=1;
			        check1[r5-1][c5-1]=1;
					break;
				}
				else
				{
					cout<<"That is not a possible placement. Please try again."<<endl;
					break;
				}
			}
			default:
			{
				cout<<"Invalid input."<<endl;
			}
		}
		if(num==4)
			break;
	}
	num=0;
	patrol=0;
	sub=0;
	battle=0;
	aircraft=0;
	int p2R1,p2R2,p2C1,p2C2,s2R1,s2R2,s2R3,s2C1,s2C2,s2C3,b2R1,b2R2,b2R3,b2R4,b2C1,b2C2,b2C3,b2C4,a2R1,a2R2,a2R3,a2R4,a2R5,a2C1,a2C2,a2C3,a2C4,a2C5;
	cout<<endl;
	cout<<"Player 2"<<endl;
	while(1)
	{
		while(1)
		{
			cout<<"1. Patrol ship (size 2)"<<endl;
			cout<<"2. Submarine (size 3)"<<endl;
			cout<<"3. Battleship (size 4)"<<endl;
			cout<<"4. Aircraft carrier (size 5)"<<endl;
			cout<<"Select a ship: ";
			cin>>choice;
			if(choice==1&&patrol==0)
				break;
			else if(choice==2&&sub==0)
				break;
			else if(choice==3&&battle==0)
				break;
			else if(choice==4&&aircraft==0)
				break;
	        else if (choice >= 5 || choice <=0)
			{
				cout<<"Invalid choice"<<endl;
			}
			else
				cout<<"Ship's location has already been selected."<<endl;
		}
		switch(choice)
		{
			case 1: 
			{
				while(1)
				{
					cout<<"Enter the row of the first coordinate: ";
					cin>>r1;
					cout<<"Enter the column of the first coordinate: ";
					cin>>c1;
					cout<<"Enter the row of the second coordinate: ";
					cin>>r2;
					cout<<"Enter the column of the second coordinate: ";
					cin>>c2;
					if((check2[r1-1][c1-1]==0)||(check2[r2-1][c2-1]==0))
						break;
					else
						cout<<"Overlapping ship locations. Please try different coordinates."<<endl;
				}
				wrong=p2.setPatrol(r1-1,r2-1,c1-1,c2-1);
				if(wrong==1)
				{
					num++;
					patrol=1;
					p2R1=r1;
					p2R2=r2;
					p2C1=c1;
					p2C2=c2;
					check2[r1-1][c1-1]=1;
			        check2[r2-1][c2-1]=1;
					break;
				}
				else
				{
					cout<<"That is not a possible placement. Please try again."<<endl;
					break;
				}

			}
			case 2:
			{
				while(1)
				{
					cout<<"Enter the row of the first coordinate: ";
					cin>>r1;
					cout<<"Enter the column of the first coordinate: ";
					cin>>c1;
					cout<<"Enter the row of the second coordinate: ";
					cin>>r2;
					cout<<"Enter the column of the second coordinate: ";
					cin>>c2;
					cout<<"Enter the row of the third coordinate: ";
					cin>>r3;
					cout<<"Enter the column of the third coordinate: ";
	                cin>>c3;
	                if((check2[r1-1][c1-1]==0)&&(check2[r2-1][c2-1]==0)&&(check2[r3-1][c3-1]==0))
						break;
					else
						cout<<"Overlapping ship locations. Please try again."<<endl;
				}
                wrong=p2.setSubmarine(r1-1,r2-1,r3-1,c1-1,c2-1,c3-1);
				if(wrong==1)
				{
					num++;
					sub=1;
					s2R1=r1;
					s2R2=r2;
					s2C1=c1;
					s2C2=c2;
					s2R3=r3;
					s2C3=c3;
					check2[r1-1][c1-1]=1;
			        check2[r2-1][c2-1]=1;
			        check2[r3-1][c3-1]=1;
					break;
				}
				else
				{
					cout<<"That is not a possible placement. Please try again."<<endl;
					break;
				}

			}
			case 3:
			{
				while(1)
				{
					cout<<"Enter the row of the first coordinate: ";
					cin>>r1;
					cout<<"Enter the column of the first coordinate: ";
					cin>>c1;
					cout<<"Enter the row of the second coordinate: ";
					cin>>r2;
					cout<<"Enter the column of the second coordinate: ";
					cin>>c2;
					cout<<"Enter the row of the third coordinate: ";
					cin>>r3;
					cout<<"Enter the column of the third coordinate: ";
					cin>>c3;
					cout<<"Enter the row of the fourth coordinate: ";
					cin>>r4;
					cout<<"Enter the column of the fourth coordinate: ";
					cin>>c4;
					if((check2[r1-1][c1-1]==0)&&(check2[r2-1][c2-1]==0)&&(check2[r3-1][c3-1]==0)&&(check2[r4-1][c4-1]==0))
						break;
					else
						cout<<"Overlapping ship locations. Please try again."<<endl;
				}
				wrong=p2.setBattleship(r1-1,r2-1,r3-1,r4-1,c1-1,c2-1,c3-1,c4-1);
				if(wrong==1)
				{
					num++;
					battle=1;
					b2R1=r1;
				    b2R2=r2;
				    b2C1=c1;
				    b2C2=c2;
	        		b2R3=r3;
	        		b2C3=c3;
	        		b2R4=r4;
	        		b2C4=c4;
	        		check2[r1-1][c1-1]=1;
			        check2[r2-1][c2-1]=1;
			        check2[r3-1][c3-1]=1;
			        check2[r4-1][c4-1]=1;
					break;
				}
				else
				{
					cout<<"That is not a possible placement. Please try again."<<endl;
					break;
				}

			}
			case 4:
			{
				while(1)
				{
					cout<<"Enter the row of the first coordinate: ";
					cin>>r1;
					cout<<"Enter the column of the first coordinate: ";
					cin>>c1;
					cout<<"Enter the row of the second coordinate: ";
					cin>>r2;
					cout<<"Enter the column of the second coordinate: ";
					cin>>c2;
					cout<<"Enter the row of the third coordinate: ";
					cin>>r3;
					cout<<"Enter the column of the third coordinate: ";
					cin>>c3;
					cout<<"Enter the row of the fourth coordinate: ";
					cin>>r4;
					cout<<"Enter the column of the fourth coordinate: ";
					cin>>c4;
					cout<<"Enter the row of the fifth coordinate: ";
					cin>>r5;
					cout<<"Enter the column of the fifth coordinate: ";
					cin>>c5;
					if((check2[r1-1][c1-1]==0)&&(check2[r2-1][c2-1]==0)&&(check2[r3-1][c3-1]==0)&&(check2[r4-1][c4-1]==0)&&(check2[r5-1][c5-1]==0))
						break;
					else
						cout<<"Overlapping ship locations. Please try again"<<endl;
				}
                wrong=p2.setAircraft_carrier(r1-1,r2-1,r3-1,r4-1,r5-1,c1-1,c2-1,c3-1,c4-1,c5-1);
				if(wrong==1)
				{
					num++;
					aircraft=1;
					a2R1=r1;
					a2R2=r2;
					a2C1=c1;
					a2C2=c2;
					a2R3=r3;
					a2C3=c3;
					a2R4=r4;
					a2C4=c4;
					a2R5=r5;
					a2C5=c5;
					check2[r1-1][c1-1]=1;
			        check2[r2-1][c2-1]=1;
			        check2[r3-1][c3-1]=1;
			        check2[r4-1][c4-1]=1;
			        check2[r5-1][c5-1]=1;
					break;
				}
				else
				{
					cout<<"That is not a possible placement. Please try again"<<endl;
					break;
				}
			}
			default:
			{
				cout<<"Invalid input"<<endl;
			}
		}
		if(num==4)
			break;
	}
	int p1d1=0,p1d2=0,p1d3=0,p1d4=0;
	int p2d1=0,p2d2=0,p2d3=0,p2d4=0;
	while(1)
	{
		while(1)
		{
			cout<<"Player 1"<<endl;
			cout<<"0 means coordinate has not been chosen yet. 1 means Miss 2 means Hit"<<endl;
			printMap(map1);
			while(1)
			{
				cout<<"Choose a coordinate:"<<endl;
				while(1)
				{
					cout<<"Enter the row: ";
					cin>>r1;
					if(r1>0&&r1<11)
						break;
				else
				{
					cout<<"That is not a possible coordinate. Please try again."<<endl;
					continue;
				}
				}
				while(1)
				{
					cout<<"Enter the column: ";
					cin>>c1;
					if(c1>0&&c1<11)
						break;
					else
					{
						cout<<" That is not a possible coordinate. Please try again."<<endl;
						continue;
					}
				}
				if(map1[r1-1][c1-1]==0)
					break;
				else
					cout<<" This coordinate has already been guessed. Please try again."<<endl;
			}
			a=p2.hitORmiss(r1-1,c1-1);
			if(a==1)
			{
				map1[r1-1][c1-1]=2;
			}
			else if(a==0)
			{
				map1[r1-1][c1-1]=1;
			}
		
			if((map1[p2R1-1][p2C1-1]==2)&&(map1[p2R2-1][p2C2-1]==2))
			{
   		    	cout<<"Patrol Ship is down"<<endl;
				p1d1=1;
			}	
			if((map1[s2R1-1][s2C1-1]==2)&&(map1[s2R2-1][s2C2-1]==2)&&(map1[s2R3-1][s2C3-1]==2))
			{
				cout<<"Submarine is down"<<endl;
				p1d2=1;
			}
			if((map1[b2R1-1][b2C1-1]==2)&&(map1[b2R2-1][b2C2-1]==2)&&(map1[b2R3-1][b2C3-1]==2)&&(map1[b2R4-1][b2C4-1]==2))
			{
				cout<<"Battleship is down"<<endl;
				p1d3=1;
			}
			if((map1[a2R1-1][a2C1-1]==2)&&(map1[a2R2-1][a2C2-1]==2)&&(map1[a2R3-1][a2C3-1]==2)&&(map1[a2R4-1][a2C4-1]==2)&&(map1[a2R5-1][a2C5-1]==2))
			{
				cout<<"Aircraft Carrier is down"<<endl;
				p1d4=1;
			}
			if(p1d1+p1d2+p1d3+p1d4==4)
			{
				cout<<"Player 1 has won"<<endl;
				break;
			}
			if(a!=1)
				break;
		}
		if(p1d1+p1d2+p1d3+p1d4==4)
			break;
		while(1)
		{
			cout<<"Player 2"<<endl;
			cout<<"0 means coordinate has not been chosen yet. 1 means Miss 2 means Hit"<<endl;
			printMap(map2);
			while(1)
			{
				cout<<"choose a coordinate:"<<endl;
				while(1)
				{
					cout<<"enter the row: ";
					cin>>r1;
					if(r1>0&&r1<11)
						break;
					else
					{
						cout<<"That is not a possible coordinate please try again"<<endl;
						continue;
					}
				}
				while(1)
				{
					cout<<"enter the column: ";
					cin>>c1;
					if(c1>0&&c1<11)
						break;
					else
					{
						cout<<"That is not a possible coordinate please try again"<<endl;
						continue;
					}
				}
				if(map2[r1-1][c1-1]==0)
					break;
				else
					cout<<"This coordinate has already been guessed. please try again"<<endl;
			}
			a=p1.hitORmiss(r1-1,c1-1);
			if(a==1)
			{
				map2[r1-1][c1-1]=2;
			}
			else if(a==0)
			{
				map2[r1-1][c1-1]=1;
			}
			else
{
cout<<"That is not a possible coordinate please try again"<<endl;
continue;
}

			if((map2[p1R1-1][p1C1-1]==2)&&(map2[p1R2-1][p1C2-1]==2))
			{
			   	cout<<"Patrol Ship is down"<<endl;
				p2d1=1;
			}
			if((map2[s1R1-1][s1C1-1]==2)&&(map2[s1R2-1][s1C2-1]==2)&&(map2[s1R3-1][s1C3-1]==2))
			{
				cout<<"Submarine is down"<<endl;
				p2d2=1;
			}
			if((map2[b1R1-1][b1C1-1]==2)&&(map2[b1R2-1][b1C2-1]==2)&&(map2[b1R3-1][b1C3-1]==2)&&(map2[b1R4-1][b1C4-1]==2))
			{
				cout<<"Battleship is down"<<endl;
				p2d3=1;
			}
			if((map2[a1R1-1][a1C1-1]==2)&&(map2[a1R2-1][a1C2-1]==2)&&(map2[a1R3-1][a1C3-1]==2)&&(map2[a1R4-1][a1C4-1]==2)&&(map2[a1R5-1][a1C5-1]==2))
			{
				cout<<"Aircraft Carrier is down"<<endl;
				p2d4=1;
			}
			if(p2d1+p2d2+p2d3+p2d4==4)
			{
				cout<<"Player 2 has won"<<endl;
				break;
			}
			if(a!=1)
				break;
		}
		if(p2d1+p2d2+p2d3+p2d4==4)
			break;
	}
}


