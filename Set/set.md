## Set
```md
A set stores unique elements where they:

Are sorted automatically in ascending order.
Are unique, meaning equal or duplicate values are ignored.
Can be added or removed, but the value of an existing element cannot be changed.
Cannot be accessed by index numbers, because the order is based on sorting and not indexing.
```

## Iterator
```md
set::begin() function is used to return an iterator pointing to the first element of the set container. begin() function returns a bidirectional iterator to the first element of the container.
set::end() It returns an iterator pointing to past the last element of the set container. Since it does not refer to a valid element, it cannot de-referenced end() function returns a bidirectional iterator.
set::rbegin() is  which returns a reverse iterator pointing to the last element in the container.
set::rend() in an inbuilt function in C++ STL which returns a reverse iterator pointing
 to the theoretical element right before the first element in the set container.
The set::crbegin() is a built-in function in C++ STL which returns a constant iterator pointing to the last element in the container. The iterator cannot be used to modify the elements in the set container.
 The iterators can be increased or decreased to traverse the set accordingly.
The set::crend() is a built-in function in C++ STL which returns a constant iterator pointing to the position just before the first element in the container. The iterator cannot be used to modify the elements in the set container.
The iterators can be increased or decreased to traverse the set accordingly.
The set::cbegin() is a built-in function in C++ STL which returns a constant iterator pointing to the first element in the container. The iterator cannot be used to modify the elements in the set container.
The iterators can be increased or decreased to traverse the set accordingly.
set::cend() is a built-in function in C++ STL which returns a constant iterator pointing to the position past the last element in the container. The iterator cannot be used to modify the elements in the set container.
The iterators can be increased or decreased to traverse in the set accordingly.
```
## Capacity
```md
size()< function is used to return the size of the set container or the number of elements in the set container.
max_size() is a built-in function in C++ STL which returns the maximum number of elements a set container can hold.
empty() function is used to check if the set container is empty or not.
```
## Modifier
```md
insert is a built-in function in C++ STL which insert elements in the set container or inserts the elements from a position to another position in the set to a different set.
emplace() This function is used to insert a new element into the set container, only if the element to be inserted is unique and does not already exists in the set.
emplace_hint() is a built-in function in C++ STL which inserts a new element in the set. A position is passed in the parameter of the function which acts as a hint from where the searching operation starts before inserting the element at its current position. The position only helps the process to get faster, it does not decide where the new element is to be inserted. The new element is inserted following the property of the set container only.



```
```md
key_comp() is an inbuilt function in C++ STL which returns a copy of the comparison object used by the container.This object determines the order of the elements in the container
value_comp() is an inbuilt function in cpp that returns a copy of the comparison object used by the container.This object determines the order of the elements in the container.  
find() is a built-in function in C++ STL which returns an iterator to the element which is searched in the set container. If the element is not found, then the iterator points to the position just after the last element in the set
find is a built-in function in C++ STL which returns an iterator to the element which is searched in the set container. If the element is not found, then the iterator points to the position just after the last element in the set.
count() is a built-in function in C++ STL which returns the number of times an element occurs in the set. It can only return 1 or 0 as the set container contains unique elements only.
lower_bound() is a built-in function in C++ STL which returns an iterator pointing to the element in the container which is equivalent to k passed in the parameter. In case k is not present in the set container, the function returns an iterator pointing to the immediate next element which is just greater than k. If the key passed in the parameter exceeds the maximum value in the container, then the iterator returned points to the element beyond last element in the set container that is set.end().
upper_bound() is a built-in function in C++ STL which returns an iterator pointing to the immediate next element which is just greater than k. If the key passed in the parameter exceeds the maximum key in the container, then the iterator returned points to next of last element (which can be identified using set end() function) in the set container.
equal_range() is a built-in function in C++ STL which returns an iterator of pairs. The pair refers to the range that includes all the elements in the container which have a key equivalent to k
```
