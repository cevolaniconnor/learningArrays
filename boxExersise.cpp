#include <iostream>
#include <vector>
#include <utility> 
using namespace std;

//goal create a box and see if the coordinate input will fit in the box
//return true or false

//define box
class box{
public:
	int x1, y1, x2, y2;
	bool findPoint(int x, int y);

	box (int bottomLeftX, int bottomLeftY, int topRightX, int topRightY){
		x1 = bottomLeftX;
		y1 = bottomLeftY;
		x2 = topRightX;
		y2 = topRightY;

	}
};

//function to see if given point is in the box
bool box::findPoint(int x, int y){
	if (x >= x1 and x <= x2 and y >= y1 and y <= y2){
		return true;
	}else{
		return false;
	}
}

int main(){

	class box b(1,1,5,5);

	std::vector<std::pair<int, int> > points;

    points.push_back(std::make_pair(2, 4));
    points.push_back(std::make_pair(5, 6));
    points.push_back(std::make_pair(6, 6));
    points.push_back(std::make_pair(4, 5));
    points.push_back(std::make_pair(7, 1));
    points.push_back(std::make_pair(2, 2));

    for(pair<int, int> pair : points){
    	cout << b.findPoint(pair.first, pair.second) <<endl;
    }


	return 0;
}