#include <iostream>
#include <ctime>
using namespace std;


class point

{

private:

    int x;

    int y;

    int xValue;

    int yValue;

public:

    point Center(point* C, int n)
    {
        point A;
        for (int i = 0; i < n; i++)
        {
            A = *(C + i);
            xValue += A.getX();
            yValue += A.getY();
        }
        A.setX(xValue / n);
        A.setY(yValue / n);
        return A;
    }


    point() {};

    void getClose(point* A, point* B, int n, point p)
    {
        point a = Center(A, n);
        point b = Center(B, n);

        float dA = getDistance(p);
        float dB = getDistance(p);

        if (dA < dB)
            cout << "P is closer to Cluster A" << endl;
        else if (dB < dA)
            cout << "P is closer to Cluster B" <<endl;
        else
            cout << "P is of equal distance to both points" << endl;
    }


    void setX(int x1) {

        x = x1;
        xValue += x;

    }

    void setY(int y1) {

        y = y1;
        yValue += y;

    }

    float getX() {
        return x;
    }

    float getY() {
        return y;
    }

    Point(int x1 = 0, int y1 = 0)

    {

        x = xIn;

        y = yIn;

        xValue = 0;

        yValue = 0;

    }

    float getDistance(Point p)

    {

        return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2));

    }

    void printDistance()

    {
        cout << x << " " << y << endl;

    }

};





int main()
{
    int n = 30; 
    srand(time(0));

    point* a;
    a = new point[n];
    point *b;
    b = new point[n];
 
   
    point t; 
    for (int i = 0; i < n; i++) 
    {
        x.setX(rand() % 30 + 50);
        x.setY(rand() % 30 + 50);
        *(A + i) = x; 
        x.setX(rand() % 30 + 50);
        x.setY(rand() % 30 + 50);
        *(B + i) = x; 
    }

    point* c; 
    int z = 30; 
    p = new point[m]; 

    for (int i = 0; i < m; i++) 
    {
        x.setX(rand() % 30 + 50); 
        x.setY(rand() % 30 + 50); 
        c[i+1] = t; 
    }

    for (int i = 0; i < m; i++)
    {
        cout << "Point C: ";
        p[i+1].display(); 
        getClose(a, b, n, t); 
    }
}