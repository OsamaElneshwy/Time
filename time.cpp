#include "time.h"
#include "appointment.h"
#include "dayappointments.h"
#include "calendar.h"
#include <iostream>
using namespace std;

Time::Time()
{

}
Time::Time(int h,int m, string dn,Time &t)
{
    t.hour=h;
    t.minute=m;
    t.daynight=dn;
}
//******************************************************************
ostream& operator<< (ostream& out,Time t)
{
    out << t.hour << " : "<< t.minute << " " << t.daynight <<endl;
    return out;
}

istream& operator>> (istream& in, Time& t)
{
    int h,m;
    string dn;
    cout<<"Enter your Hour:";
    cin>>h;
    cout<<"Enter your Minute:";
    cin>>m;
    cout<<"Enter your Day/Night:";
    cin>>dn;
    Time(h,m,dn,t);
}
//*************************************************************
Time Time ::operator ==(Time x)
{
    if(this->hour==x.hour)
    {
        if(this->minute==x.minute)
        {
            if(this->daynight==x.daynight)
            {
                cout<<"true"<<endl;
            }
            else
            {
                cout<<"false"<<endl;
            }
        }
        else
        {
            cout<<"false"<<endl;
        }
    }
    else
    {
        cout<<"false"<<endl;
    }
    return x;
}

Time Time ::operator !=(Time x)
{
    if(this->hour==x.hour)
    {
        if(this->minute==x.minute)
        {
            if(this->daynight==x.daynight)
            {
                cout<<"false"<<endl;

            }
            else
            {
                cout<<"true"<<endl;

            }
        }
        else
        {
            cout<<"true"<<endl;
        }
    }
    else
    {
        cout<<"true"<<endl;
    }
    return x;
}

Time Time :: operator <(Time x)
{
    if(this->daynight=="am" && x.daynight=="pm")
    {
        cout<<"True"<<endl;
    }
    else if (this->hour<=x.hour)
    {
        if(this->minute<x.minute)
        {
            cout<<"True"<<endl;
        }
        else
        {
            cout<<"False"<<endl;
        }
    }
    else
    {
        cout<<"False"<<endl;
    }
    return x;
}

Time Time :: operator >(Time x)
{
    if(this->daynight=="pm" && x.daynight=="am")
    {
        cout<<"True"<<endl;
    }
    else if (this->hour>=x.hour)
    {
        if(this->minute>x.minute)
        {
            cout<<"True"<<endl;
        }
        else
        {
            cout<<"False"<<endl;
        }
    }
    else
    {
        cout<<"False"<<endl;
    }
    return x;
}
