#include<iostream>
int using namespace std;
class sum
{
private:
int x,y;
public:
void getdata();
int calculate();
void showdata();
};
void sum::getdata()
{
cout<<"Enter first no:"<<x;
cout<<"Enter second no:"<<y;
}
int sum::calculate()
{
int r;
r=x+y;
return (r);
}
void sum::showdata()
{
int s;
s=calculate();
cout<<"Sum is:"<<s<<endl;
}
int main()
{
sum s1;
s1.getdata();
s1.showddata();
return 0;
}
