#include <vector>

namespace ariel{
    class MagicalContainer{
        private:
            std::vector<int> TheContainer;

            std::vector<int*> PrimeIterPoints;

            std::vector<int*> AscendingIterPoints;

            std::vector<int*> CrossIterPoints;



        public:
            MagicalContainer(); //the constructor
            /*
            functions for the "Implement necessary methods for adding elements, 
            removing elements, and retrieving the size of the container".
            */
            void addElement(int element)const;
            void removeElement(int element)const;
            int size() const;






    };
}