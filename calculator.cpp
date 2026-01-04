#include<iostream>
#include<cmath>
using namespace std;

float add(float num1,float num2)
{
    num1=num1+num2;
    return num1;
}

float subtract(float num1,float num2)
{
    num1=num1-num2;
    return num1;
}

float multiply(float num1,float num2)
{
    num1=num1*num2;
    return num1;
}

float divide(float num1,float num2)
{
    num1=num1/num2;
    return num1;
}

float ex(float num1,float num2)
{
    num1=pow(num1,num2);
    return num1;
}

float root(float num1,float num2)
{
    num1=pow(num1,1/num2);
    return num1;
}

float sine(float num1)
{
    num1=sin(num1);
    return num1;
}

float cosine(float num1)
{
    num1=cos(num1);
    return num1;
}

float tangent(float num1)
{
    num1=tan(num1);
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
        cout<<"5. exponent"<<endl;
        cout<<"6. root"<<endl;
        cout<<"7. sine"<<endl;
        cout<<"8. cosine"<<endl;
        cout<<"9. tangent"<<endl;
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
            case 5:
            {
                cout<<"enter the base: ";
                cin>>num1;
                cout<<"enter the exponent: ";
                cin>>num2;
                num1=ex(num1,num2);
                cout<<"answer: "<<num1<<endl;
                break;
            }
            case 6:
            {
                cout<<"enter the base: ";
                cin>>num1;
                cout<<"enter the number for the root (ex: 2 for square root): ";
                cin>>num2;
                num1=root(num1,num2);
                cout<<"answer: "<<num1<<endl;
                break;
            }
            case 7:
            {
                cout<<"enter 1 for degrees or 2 for radians: ";
                cin>>num1;
                if(num1==1)
                {
                    cout<<"enter the degree: ";
                    cin>>num1;
                    num1=num1*(M_PI/180);
                    num1=sin(num1);
                }
                else if(num1==2)
                {
                    cout<<"enter the radian: ";
                    cin>>num1;
                    num1=sin(num1);
                }
                cout<<"answer: "<<num1<<endl;
                break;
            }
            case 8:
            {
                cout<<"enter 1 for degrees or 2 for radians: ";
                cin>>num1;
                if(num1==1)
                {
                    cout<<"enter the degree: ";
                    cin>>num1;
                    num1=num1*(M_PI/180);
                    num1=cos(num1);
                }
                else if(num1==2)
                {
                    cout<<"enter the radian: ";
                    cin>>num1;
                    num1=cos(num1);
                }
                cout<<"answer: "<<num1<<endl;
                break;
            }
            case 9:
            {
                cout<<"enter 1 for degrees or 2 for radians: ";
                cin>>num1;
                if(num1==1)
                {
                    cout<<"enter the degree: ";
                    cin>>num1;
                    num1=num1*(M_PI/180);
                    num1=tan(num1);
                }
                else if(num1==2)
                {
                    cout<<"enter the radian: ";
                    cin>>num1;
                    num1=tan(num1);
                }
                cout<<"answer: "<<num1<<endl;
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