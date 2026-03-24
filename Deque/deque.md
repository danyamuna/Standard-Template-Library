```md
-A deque (stands for double-ended queue) however, is more flexible,
as elements can be added and removed from both ends (at the front and the back).
-You can also access elements by index numbers.
-Double ended queues are sequence containers with the feature of expansion and contraction on both the ends.
-The functions for deque are same as vector, with an addition of push and pop operations for both front and back
```

## Iterator
```md
•	deque::begin() function is used to return an iterator pointing to the first element of the deque container.
•	deque::end() function is used to return an iterator pointing to the last element of the deque container.
•	deque rbegin()  Returns a reverse iterator which points to the last element of the deque (i.e., its reverse beginning).
•	deque rend() : Returns a reverse iterator which points to the position before the beginning of the deque (which is considered its reverse end).
•	deque cbegin() in C++ STL: Returns a constant iterator pointing to the first element of the container, that is, the iterator cannot be used to modify, only traverse the deque.
```
## Modifier
```md
•	deque::push_front() in C++ STL: This function is used to push elements into a deque from the front.
•	deque::push_back() in C++ STL: This function is used to push elements into a deque from the back.
•	deque::pop_front()  function is used to pop or remove elements from a deque from the front.
•	deque::pop_back() function is used to pop or remove elements from a deque from the back.


•	deque::clear() function is used to remove all the elements of the deque container, thus making its size 0.
•	deque::erase() function is used to remove elements from a container from the specified position or range.

•	deque::emplace_front() afunction is used to insert a new element into the deque container. The new element is added to the beginning of the deque.
•	deque::emplace_back() function is used to insert a new element into the deque container. The new element is added to the end of the deque.

•	swap() function is used to swap the contents of one deque with another deque of same type and size.
•	deque assign() function in C++ STL: Assign values to the same or different deque container.

```
## Element access
```md
•	deque insert() :Inserts an element. And returns an iterator that points to the first of the newly inserted elements.
•	deque::at()  function is used reference the element present at the position given as the parameter to the function.
•	deque::operator= and deque::operator[] in C++ STL:
operator= operator is used to assign new contents to the container by replacing the existing contents. operator[] operator is used to reference the element present at position given inside the operator.
•	deque::front() unction is used to reference the first element of the deque container.
•	deque::back() function is used to reference the last element of the deque container.
```
## Capaity
```md
•	deque::empty() function is used to check if the deque container is empty or not.
•	deque::size() function is used to return the size of the deque container or the number of elements in the deque container.
•	deque resize() function in C++ STL: Function which changes the size of the deque.
•	deque max_size() function in C++ STL: Returns the maximum number of elements that a deque container can hold.
```
