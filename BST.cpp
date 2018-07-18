#include "BST.h"

bool BST::contains(const T& obj) {
    if (value == obj) {
        return true; 
    }
    if (left && value > obj) {
        return  left->(contains(obj));
    }
    if (right && value < obj) {
        return right->contains(obj)); 
    }
    return false; 
}

const T& BST::get(const T& obj) const {
    return set(obj);
}

T& BST::set(const T& obj) {
    try {
        if (value == obj) {
            return obj; 
        }
        if (left && value > obj) {
            return  left->(get(obj));
        }
        if (right && value < obj) {
            return right->get(obj)); 
        }   
    } 
    catch (...) {
        throw "Null reference exception: Search tree does not contain specified value.\n";
    }
}
