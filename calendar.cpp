#include "time.h"
#include "appointment.h"
#include "dayappointments.h"
#include "calendar.h"
#include <iostream>
using namespace std;

Calendar::Calendar()
{

}
Calendar::Calendar(DayAppointments *arr,Calendar& t)
{
    t.sevendays =new DayAppointments[7];
    for(int i=0; i<2; i++)
    {
        t.sevendays[i]=arr[i];
    }
}
//*********************************************************
ostream& operator<< (ostream& out,Calendar t)
{
    out<<endl;
    for(int i=0; i<2; i++)
    {
        out<<endl;
        out<<t.sevendays[i];
    }
    return out;
}


istream& operator>> (istream& in, Calendar &t)
{
    DayAppointments *arr;
    arr=new DayAppointments[7];
    for(int i=0; i<2; i++)
    {
        cin>>arr[i];
    }
    Calendar(arr,t);
}

//*************************************************************
