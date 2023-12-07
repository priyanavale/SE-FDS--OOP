#include<iostream>
using namespace std;
class complex
{
private:
double r,i;
public:
complex(){}
complex(double a,double b)
{
r=a;
i=b;
}
complex operator +(const complex&c)
{
double sumr,sumi;
sumr=r+c.r;
sumi=i+c.i;
return (complex(sumr,sumi));
}
complex operator *(const complex &c)
{
double muli,mulr;
mulr=(r*c.r)-(i*c.i);
muli=(r*c.i)-(i*c.r);
return complex (mulr,muli);
}
friend ostream & operator<<(ostream &os,complex &complex)
{
os<<complex.r;
if (complex.r>=0)
os<<"+";
os<<complex.i<<"i";
return os;
}
friend istream & operator>>(istream &is,complex &complex)
{
cout<<"real part :"<<endl;
is>>complex.r;
cout<<"imaginary part : "<<endl;
is>>complex.i;
return is;
}
};	//end of the class

int main()
{
complex c1,c2;
cin>>c1;
cout<<endl;
cin>>c2;
complex sum=c1+c2;
complex product=c1*c2;
cout<<"addition is:"<<endl;
cout<<sum<<endl;
cout<<"multiplication is :"<<endl;
cout<<product<<endl;
return 0;
}


