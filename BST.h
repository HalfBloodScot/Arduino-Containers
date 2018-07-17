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
    const T& get(const T& obj) const;
    T& set(const T& obj);
};

#endif //BST_H_INCLUDED
