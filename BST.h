#ifndef BST_H_INCLUDED 
#define BST_H_INCLUDED

template <typename T>
class BST {
protected:
    T value;
    BST* left;
    BST* right;
public:
    bool contains(const T& obj) const;
};

#endif //BST_H_INCLUDED
