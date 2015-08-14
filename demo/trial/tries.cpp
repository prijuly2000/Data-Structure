#include<iostream.h>
class square
{
public:
double side1;
double area()
{
return(side1*side1);
}
};

int main(){
double area1=0;
square c1,c2;
cout << "Enter the length of the square" << endl;
cin >> c1.side;
cout << "The area of the square is : " << c1.area1() << endl;
return(0);
}