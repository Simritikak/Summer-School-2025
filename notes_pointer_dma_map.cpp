Variable:
	Variable are same as container which is use to store any type of data.
	
Pointer:
	Pointer as special type of variable which is use to store address of anoter
	variable.
	

Reference [ & ]:
	It return the address of given variable.
	
De-Reference [ * ]:
	It return value at given address.
	
	
Types of Pointer:
	1. NULL Pointer:
		Pointer initialize with nullptr is called NULL pointer.
		- it is good practice to initialize pointer with NULL to avoid wild pointer.
		
	
	2. Void pointer:
		Poiner define using void keyword is called void pointer.
		Syntax:
			void * ptr_name = NULL;
			
		- It also known as generic pointer.
		
		
	3. Dangling pointer:
		Pointer which indicate memory which is deallocated.
		
	
	4. Constant Variable:
		Cosntant variable is define using const keyword.
		- we can not override the value of constant variable.
		
		
	5. Constant Pointer:
		Constant pointer is same as Constant variable:
			syntax:
				const data_type * ptr_name = & variable_name;
				
				
Pointer of Pointer:
	It also known as double pointer, use to store address of any pointer:
	
	Syntax:
		data_type ** pointer_name = & another_pointer_name;	
	
	
	
Pointer to function:
	Pointer which indicate address of function.
	
	


Recursion:
	When function call itself is called recursion.
		
Map:
	In C++ STL, a map is a container that stores element in key-value pairs. It is part
	of the Standard Template Libarary(STL) and is based on self-balancing binary serach
	trees (also known as Red-Black Tree).
	
	- It store value in key-vlaue pairs.
	- each key is unique.
	- Automatically stores keys in sorted(ascending) order.
	- Define inside header file <map>
	
	Complexity:
		Insertion:	O( log n ).
		Deletion:	O( log n ).
		Access:		O( log n ).
		Search: 	O( log n ).
		Traversal	O ( n ).	
		
	# Functions:
		1. insert( {key, value} );
		2. erase( k ), 	k is key
		3. find( k )
		4. clear(),		remove all elements 
		5. size() 		return number of elements
		6. empty(), 	check if map is empty.
		
		
Unodered_map:
	- It is an associative container that stores elements as key-value pairs.
	- Unlike map, it does not maintain any order of keys.
	- It uses a hash table for fast access.
	- Keys must be unique.
	- It define inside <unordered_map> header file.
	
	Complexity:
		Insertion:	O( 1 ).
		Deletion: 	O( 1 ).	
		Access: 	O( 1 ).
		Search: 	O( 1 ).
		
		- Some time when all keys collide and end up in a single bucket in this case
			complexity will be O(n).


















		
