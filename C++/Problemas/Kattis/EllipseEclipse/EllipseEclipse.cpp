#include <bits/stdc++.h>

using namespace std;

const double PI = acos(-1.0);

struct pt {
    double x, y;
    pt(double x, double y): x(x), y(y){}
    pt(){}
    double norm2(){return *this**this;}
    double norm(){return sqrt(norm2());}
    pt operator+(pt p){return pt(x+p.x, y+p.y);}
    pt operator-(pt p){return pt(x-p.x, y-p.y);}
    pt operator*(double t){return pt(x*t, y*t);}
    double operator*(pt p){return x*p.x + y*p.y;}
    double angle(pt p){return acos(*this*p/(norm()*p.norm()));}
};

double distance(pt p1, pt p2){
    return (p1 - p2).norm();
}

pt center_point(pt p1, pt p2){
    double x = min(p1.x, p2.x) + (max(p1.x, p2.x) - min(p1.x, p2.x))/2;
    double y = min(p1.y, p2.y) + (max(p1.y, p2.y) - min(p1.y, p2.y))/2;
    pt center = pt(x, y);
    return center;
}

pt vertex(double theta, int r){
   double x = r * cos(theta);
   double y = r * sin(theta);
   return pt(x, y);
}

double round_6(double num){
    return (round(num*1000000)/1000000);
}

int main(){

    double x1, y1, x2, y2, a; cin >> x1 >> y1 >> x2 >> y2 >> a;

    pt F1 = pt(x1, y1);
    pt F2 = pt(x2, y2);

    pt center = center_point(F1, F2);
    double a_2 = a/2;
    double c = distance(center, F1);
    double b = sqrt(pow(a_2, 2) - pow(c, 2));
    double theta = atan2(F2.y - center.y, F2.x - center.x);

    double x_max = center.x + sqrt(pow(a_2, 2) * ((1+cos(2*theta))/2) + pow(b, 2) * ((1-cos(2*theta))/2) );
    double x_min = center.x - sqrt(pow(a_2, 2) * ((1+cos(2*theta))/2) + pow(b, 2) * ((1-cos(2*theta))/2) );
    double y_max = center.y + sqrt(pow(a_2, 2) * ((1-cos(2*theta))/2) + pow(b, 2) * ((1+cos(2*theta))/2) );
    double y_min = center.y - sqrt(pow(a_2, 2) * ((1-cos(2*theta))/2) + pow(b, 2) * ((1+cos(2*theta))/2) );

    cout << round_6(x_min) << " " << round_6(y_min) << endl;
    cout << round_6(x_max) << " " << round_6(y_max) << endl;

}
