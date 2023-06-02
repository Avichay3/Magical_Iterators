#include <vector>
#include <iostream>

namespace ariel{
    class MagicalContainer{
        private:
        /*
        The private vector to:
        "Create three custom iterator classes named "AscendingIterator", "SideCrossIterator", and "PrimeIterator"
        that will allow traversal of elements in the MagicalContainer class in ascending order, 
        cross order, and prime numbers only, respectively."
        */
            std::vector<int> theContainer;

            
        public:
            MagicalContainer(); //the constructor
            /*
            functions for the "Implement necessary methods for adding elements, 
            removing elements, and retrieving the size of the container".
            */
            void addElement(int element){ //inline implenetation
                this->theContainer.push_back(element);
            }

            void removeElement(int element);

            int size(){ this->theContainer.size(); } //inline implenetation
            


         class BaseIterator { // Abstract class that defines the common interface for all iterators
                protected: //for it can be accessed from the derived classes
                    const MagicalContainer& container; //reference to object
                    std::size_t position; //current position

                public:
                    BaseIterator() = default; // default constructor
                    BaseIterator(const MagicalContainer& container, size_t position); // constructor
                    virtual ~BaseIterator();//destructor, virtual for the ability to override it.
                    
                    // operators overloading
                    bool operator==(const BaseIterator& other) const; //compare iterators for equality and inequality.
                    bool operator!=(const BaseIterator& other) const; //compare iterators for equality and inequality.
                    bool operator<(const BaseIterator& other) const; //compare iterators based on their positions.
                    bool operator>(const BaseIterator& other) const; //compare iterators based on their positions.
                    
                    void operator*();
                    BaseIterator& operator++(); // pre-increment operator

         };

        /*
        inherited class, have access to all protected && public of the BaseIterator class
        */
         class AscendingIterator : public BaseIterator{
            public:
                AscendingIterator() = default;
                AscendingIterator(const MagicalContainer &ascending);
                ~AscendingIterator(); //destructor

                //operators overloading
                AscendingIterator operator=(const AscendingIterator &other);

                AscendingIterator begin();              
                AscendingIterator end();

         };


        /*
        inherited class, have access to all protected && public of the BaseIterator class
        */
         class PrimeIterator : public BaseIterator{
            public:
                PrimeIterator() = default;
                PrimeIterator(const MagicalContainer &other);
                ~PrimeIterator();//destructor

                //operators overloading
                PrimeIterator operator=(const PrimeIterator &other);


                PrimeIterator begin();
                PrimeIterator end();




         };

    };
}