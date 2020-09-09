#include "../include/MergeInt.h"


void test1() {
  	COUT << "-------------------------" << ENDL;
  	COUT << "Test 1: " << ENDL;
  	VECTOR< VECTOR<int> > v1 = {{1,3}, {2,6}, {8,10}, {15,18}};
  	COUT << "Input: " << ENDL;
  	print2DVector(v1);
  	COUT << ENDL << "Solution: " << ENDL;
  	print2DVector(merge(v1));
}


void test2() {
  	COUT << "-------------------------" << ENDL;
  	COUT << "Test 2: " << ENDL;
  	VECTOR< VECTOR<int> > v2 = {{1,4}, {4,5}};
  	COUT << "Input: " << ENDL;
  	print2DVector(v2);
  	COUT << ENDL << "Solution: " << ENDL;
  	print2DVector(merge(v2));
}


void test3() {
  	COUT << "-------------------------" << ENDL;
  	COUT << "Test 3: " << ENDL;
  	VECTOR< VECTOR<int> > v3 = {{-1,3}, {-2,6}, {8,10}, {15,18}};
  	COUT << "Input: " << ENDL;
  	print2DVector(v3);
  	COUT << ENDL << "Solution: " << ENDL;
  	print2DVector(merge(v3));
}


void test4() {
  	COUT << "-------------------------" << ENDL;
  	COUT << "Test 4: " << ENDL;
  	VECTOR< VECTOR<int> > v4 = {{6,10}, {1,5}, {4,7}};
  	COUT << "Input: " << ENDL;
  	print2DVector(v4);
  	COUT << ENDL << "Solution: " << ENDL;
  	print2DVector(merge(v4));
}

int main(){
	test1();
	test2();
  test3();
  test4();

	return 0;
}
