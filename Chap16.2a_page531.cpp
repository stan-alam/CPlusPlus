#include <iostream>
#include <math.h>
using namespace std;

class point {

public: int xstartpoint, ystartpoint;
int xendpoint, yendpoint;
void setpoints( int x1, int x2, int y1, int y2){
  xstartpoint = x1, xendpoint = x2;
  ystartpoint = y1, yendpoint = y2;
}
double distance() {
  return sqrt((pow(xendpoint-xstartpoint,2))+(pow(yendpoint-ystartpoint,2)));
   }
  }; // end of point

class circle : public point {
  public: double radius;

  double area() {

        radius = distance();
        return radius * radius * 3.14;

};


};

int main() {

    int x1coord = 2, y1coord = 12, x2coord = 6, y2coord = 15;
    circle mycircle;
    mycircle.setpoints(x1coord,x2coord,y1coord,y2coord);
    cout << "Circle area is" << mycircle.area() << endl;

}

