#include "time.h"
#include "appointment.h"
#include "dayappointments.h"
#include "calendar.h"
#include <iostream>
using namespace std;

Appointment::Appointment()
{

}

Appointment::Appointment(int h,int m,string dn,int h1,int m1 ,string dn1,Appointment &t)
{
    t.start.hour=h;
    t.start.minute=m;
    t.start.daynight=dn;
    t.end.hour=h1;
    t.end.minute=m1;
    t.end.daynight=dn1;
}
//*************************************************************************
ostream& operator<< (ostream& out,Appointment t)
{
    out<<endl;
    cout<<"Your start is ";
    out << t.start.hour << " : "<< t.start.minute << " " << t.start.daynight <<endl;
    cout<<"Your end is ";
    out << t.end.hour << " : "<< t.end.minute << " " << t.end.daynight;
    return out;
}

istream& operator>> (istream& in, Appointment &t)
{
    int h,m,h1,m1;
    string dn,dn1;
    cout<<"     Start."<<endl;
    cout<<"Enter your Hour:";
    cin>>h;
    cout<<"Enter your Minute:";
    cin>>m;
    cout<<"Enter your Day/Night:";
    cin>>dn;
    cout<<"     End."<<endl;
    cout<<"Enter your Hour:";
    cin>>h1;
    cout<<"Enter your Minute:";
    cin>>m1;
    cout<<"Enter your Day/Night:";
    cin>>dn1;
    Appointment(h,m,dn,h1,m1,dn1,t);
}
//*************************************************************************
Appointment Appointment :: operator <=(Appointment x)
{
    if(this->start.daynight=="am" && x.start.daynight=="pm")
    {
        cout<<"start true"<<endl;
    }
    else if (this->start.hour<=x.start.hour)
    {
        if(this->start.minute<=x.start.minute)
        {
            if((this->start.daynight=="am" && x.start.daynight=="pm") || (this->start.daynight=="am" && x.start.daynight=="am") || (this->start.daynight=="pm" && x.start.daynight=="pm") )
            {
                cout<<"start true"<<endl;
            }
            else
            {
                cout<<"start false"<<endl;
            }

        }
        else
        {
            cout<<"start false"<<endl;
        }
    }
    else
    {
        cout<<"start false"<<endl;
    }
//***********
    if(this->end.daynight=="am" && x.end.daynight=="pm")
    {
        cout<<"end true"<<endl;
    }
    else if (this->end.hour<=x.end.hour)
    {
        if(this->end.minute<=x.end.minute)
        {
            if((this->start.daynight=="am" && x.start.daynight=="pm") || (this->start.daynight=="am" && x.start.daynight=="am") || (this->start.daynight=="pm" && x.start.daynight=="pm"))
            {
                cout<<"end true"<<endl;
            }

            else
            {
                cout<<"end false"<<endl;
            }
        }
        else
        {
            cout<<"end false"<<endl;
        }
    }
    else
    {
        cout<<"end false"<<endl;
    }
    return x;
}

Appointment Appointment :: operator >=(Appointment x)
{
    if(this->start.daynight=="am" && x.start.daynight=="pm")
    {
        cout<<"start true"<<endl;
    }
    else if (this->start.hour>=x.start.hour)
    {
        if(this->start.minute>=x.start.minute)
        {
            if((this->start.daynight=="am" && x.start.daynight=="pm") || (this->start.daynight=="am" && x.start.daynight=="am") || (this->start.daynight=="pm" && x.start.daynight=="pm") )
            {
                cout<<"start true"<<endl;
            }
            else
            {
                cout<<"start false"<<endl;
            }

        }
        else
        {
            cout<<"start false"<<endl;
        }
    }
    else
    {
        cout<<"start false"<<endl;
    }
//***********
    if(this->end.daynight=="am" && x.end.daynight=="pm")
    {
        cout<<"end true"<<endl;
    }
    else if (this->end.hour>=x.end.hour)
    {
        if(this->end.minute>=x.end.minute)
        {
            if((this->start.daynight=="am" && x.start.daynight=="pm") || (this->start.daynight=="am" && x.start.daynight=="am") || (this->start.daynight=="pm" && x.start.daynight=="pm"))
            {
                cout<<"end true"<<endl;
            }

            else
            {
                cout<<"end false"<<endl;
            }
        }
        else
        {
            cout<<"end false"<<endl;
        }
    }
    else
    {
        cout<<"end false"<<endl;
    }
    return x;
}

Appointment Appointment :: operator <(Appointment x)
{
    if(this->start.daynight=="am" && x.start.daynight=="pm")
    {
        cout<<"start true"<<endl;
    }
    else if (this->start.hour<=x.start.hour)
    {
        if(this->start.minute<x.start.minute)
        {
            cout<<"start true"<<endl;
        }
        else
        {
            cout<<"start false"<<endl;
        }
    }
    else
    {
        cout<<"start false"<<endl;
    }
//***********
    if(this->end.daynight=="am" && x.end.daynight=="pm")
    {
        cout<<"end true"<<endl;
    }
    else if (this->end.hour<=x.end.hour)
    {
        if(this->end.minute<x.end.minute)
        {
            cout<<"end true"<<endl;
        }
        else
        {
            cout<<"end false"<<endl;
        }
    }
    else
    {
        cout<<"end false"<<endl;
    }
    return x;
}

Appointment Appointment :: operator >(Appointment x)
{
    if(this->start.daynight=="am" && x.start.daynight=="pm")
    {
        cout<<"start true"<<endl;
    }
    else if (this->start.hour>=x.start.hour)
    {
        if(this->start.minute>x.start.minute)
        {
            cout<<"start true"<<endl;
        }
        else
        {
            cout<<"start false"<<endl;
        }
    }
    else
    {
        cout<<"start false"<<endl;
    }
//***********
    if(this->end.daynight=="am" && x.end.daynight=="pm")
    {
        cout<<"end true"<<endl;
    }
    else if (this->end.hour>=x.end.hour)
    {
        if(this->end.minute>x.end.minute)
        {
            cout<<"end true"<<endl;
        }
        else
        {
            cout<<"end false"<<endl;
        }
    }
    else
    {
        cout<<"end false"<<endl;
    }
    return x;
}

bool Appointment ::operator ==(Appointment x)
{
    if((this->start.hour==x.start.hour)&&(this->end.hour==x.end.hour) )
    {
        if((this->start.minute==x.start.minute)&&(this->end.minute==x.end.minute))
        {
            if((this->start.daynight==x.start.daynight)&&(this->end.daynight==x.end.daynight))
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
}

bool Appointment ::operator !=(Appointment x)
{
    if((this->start.hour==x.start.hour)&&(this->end.hour==x.end.hour))
    {
        if((this->start.minute==x.start.minute)&&(this->end.minute==x.end.minute))
        {
            if((this->start.daynight==x.start.daynight)&&(this->end.daynight==x.end.daynight))
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
}
