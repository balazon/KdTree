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
	std::vector<Point> c = {{400.f, 650.f, 1}, {550.f, 850.f, 2}, {700.f, 250.f, 3}, {350.f, 400.f, 4}, {1000.f, 560.f, 5}, {970.f, 120.f, 6}, {240.f, 200.f, 7}, {1200.f, 500.f, 8}};
	//printList(c);
	
	
	
	/*KdTree kd;
	kd.build(c);
	
	kd.updateNeighbours();
	*/
	
	
	std::cout << "\n\nKd Tree : \npoints:\n";
	std::vector<Point> d = {{250.f, 125.f, 1}, {350.f, 475.f, 2}, {570.f, 300.f, 3}, {470.f, 180.f, 4}, {800.f, 600.f, 5},
							{360.f, 625.f, 6}, {225.f, 360.f, 7}, {825.f, 290.f, 8}, {630.f, 490.f, 9}, {450.f, 375.f, 10},
							{750.f, 115.f, 11}, {990.f, 195.f, 12}, {595.f, 110.f, 13}, {315.f, 250.f, 14}, {190.f, 540.f, 15},
							{550.f, 675.f, 16}, {575.f, 480.f, 17}, {725.f, 370.f, 18}, {970.f, 460.f, 19}, {860.f, 510.f, 20},
							{710.f, 325.f, 21}};
	printList(d);
	
	//std::cout << "\n median: " << median(c, PointByX{}) << "\n";
	
	KdTree kd2;
	kd2.build(d);
	
	kd2.updateNeighbours();
	
}
