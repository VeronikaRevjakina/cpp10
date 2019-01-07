#include <iostream>

 //dont know if i can use float ?
template <typename T>
class Coordinates {
public:

	T x;
	T y;

	Coordinates(T obj_x, T obj_y) : x(obj_x), y(obj_y) {};
};

//rotate around (0,0) point

//counterclock-wise (-y,x), angle>0
template <typename T>
Coordinates<T> rotate90CCW(Coordinates<T>& geom_vec, int n){
	for (int i = 0; i < n; i++){//n-number of rotations angle=n*90
		T temp = geom_vec.x;
		geom_vec.x = -geom_vec.y;
		geom_vec.y = temp;
	}
	return geom_vec;
}


//clockwise (y,-x), angle<0
template <typename T>
Coordinates<T> rotate90CW(Coordinates<T>& geom_vec, int n){
	for (int i = 0; i < n; i++){//n-number of rotations angle=n*90
		T temp = geom_vec.x;
		geom_vec.x = geom_vec.y;
		geom_vec.y = -temp;
	}
	return geom_vec;
}

template <typename T>
bool rotate90(Coordinates<T>& geom_vec, int angle){
	if (angle % 90>0) //not multiply to 90
		return false;

	int n = angle / 90;
	if (n>0)
		rotate90CCW(geom_vec, n);
	else
		rotate90CW(geom_vec, -n);

	return true;
}
