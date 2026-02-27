#include<iostream>
using namespace std;
class candy{
    string color;
    int points;
    public:
    void setcandy(string,int);
    void displaycandy();
};
void candy::setcandy(string c,int p)
{
        color=c;points=p;
}
void candy::displaycandy()
{
        cout<<"\n color : :"<<color;
        cout<<"\n points : "<<points;
}
int main()
{
    candy c1,c2;
    c1.setcandy("Red",35);
    c2.setcandy("blue",40);
    c1.displaycandy();
    return 0;
}
