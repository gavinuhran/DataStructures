#ifndef PRIORITY_H
#define PRIORITY_H

#include <iostream>
#include <string>

template<class T>
class Priority {

    protected:
        T data;
        unsigned int priority;

    public:
        Priority() : data(), priority() {}

        Priority(const T dataIn, unsigned int pIn) : data(dataIn), priority(pIn) {}

        ~Priority() {}

        Priority<T>& operator=(const Priority<T> rhs) {
			return *this;
        }

        bool operator>(const Priority<T> rhs) {
			return this->priority > rhs.priority;
        }

        bool operator>=(const Priority<T> rhs) {
			return this->priority >= rhs.priority;
        }

        bool operator<(const Priority<T> rhs) {
			return this->priority < rhs.priority;
        }

        bool operator<=(const Priority<T> rhs) {
			return this->priority <= rhs.priority;
        }

        bool operator==(const Priority<T> rhs) {
			return this->priority == rhs.priority;
        }

        friend std::ostream& operator<<(std::ostream& output, const Priority<T>& p) {
            output << "{" << p.data << ", " << p.priority << "}";
            return output;
        }

};

#endif