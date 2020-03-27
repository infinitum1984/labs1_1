
#include<iostream>
#include<math.h>
using namespace std;
void count_min_cos1(double start,double end, double step);//передача параметрів за значенням
void count_min_cos2(double &start,double &end, double &step);//передача параметрів за посиланням
void count_min_cos3(double *start,double *end, double *step);//передача параметрів за покажчиком

int main(){
    double startT=1;
    double endT=2;
    double step=0.1;
    cout<<"\t BY VALUE"<<endl;
    count_min_cos1(startT,endT,step);
    cout<<endl;
    cout<<"\t BY LINK"<<endl;
    count_min_cos2(startT,endT,step);
    cout<<endl;
    cout<<"\t BY COUNTER"<<endl;
    count_min_cos3(&startT,&endT,&step);
    cout<<endl;


}
void count_min_cos1(double start,double end, double step){
    double min=cos(start*start);
    for (double parm = start+step; parm < 2; parm+=0.1)
    {   
        double val=cos(parm*parm);
        if (val<min)
        {
            min=val;
        }
        
    }
    cout<<"min value (x=cos(t²)) = "<<min<<endl;
    min=cos(start*start*start);
    for (double parm = start+step; parm < 2; parm+=0.1)
    {   
        double val=cos(parm*parm*parm);
        if (val<min)
        {
            min=val;
        }
        
    }
        cout<<"min value (x=cos(t³)) = "<<min<<endl;
        min=cos(start*start*start*start);
    for (double parm = start+step; parm < 2; parm+=0.1)
    {   
        double val=cos(parm*parm*parm*parm);
        if (val<min)
        {
            min=val;
        }
        
    }
        cout<<"min value (x=cos(t^4)) = "<<min<<endl;


}
void count_min_cos2(double &start,double &end, double &step){
    double min=cos(start*start);
    for (double parm = start+step; parm < 2; parm+=0.1)
    {   
        double val=cos(parm*parm);
        if (val<min)
        {
            min=val;
        }
        
    }
    cout<<"min value (x=cos(t²)) = "<<min<<endl;
    min=cos(start*start*start);
    for (double parm = start+step; parm < 2; parm+=0.1)
    {   
        double val=cos(parm*parm*parm);
        if (val<min)
        {
            min=val;
        }
        
    }
        cout<<"min value (x=cos(t³)) = "<<min<<endl;
        min=cos(start*start*start*start);
    for (double parm = start+step; parm < 2; parm+=0.1)
    {   
        double val=cos(parm*parm*parm*parm);
        if (val<min)
        {
            min=val;
        }
        
    }
        cout<<"min value (x=cos(t^4)) = "<<min<<endl;


}
void count_min_cos3(double *s,double *e, double *st){
    double start = (*s);
    double end= (*e);
    double step =(*st);
    double min=cos(start*start);
    for (double parm = start+step; parm < 2; parm+=0.1)
    {   
        double val=cos(parm*parm);
        if (val<min)
        {
            min=val;
        }
        
    }
    cout<<"min value (x=cos(t²)) = "<<min<<endl;
    min=cos(start*start*start);
    for (double parm = start+step; parm < 2; parm+=0.1)
    {   
        double val=cos(parm*parm*parm);
        if (val<min)
        {
            min=val;
        }
        
    }
        cout<<"min value (x=cos(t³)) = "<<min<<endl;
        min=cos(start*start*start*start);
    for (double parm = start+step; parm < 2; parm+=0.1)
    {   
        double val=cos(parm*parm*parm*parm);
        if (val<min)
        {
            min=val;
        }
        
    }
        cout<<"min value (x=cos(t^4)) = "<<min<<endl;


}
