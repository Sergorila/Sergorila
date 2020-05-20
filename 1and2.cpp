#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

class Point
{
public:
	int x;
	int y;


	Point() {};
	static bool Srav(Point &p1, Point &p2)
	{
		return sqrt(p1.x * p1.x + p1.y * p1.y) < sqrt(p2.x * p2.x + p2.y * p2.y);
	}
	// без функции сравнения	  
	/*friend bool operator> (Point p1 , Point p2)
	{
	return sqrt(p1.x * p1.x + p1.y * p1.y) > sqrt(p2.x * p2.x + p2.y * p2.y);
	}
	friend bool operator< (Point p1 , Point p2)
	{
	return sqrt(p1.x * p1.x + p1.y * p1.y) < sqrt(p2.x * p2.x + p2.y * p2.y);
	}*/


};



int main()
{
	vector<Point> dots;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		Point elem;
		int x, y;
		cin >> x >> y;
		elem.x = x;
		elem.y = y;
		dots.push_back(elem);

	}
	sort(dots.begin(), dots.end(), Point::Srav);
	for (int i = 0; i < n; i++)
	{
		Point p = dots[i];
		cout << p.x << ' ' << p.y << endl;
	}

	return 0;
}
