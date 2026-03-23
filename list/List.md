A list is similar to a vector in that it can store multiple elements of the same type and dynamically grow in size.
However, two major differences between lists and vectors are:

-You can add and remove elements from both the beginning and at the end of a list, while vectors are generally optimized for adding and removing at the end.

-Unlike vectors, a list does not support random access, meaning you cannot directly jump to a specific index, or access elements by index numbers.

## List
list<string> list ={"example1", " example2" };
```md
## Element access
1.	front() – Returns a reference to the first element in the List
2.	back() – Returns a reference to the last element in the List
```
## Iterators
```md
begin() – Returns an iterator pointing to the first element in the list
end() – Returns an iterator pointing to the theoretical element that follows the last element in the list
rbegin() – Returns a reverse iterator pointing to the last element in the list (reverse beginning). It moves from last to first element
rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the list (considered as reverse end). إرجاع مكرر عكسي يشير إلى العنصر النظري الذي يسبق العنصر الأول في المتجه (يُعتبر نهاية عكسية)
cbegin() – Returns a constant iterator pointing to the first element in the list.
cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the list.
crbegin() – Returns a constant reverse iterator pointing to the last element in the list (reverse beginning). It moves from last to first element
crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the list or (considered as reverse end)
reverse()	Reverses the order of the elements.
```
##
```md
## Capacity
```md
1.	size() – Returns the number of elements in the vector.
2.	max_size() – Returns the maximum number of elements that the vector can hold
3.	empty() – Returns whether the container is empty.
```

## Modifiers
```md
1.	assign() – It assigns new value to the vector elements by replacing old ones
2.	push_back() – It push the elements into a vector from the back
3.  push_front() 
3.	pop_back() – It is used to pop or remove elements from a vector from the back.
4.  pop_front()
4.	insert() – It inserts new elements before the element at the specified position
5.	erase() – It is used to remove elements from a container from the specified position or range.
6.	swap() – It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
7.	clear() – It is used to remove all the elements of the vector container
8.	emplace() – It extends the container by inserting new element at position
9.	emplace_back() – It is used to insert a new element into the vector container, the new element is added to the end of the vector
10. unique() - Removes consecutive duplicate elements.
11. sort() - Sorts the list elements in a particular order.
12 - merge() - Merges two sorted lists.
```
