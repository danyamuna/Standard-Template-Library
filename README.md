## Vector 
```md
std::vector<type_data> typename = { , };
std::vector<int> num = {1,2,3,4,5};
```
## Iterators
1.	begin() – Returns an iterator pointing to the first element in the vector
2.	end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
3.	rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
4.	rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end).
إرجاع مكرر عكسي يشير إلى العنصر النظري الذي يسبق العنصر الأول في المتجه (يُعتبر نهاية عكسية)
5.	cbegin() – Returns a constant iterator pointing to the first element in the vector.
6.	cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
7.	crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
8.	crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)

## Capacity
```md
1.	size() – Returns the number of elements in the vector.
2.	max_size() – Returns the maximum number of elements that the vector can hold.
3.	capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.
4.	resize(n) – Resizes the container so that it contains ‘n’ elements.
5.	empty() – Returns whether the container is empty.
6.	shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
يقلل من سعة الحاوية لتناسب حجمها ويدمر جميع العناصر التي تتجاوز سعتها.
7.	reserve() – Requests that the vector capacity be at least enough to contain n elements.
```

## Element access
```md
1.	reference operator [g] – Returns a reference to the element at position ‘g’ in the vector
2.	at(g) – Returns a reference to the element at position ‘g’ in the vector
3.	front() – Returns a reference to the first element in the vector
4.	back() – Returns a reference to the last element in the vector
5.	data() – Returns a direct pointer to the memory array used internally by the vector to store its owned elements.
يُرجع مؤشرًا مباشرًا إلى مصفوفة الذاكرة المستخدمة داخليًا بواسطة المتجه لتخزين العناصر المملوكة له
```
