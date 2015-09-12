#include <iostream>
#include "KdTree.h"



int main(int argc, char **argv)
{
	
	
	std::vector<float> a = {5.f, 2.f, 1.f, 8.f, 10.f, 3.f, 4.f, 11.f};
	
	std::string prefix = "";
	for(float x : a)
	{
		std::cout << prefix << x; 
		prefix = ", ";
	}
	std::cout << "\n";
	
	
	std::cout << "\n median: " << median(a) << "\n";
	
	std::vector<int> b = {3,2,7,8,4,1,5,6,15,10,13};
	printList(b);
	
	std::cout << "\n median: " << median(b) << "\n\n";
	printList(b);
	
	std::cout << "Kd Tree : \npoints:\n";
	std::vector<Point> c = {{400.f, 650.f, 1}, {550.f, 850.f, 2}, {700.f, 250.f, 3}, {350.f, 400.f, 4}, {1000.f, 560.f, 5}, {970.f, 120.f, 6}, {240.f, 200.f, 7}};
	printList(c);
	
	//std::cout << "\n median: " << median(c, PointByX{}) << "\n";
	
	KdTree kd;
	kd.build(c);
	
	kd.updateNeighbours();
}
