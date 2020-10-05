#ifndef SORDLLIST_H
#define SORDLLIST_H

#include "DLList.h"

#include <iostream>

#define COUT std::cout
#define ENDL std::endl

template<class T>
class SorDLList : public DLList<T> {

    private:

    public:

        SorDLList<T>() : DLList<T>() {};

        SorDLList<T>(const DLList<T>& copy) : DLList<T>(copy) {};

        virtual ~SorDLList<T>() {}

        void Insert (T element) {
		    typename DLList<T>::node* temp = new typename DLList<T>::node(element);
            
		    if (this->IsEmpty()) {
			    this->head = temp;
			    this->tail = temp;
		    }
		    else {
			    typename DLList<T>::node* prev =  NULL;
			    typename DLList<T>::node* curr = this->head;
                
			    /* traverse the list until the end */
			    while (curr != NULL && curr->data <= temp->data) {
				    prev = curr;
				    curr = curr->next;
			    }
		        
                if (prev == NULL) {
                    temp->next = this->head;
                    this->head = temp;
                }
                else if (curr == NULL) {
                    prev->next = temp;
			        this->tail = prev->next;
                }
                else {
                    temp->next = curr;
                    prev->next = temp;
                    prev->next->prev = prev;
                }
                
		   }
		}

        friend std::ostream& operator<<(std::ostream& output, const SorDLList<T>& theList) {
            typename DLList<T>::node* curr;
            if (theList.IsEmpty()) {
                output << "The list is empty" << std::endl;;
            }
            else {
                /* set the current pointer to the first
                ** node of the list */
                curr = theList.head;

                /* Until the end of the list */
                while (curr != NULL)
                {
                    /* print the current data item */
                    output << curr->data << ENDL;

                    /* move to the next node */
                    curr = curr -> next;
                }
            } 

            return output;
		}
		
};

#endif