#include <iostream>
#include<math.h>

using namespace std;

class point{
    private:
    int x,y;
    public:
    point(int a,int b){
        x = a;
        y = b;
    }
    friend int dist(point p1,point p2);
    void printnum(){
        cout<<"Your number is "<<x<<" + "<<y<<"i"<<endl;
    }
};

int dist(point p1,point p2){
    int distance = sqrt(pow((p1.x-p2.x),2)+pow((p1.y-p2.y),2));
    return distance;
}

int main()
{
    point p1(97,69),p2(56,87);
    p1.printnum();
    p2.printnum();
    cout<<"Distance between the points is: "<<dist(p1,p2)<<endl;
    return 0;
}
