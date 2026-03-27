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
