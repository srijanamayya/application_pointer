#include<iostream>
using namespace std;

class car
{
    private:
    int weight;

    public:
     void setweight(int w)
     {
        weight=w;
     }  

     int getweight()
     {
        return weight;
     }
};

class BMW
{
    private:
     int topspeed;
     car *ptr ;

     public:
      BMW(int wght=0, int tspeed=0)
      {
        ptr= new car;
        ptr->setweight(wght);

        topspeed=tspeed;
      }

      int getweight()
      {
        return ptr->getweight();
      }

      int getspeed()
      {
        return topspeed;
      }

      ~BMW()
      {
        delete ptr;
      }
};

int main()
{
    BMW b(3000, 350);
    cout<<"weight of car= "<<b.getweight()<<endl;
    cout<<"topspeed of car: "<<b.getspeed()<<endl;
    return 0;
}