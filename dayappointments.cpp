#include "time.h"
#include "time.h"
#include "appointment.h"
#include "dayappointments.h"
#include "calendar.h"
#include <iostream>
using namespace std;

DayAppointments::DayAppointments()
{

}

DayAppointments::DayAppointments(int n,string d, Appointment *arr,DayAppointments& t )
{
    t.numOfAppointments=n;
    t.weekDay=d;
    t.appointments =new Appointment[n];
    for(int i=0; i<n; i++)
    {
        t.appointments[i]=arr[i];
    }
}
//*******************************************************************
ostream& operator<< (ostream& out,DayAppointments t)
{
    out<<endl;
    out<<"In day "<<t.weekDay<<" You have "<<t.numOfAppointments<<" which is ";
    for(int i=0; i<t.numOfAppointments; i++)
    {
        out<<endl;
        out<<t.appointments[i];
    }
    return out;
}


istream& operator>> (istream& in, DayAppointments &t)
{
    int n;
    string d;
    Appointment *arr;
    cout<<"Enter your day: ";
    cin>>d;
    cout<<"Enter your number:";
    cin>>n;
    arr=new Appointment[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    DayAppointments(n,d,arr,t);
}
//*************************************************************

DayAppointments DayAppointments:: operator =(DayAppointments x)
{
    this->numOfAppointments=x.numOfAppointments;
    this->weekDay=x.weekDay;
    this->appointments =new Appointment[x.numOfAppointments];
    for(int i=0; i<x.numOfAppointments; i++)
    {
        this->appointments[i]=x.appointments[i];
    }
}

bool DayAppointments:: operator ==(DayAppointments x)
{

    if(this->numOfAppointments==x.numOfAppointments)
    {
        if(this->weekDay==x.weekDay)
        {
            for(int i=0; i<x.numOfAppointments; i++)
            {
                if(this->appointments[i]==x.appointments[i])
                {

                }
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
}


bool DayAppointments:: operator !=(DayAppointments x)
{

    if(this->numOfAppointments==x.numOfAppointments)
    {
        if(this->weekDay==x.weekDay)
        {
            for(int i=0; i<x.numOfAppointments; i++)
            {
                if(this->appointments[i]!=x.appointments[i])
                {

                }
            }
        }
        else
        {
            cout<<"True"<<endl;
        }
    }
    else
    {
        cout<<"True"<<endl;
    }
}

DayAppointments DayAppointments:: operator [](int index)
{
    cout<<this->appointments[index];
}







