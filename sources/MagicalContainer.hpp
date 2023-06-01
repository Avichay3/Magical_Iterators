#include <vector>

namespace ariel{
    class MagicalContainer{
        private:
        /*
        The private vector to:
        "Create three custom iterator classes named "AscendingIterator", "SideCrossIterator", and "PrimeIterator"
        that will allow traversal of elements in the MagicalContainer class in ascending order, 
        cross order, and prime numbers only, respectively."
        */
            std::vector<int> TheContainer;

            
        public:
            MagicalContainer(); //the constructor
            /*
            functions for the "Implement necessary methods for adding elements, 
            removing elements, and retrieving the size of the container".
            */
            void addElement(int element)const;
            void removeElement(int element)const;
            int size() const;


         class BaseIterator { // Abstract class that defines the common interface for all iterators
                protected: //for it can be accessed from the derived classes
                    const MagicalContainer& container; //reference to object
                    size_t position; //current position

                public:
                    BaseIterator(const MagicalContainer& container, size_t position);
                    virtual ~BaseIterator() = default;
                    
                    // operators overloading
                    bool operator>(const BaseIterator& other) const; //compare iterators based on their positions.
                    bool operator<(const BaseIterator& other) const; //compare iterators based on their positions.
                    bool operator==(const BaseIterator& other) const; //compare iterators for equality and inequality.
                    bool operator!=(const BaseIterator& other) const; //compare iterators for equality and inequality.



    };
}