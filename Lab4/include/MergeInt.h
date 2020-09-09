#include <iostream>
#include <vector>
#include <algorithm>

#define COUT std::cout
#define ENDL std::endl
#define VECTOR std::vector

template< class T >
void print2DVector(const VECTOR<VECTOR<T>>& v) {
    COUT << "[";
    for (long unsigned int iter = 0; iter < v.size(); iter++) {
        COUT << " [ ";
        for (long unsigned int jter = 0; jter < v.at(iter).size(); jter++) {
            COUT << v.at(iter).at(jter) << " ";
	      }
        COUT << "] ";
	  }
    COUT << "]" << ENDL ;
}

bool cmp(VECTOR<int> a, VECTOR<int> b) {
    return a[0]<b[0];
}

int max(int& value1, int& value2) {
    return (value1 > value2) ? value1 : value2;
}

int min(int& value1, int& value2) {
    return (value1 < value2) ? value1 : value2;
}

VECTOR<VECTOR<int>> insert(VECTOR<VECTOR<int>>& intervals, VECTOR<int>& newInterval) {
  	VECTOR <VECTOR<int>> solution;
  	intervals.push_back( newInterval );
  	std::sort(intervals.begin(),intervals.end(), cmp);
  	solution.push_back(intervals[0]);

  	long unsigned int index = 1;
  	while(index < intervals.size()){
    		long unsigned int last = solution.size()-1;
    		if (max(solution[last][0],solution[last][1]) < min(intervals[index][0],intervals[index][1])) {
    		    solution.push_back(intervals[index]);
    		}
    		else {
      			solution[last][0] = min(solution[last][0], intervals[index][0]);
      			solution[last][1] = max(solution[last][1], intervals[index][1]);
    		}
    		index++;
  	}
  	return solution;
}

VECTOR<VECTOR<int>> merge(VECTOR<VECTOR<int>>& intervals) {
    VECTOR <VECTOR<int>> solution;
    for (int i = 0; i < (int)intervals.size(); i++) {
        solution = insert(solution, intervals.at(i));
    }
    return solution;
}
