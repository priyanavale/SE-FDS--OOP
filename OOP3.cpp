#include<iostream>
using namespace std;

class p1
{
private:
string title;
float price;
public:
void add()
{
cout<<"\nenter the title of the book = ";
cin>>title;
cout<<"\n enter the price of the book = ";
cin>>price;
}
void display()
{
cout<<"\ntitle= "<<title;
cout<<"\nprice= "<<price;
}
};	//end of class p1

class p2:public p1
{
private:
int page_count;
public:
void add()
{
cout<<"\nenter the page count = ";
cin>>page_count;
try
{
if(page_count<=0)
{
throw page_count;
}
}
catch(...)
{
cout<<"\nerror invalid page count"<<endl;
page_count=0;
}
}
void display()
{
cout<<"\nno. of pages in book is:"<<page_count<<endl;
}
};	//end of p2 class

class p3:public p1
{
private:
int audio_tape;
public:
void add()
{
cout<<"enter the audio count=";
cin>>audio_tape;
try
{
if(audio_tape<=0)
{
throw audio_tape;
}
}
catch(...)
{
cout<<"error invalid audio tape\n";
audio_tape=0;
}
}
void display()
{
    cout<<"the audio tape is a "<<audio_tape<<endl;
}

};	//end of the class p3

int main()
{
p1 p;
p2 b;
p3 c;
int ch;
int i=0;
do {
cout<<"\n1. enter the book entry:"<<endl;
cout<<"2.enter the page no:"<<endl;
cout<<"3.enter the audio time: "<<endl;
cout<<"4.display the book details: "<<endl;
cout<<"5.exit"<<endl;
cout<<"\n enter your choice:"<<endl;
cin>>ch;
switch(ch)
{
case 1:p.p1::add();
break;
case 2:b.p2::add();
break;
case 3:c.p3::add();
break;
case 4:p.p1::display();
b.p2::display();
c.p3::display();
break;
default:cout<<"	-----wrong choice entered-------"<<endl;
}
}while(ch!=5);
return 0;
}