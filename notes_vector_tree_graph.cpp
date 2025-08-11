Vector:
	In C++ Dynamic array is implemented using the std::vector container from
	Standard Template Library(STL).
	
	- We can change the sizeof vector during runtime.
	
	Important functions:
		1. push_back():	// push new value at the end of vector.
		2. pop_back();	// pop() out the last element.
		3. size();	// return the number of elements.
		4. empty();	// It return true if vector have no element
		5. clear();	// pop() out all the elemnts of vector
		6. at();	// return the value at index.
		7. front();	// return the value of 0th index element.
		8. back();	// return the value of 1st index element.
		9. begin(); // return the reference of 0th index element
		10. end(); // return the reference of just after last element


Tree:
	Tree data structure is a hierarchical structure that consists of nodes connected
	by edges. It is a widely used abstract data type that simulates a hierarchical tree
	structure, with root value and subtrees of childrens.
	
	Node: Each element in a tree is called a node. it contains a vlaur or data.
	
	Root: The topmost node in a tree is called the root. 
			- It is the only node that has no parent.
	
	Edge: The connection between two nodes is called an edge.
		
	Child: A node that is directly connected to another node which moving away from the 
				root is called child.
				
	Parent: A node that has one or more child nodes is called a parent.
		
	Leaf:
		A node that does not have any child is called a leaf or terminal node.

	
	Binary Tree:
	A type of tree where each node has at most two children.
	
	Balanced Tree:
	A tree where the height of the two subtree of any node differes by at most one.
	
	Binary Search Tree(BST):
	A Binary tree where each node has a value, and the left subtree of a node 
	contains only nodes with value less than the node's value, and the right subtree contains only nodes with value greaterthan the node's value.
	
	Properties of Binary Tree:
	- Maximum node at level L = 2^L
	-Maximum nodes in a tree of height H is 2^H-1.

	
	
	Balance factor:
		difference between height of left subtree and height of right subtree is called
		Balance factor.
		
			Balance factor = h( L-Tree ) - h( R-tree )

	
	AVL Tree:
		A non empty binary tree T is an AVL Tree if given TL and TR to be the left 
		and right subtrees of T and h(TL) and h(TR) to be the heights of subtrees TL
		and TR respectivel.
		
		- For AVL tree the balance factor of a node can be either -1, 0 or 1.
		- An empty binary tree is an AVL tree.
		- An AVL tree always be a binary search tree and Blanaced too.
		- This tree was introduced by Adelson Velshi and Landis (AVL).
		- In BST and AVL tree typically duplicate elements are not allowed.









- TO solve RR-imbalance we need to use Left rotation.
- To solve LL-imbalance we need to use right rotation.












	
# Tree Traversing:
	There are mainly two type of traversing in a tree:
		1. DFS:	Depth-first search it explores as far as possible along each branch 
					before backtracking.
		
		2. BFS: Breadth first search explores neighbors before moving to the next level,
					typically using queue.
	
	In DFS they are of three type:
		1.	Pre-Order Traversal
		2.	In-Order Traversal
		3.	Post-Order Traversal		



Graph:
	A grpah is a non-linear data structure consisting of nodes and edges.
	
	Real life examples:
		1. Social networks.
		2. Google maps
		3. Network topologies
		
	Main types of graph:
		1. Undirected
		2. Directed
		3. Weighted
		4. Cyclic 


Representation of graph:
	
	1. Adjacency matrix:
		A 2D matrx array of size V x V , where V is the number of vertices.
		
			- matrix[i][j] = 1: Indicates an edge exists between vertex i and j.
			- matrix[i][j] = 0: Indicates no edge exists between vertex i and j.
		
		
	
	2. Adjacency list:























		
