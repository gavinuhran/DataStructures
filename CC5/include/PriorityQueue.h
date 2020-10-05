#ifndef PRIORITY_QUEUE_H
#define PRIORITY_QUEUE_H

#include "SorDLList.h"
#include "Priority.h"

template<class T>
class PriorityQueue {

	private:

		SorDLList<Priority<T>> list;
        unsigned int max_len;
        unsigned int queueSize;

	public:

		// Default constructor
		PriorityQueue() : list(), max_len(-1), queueSize(0) {}

		// Constructor with limited queue size
		PriorityQueue(unsigned int max) : list(), max_len(max), queueSize(0) {}
		
		void push(T elem, unsigned int priority) {
			if(queueSize < max_len) {
                Priority<T> temp = Priority<T>(elem, priority);
				list.Insert(temp);
				queueSize++;
			}
		}
		
		void pop() {
			if(queueSize > 0){
				list.pop_front();
				queueSize--;
			}
		}

		T front() const{
			return list.front()->data;
		}

		T back() const{
			return list.back()->data;
		}
		
		unsigned int max_size() const{
			return max_len;
		}

		unsigned int size() const{
			return queueSize;
		}

		bool empty() const{
			return queueSize == 0;
		}

        friend std::ostream& operator<<(std::ostream& output, const PriorityQueue<T>& theList) {
            if (theList.empty()) {
                output << "The list is empty" << std::endl;;
            }
            else {
                output << theList.list;
            } 

            return output;
		}
};

#endif
