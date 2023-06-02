#include "MagicalContainer.hpp"

using namespace ariel;


bool MagicalContainer::isPrime(int element){
    return false;
}
int MagicalContainer::contains(int element){
    return 0;
}


MagicalContainer::MagicalContainer(){}
void MagicalContainer::addElement(int element){}
void MagicalContainer::removeElement(int element){}
int MagicalContainer::size(){return 0;}



//Base class iterator        
MagicalContainer::BaseIterator::BaseIterator(){}
MagicalContainer::BaseIterator::BaseIterator(MagicalContainer* container, std::size_t position){}
MagicalContainer::BaseIterator::BaseIterator(const BaseIterator& base_iter){}
MagicalContainer::BaseIterator::~BaseIterator(){}

bool MagicalContainer::BaseIterator::operator>(const BaseIterator &other) const{
    return false;
}
bool MagicalContainer::BaseIterator::operator<(const BaseIterator &other) const{
    return false;
}
bool MagicalContainer::BaseIterator::operator==(const BaseIterator &other) const{
    return false;
}
bool MagicalContainer::BaseIterator::operator!=(const BaseIterator &other) const{
    return false;
}

int MagicalContainer::BaseIterator::operator*(){return 0;}

int* MagicalContainer::BaseIterator::getLocationPtr(){
    return nullptr;
}
void MagicalContainer::BaseIterator::setLocationPtr(int* newlocptr){

}
int MagicalContainer::BaseIterator::getPosition(){
    return 0;
}
void MagicalContainer::BaseIterator::setPosition(int newloc){

}


//AscendingIterator class
MagicalContainer::AscendingIterator::AscendingIterator(){}
MagicalContainer::AscendingIterator::AscendingIterator(const MagicalContainer& magical){}
MagicalContainer::AscendingIterator::AscendingIterator(const AscendingIterator& asci){}
MagicalContainer::AscendingIterator::~AscendingIterator(){}

MagicalContainer::AscendingIterator& MagicalContainer::AscendingIterator::operator=(const AscendingIterator &other){
    return (*this);
}
MagicalContainer::AscendingIterator& MagicalContainer::AscendingIterator::operator++(){
    return (*this);
}

MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::begin(){
    return (*this);
}
MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::end(){
    return (*this);
}


//PrimeIterator class
MagicalContainer::PrimeIterator::PrimeIterator(){}
MagicalContainer::PrimeIterator::PrimeIterator(const MagicalContainer& magical){}
MagicalContainer::PrimeIterator::PrimeIterator(const PrimeIterator& asci){}
MagicalContainer::PrimeIterator::~PrimeIterator(){}

MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::operator=(const PrimeIterator &other){
    return (*this);
}
MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::operator++(){
    return (*this);
}

MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::begin(){
    return (*this);
}
MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::end(){
    return (*this);
}


//SideCrossIterator class
MagicalContainer::SideCrossIterator::SideCrossIterator(){

}
MagicalContainer::SideCrossIterator::SideCrossIterator(const MagicalContainer& magical){

}
MagicalContainer::SideCrossIterator::SideCrossIterator(const SideCrossIterator& base_iter){

}
MagicalContainer::SideCrossIterator::~SideCrossIterator(){

}

MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::operator=(const SideCrossIterator &other){
    return (*this);
}
MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::operator++(){
    return (*this);
}

MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::begin(){
    return (*this);
}
MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::end(){
    return (*this);
}