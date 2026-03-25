## Pair in C++ Standard Template Library (STL)

The pair container is a simple container defined in <utility> header consisting of two data elements or objects. 

•	The first element is referenced as ‘first’ and the second element as ‘second’ and the order is fixed (first, second).

•	Pair is used to combine together two values which may be different in type. 
• Pair provides a way to store two heterogeneous objects as a single unit.
•	Pair can be assigned, copied and compared. The array of objects allocated in a map or hash_map are of type 
 ‘pair’ by default in which all the ‘first’ elements are unique keys associated with their ‘second’ value objects.
 
•	To access the elements, we use variable name followed by dot operator followed by the keyword first or second
```md
Syntax : 
pair (data_type1, data_type2) Pair_name
```
## Member Functions
__make_pair()__
This template function allows to create a value pair without writing the types explicitly. 
__operators(=, ==, !=, >=, <=)__ : 
We can use operators with pairs as well. 
•	**using equal(=)** : It assigns new object for a pair object. 
Syntax :
pair & operator = (const pair& pr);
```md
•	This Assigns pr as the new content for the pair object. 
  The first value is assigned the first value of pr and the second value is assigned the second value of pr .
•	**Comparison (==) operator with pair** : For given two pairs say pair1 and pair2, 
  the comparison operator compares the first value and second value of those two pairs 
  i.e. if pair1.first is equal to pair2.first or not AND if pair1.second is equal to pair2.second or not .
•	**Not equal (!=)** operator with pair : 
  For given two pairs say pair1 and pair2, the != operator compares the first values of those two pairs 
  i.e. if pair1.first is equal to pair2.first or not, if they are equal then it checks the second values of both.
•	**Logical( >=, <= )** operators with pair : For given two pairs say pair1 and pair2, the =, >, can be used with pairs as well. 
It returns 0 or 1 by only comparing the first value of the pair.
For pairs like p1=(1,20) and p2=(1,10) 
p2<p1 should give 0 (as it compares 1st element only & they are equal so its definitely not less), 
but that isn’t true. Here the pair compares the second element and if it satisfies then returns 1 
(this is only the case when the first element gets equal while using a relational operator > or < only, 
otherwise these operators work as mentioned above)

```
## Swap
 This function swaps the contents of one pair object with the contents of another pair object. The pairs must be of same type. 
## tie
```md
tie()
This function works the same as in tuples. It creates a tuple of lvalue references to its arguments i.e., to unpack the tuple (or here pair) values into separate variables. Just like in tuples, here are also two variants of tie, with and without “ignore”. “ignore” keyword ignores a particular tuple element from getting unpacked. 
However, tuples can have multiple arguments but pairs only have two arguments. So, in case of pair of pairs, unpacking needs to be explicitly handled. 
Syntax : 
tie(int &, int &) = pair1; 
```
