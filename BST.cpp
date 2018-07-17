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
