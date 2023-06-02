#pragma once

#include <vector>

namespace ariel {
    class MagicalContainer{
        private:
        /*
        The private vectors to:
        "Create three custom iterator classes named "AscendingIterator", "SideCrossIterator", and "PrimeIterator"
        that will allow traversal of elements in the MagicalContainer class in ascending order, 
        cross order, and prime numbers only, respectively."
        */
            std::vector<int> TheContainer;
            std::vector<int*> AscendingIter;
            std::vector<int*> PrimeIter;
            std::vector<int*> SideCrossIter;

            bool isPrime(int element);
            int contains(int element);
        

        public:
            MagicalContainer();
            void addElement(int element);
            void removeElement(int element);
            int size();

        


        
        class BaseIterator {
            private:
                MagicalContainer* _container;
                std::size_t _position;

            public:
                BaseIterator();
                BaseIterator(MagicalContainer* container, std::size_t position);
                BaseIterator(const BaseIterator& other);
                ~BaseIterator();


                bool operator==(const BaseIterator& other) const;
                bool operator!=(const BaseIterator& other) const;
                bool operator<(const BaseIterator& other) const;
                bool operator>(const BaseIterator& other) const;
                
                

                int operator*();

                int* getLocationPtr();
                void setLocationPtr(int* newlocptr);
                int getPosition();
                void setPosition(int newloc);

        };


        class AscendingIterator : public BaseIterator {
            public:
                AscendingIterator();
                AscendingIterator(const MagicalContainer& magical);
                AscendingIterator(const AscendingIterator& asci);
                ~AscendingIterator();

                AscendingIterator& operator=(const AscendingIterator& other);

                AscendingIterator& operator++();

                AscendingIterator begin();
                AscendingIterator end();
        };


        class PrimeIterator : public BaseIterator {
            public:
                PrimeIterator();
                PrimeIterator(const MagicalContainer& magical);
                PrimeIterator(const PrimeIterator& asci);
                ~PrimeIterator();

                PrimeIterator& operator=(const PrimeIterator& other);

                PrimeIterator& operator++();

                PrimeIterator begin();
                PrimeIterator end();
        };


        class SideCrossIterator : public BaseIterator {
            public:
                SideCrossIterator();
                SideCrossIterator(const MagicalContainer& magical);
                SideCrossIterator(const SideCrossIterator& base_iter);
                ~SideCrossIterator();

                SideCrossIterator& operator=(const SideCrossIterator& other);

                SideCrossIterator& operator++();

                SideCrossIterator begin();
                SideCrossIterator end();
        };

    };

}


