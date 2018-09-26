# Arduino-Containers

## Description:
A collection of C++ object containers for Arduino avr programming. 
For those familiar with the Aruino IDE, so too is the lack of standard object containers in the basic package. To fix this, here's a collection of basic object containers created by yours truly, based on the functionality of the C++ standard object containers.

I'm updating this sporadically as I create new container types.

## Current State:

Currently, there are two containers supported by the collection:

### Vector
The equivalent of `std::vector` in the C++ std library. 
  - Allocates data in a contiguous chunk in heap memory.
  - Doubles in size when the capacity is reached.
  - Able to shrink the capacity to fit the current size.
  - `O(n)` search time.

### BST (Binary Search Tree) ###
The equivalent of `std::vector` with an `O(log(n))` search time.
 - Allocates data in nodes connected in a binary search tree model on the heap.
 - Non-contiguous allocation.
 - `O(log(n))` search/fetch time.
