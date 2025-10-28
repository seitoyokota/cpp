#include<iostream>
using namespace std;

float add(float num1,float num2)
{
    num1=num1+num2;
    return num1;
}

float subtract(int num1,float num2)
{
    num1=num1-num2;
    return num1;
}

float multiply(int num1,float num2)
{
    num1=num1*num2;
    return num1;
}

float divide(int num1,float num2)
{
    num1=num1/num2;
    return num1;
}

int main()
{
    float num1,num2;
    int choice;
    while(1)
    {
        cout<<"1. addition"<<endl;
        cout<<"2. subtraction"<<endl;
        cout<<"3. multiplication"<<endl;
        cout<<"4. division"<<endl;
        cout<<"0. quit"<<endl;
        cout<<"select an option: ";
        cin>>choice;
        if(choice==0)
            break;
        switch(choice)
        {
            case 1:
            {
                cout<<"enter a number: ";
                cin>>num1;
                cout<<"enter another number: ";
                cin>>num2;
                num1=add(num1,num2);
                while(1)
                {
                    cout<<"enter another number or 0 for the answer: ";
                    cin>>num2;
                    if(num2==0)
                    {
                        cout<<"answer: "<<num1<<endl;
                        break;
                    }
                    else
                        num1=add(num1,num2);
                }
                cout<<endl;
                break;
            }
            case 2:
            {
                cout<<"enter a number: ";
                cin>>num1;
                cout<<"enter another number: ";
                cin>>num2;
                num1=subtract(num1,num2);
                while(1)
                {
                    cout<<"enter another number or 0 for the answer: ";
                    cin>>num2;
                    if(num2==0)
                    {
                        cout<<"answer: "<<num1<<endl;
                        break;
                    }
                    else
                        num1=subtract(num1,num2);
                }
                cout<<endl;
                break;
            }
            case 3:
            {
                cout<<"enter a number: ";
                cin>>num1;
                cout<<"enter another number: ";
                cin>>num2;
                num1=multiply(num1,num2);
                while(1)
                {
                    cout<<"enter another number or 0 for the answer: ";
                    cin>>num2;
                    if(num2==0)
                    {
                        cout<<"answer: "<<num1<<endl;
                        break;
                    }
                    else
                        num1=multiply(num1,num2);
                }
                cout<<endl;
                break;
            }
            case 4:
            {
                cout<<"enter a number: ";
                cin>>num1;
                cout<<"enter another number: ";
                cin>>num2;
                num1=divide(num1,num2);
                while(1)
                {
                    cout<<"enter another number or 0 for the answer: ";
                    cin>>num2;
                    if(num2==0)
                    {
                        cout<<"answer: "<<num1<<endl;
                        break;
                    }
                    else
                        num1=divide(num1,num2);
                }
                cout<<endl;
                break;
            }
            default:
            {
                cout<<"please select a given option"<<endl;
                cout<<endl;
            }
        }
    }
}