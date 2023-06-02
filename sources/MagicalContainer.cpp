#include "MagicalContainer.hpp"
#include <iostream>
#include <vector>
using namespace ariel;

bool MagicalContainer::isPrime(int element){
    if(element <=1 ){
        return false;
    }
    for(int i=0; i< element; i++){
        if(element % 2 == 0){
            return false;
        }
    }
    return true;
}

MagicalContainer::MagicalContainer(){}

void MagicalContainer::removeElement(int element){
    this->theContainer.pop_back();
}

MagicalContainer::BaseIterator::BaseIterator(){ }

MagicalContainer::BaseIterator::BaseIterator(MagicalContainer *container, size_t position){  }
