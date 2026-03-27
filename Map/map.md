**Maps are associative containers that store elements in a mapped fashion. 
Each element has a key value and a mapped value. No two mapped values can have same key values.

// empty map container 
   map<int, int> mymap; 
  

## iterator
```md
begin() – Returns an iterator to the first element in the map.
end() – Returns an iterator to the theoretical element that follows last element in the map.
rbegin() It returns a reverse iterator which points to the last element of the map. The reverse iterator iterates in reverse order and incrementing it means moving towards beginning of map.
rend()  returns a reverse iterator pointing to the theoretical element right before the first key-value pair in the map(which is considered its reverse end).
crbegin() returns a constant reverse iterator referring to the last element in the map container.
crend()  returns a constant reverse iterator pointing to the theoretical element before the first element in the map.
cbegin() returns a constant iterator referring to the first element in the map container.
cend()   returns a constant iterator pointing to the theoretical element that follows last element in the multimap.
```
## Capacity
```md
size()
max_size()
empty()
```
## Modifier
```md
clear()
erase() which is used to erase element from the container. It can be used to erase keys, elements at any specified position or a given range. 
count() returns 1 if the element with key K is present in the map container. It returns 0 if the element with key K is not present in the container.
find() is a built-in function in C++ STL which returns an iterator or a constant iterator that refers to the position where the key is present in the map. If the key is not present in the map container, it returns an iterator or a constant iterator which refers to map.end().
emplace() i which inserts the key and its element in the map container. It effectively increases the container size by one. If the same key is emplaced more than once, the map stores the first element only as the map is a container which does not store multiple keys of the same value.
upper_bound() which returns an iterator pointing to the immediate next element just greater than k. If the key passed in the parameter exceeds the maximum key in the container, then the iterator returned points to the number of elements in the map container as key and element=0.
lower_bound(k) is returns an iterator pointing to the key in the container which is equivalent to k passed in the parameter.
operator= is a built function in C++ STL which assigns contents of a container to a different container, replacing its current content.
operator[] : This operator is used to reference the element present at position given inside the operator. It is similar to the at() function, the only difference is that the at() function throws an out-of-range exception when the position is not in the bounds of the size of map, while this operator causes undefined behaviour
at () : used to store the elements in the form of key-value pair. Internally, the elements in a map are always sorted by its key. Maps are mainly implemented as binary search trees.
map::swap()
swap() function is used to exchange the contents of two maps but the maps must be of same type, although sizes may differ.
