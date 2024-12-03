#include <iostream>
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
	if (x > x1 and x < x2 and y > y1 and y < y2){
		return true;
	}else{
		return false;
	}
}

int main(){

	class box box(1,1,5,5);

	cout << box.findPoint(2,4) << endl;

	return 0;
}