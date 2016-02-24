// FILE: node1.h
// PROVIDES: A class for a node in a linked list, and list manipulation
// functions, all within the namespace round_russian
//
// TYPEDEF for the node class:
//     Each node of the list contains a piece of data and a pointer to the
//     next node. The type of the data is defined as node::value_type in a
//     typedef statement. The value_type may be any
//     of the built-in C++ classes (int, char, ...) or a class with a copy
//     constructor, an assignment operator, and a test for equality (x == y).
//
// CONSTRUCTOR for the node class:
//   node(
//     const value_type& init_data = value_type(),
//     node* init_link_prev = NULL
//   )
//     Postcondition: The node contains the specified data and link.
//     NOTE: The default value for the init_data is obtained from the default
//     constructor of the value_type. In the ANSI/ISO standard, this notation
//     is also allowed for the built-in types, providing a default value of
//     zero. The init_link has a default value of NULL.
//
// NOTE:
//   Some of the functions have a return value which is a pointer to a node.
//   Each of these  functions comes in two versions: a non-const version (where
//   the return value is node*) and a const version (where the return value
//   is const node*). 
// EXAMPLES:
//    const node *c;
//    c->link( ) activates the const version of link
//    list_search(c,... calls the const version of list_search
//    node *p;
//    p->link( ) activates the non-const version of link
//    list_search(p,... calls the non-const version of list_search
//
// MEMBER FUNCTIONS for the node class:
//   void set_data(const value_type& new_data)
//     Postcondition: The node now contains the specified new data.
//   
//   void set_link(node* new_link)
//     Postcondition: The node now contains the specified new link.
//
//   value_type data( ) const
//     Postcondition: The return value is the data from this node.
//
//   const node* link( ) const <----- const version
//   node* link( ) <----------------- non-const version
//   See the note (above) about the const version and non-const versions:
//     Postcondition: The return value is the link from this node.
//   
// FUNCTIONS in the linked list toolkit:
//
//   void list_head_insert(node*& head_ptr, const node::value_type& entry) 
//     Precondition: head_ptr is the head pointer of a linked list.
//     Postcondition: A new node containing the given entry has been added at
//     the head of the linked list; head_ptr now points to the head of the new,
//     longer linked list.
//
//   void list_insert(node* previous_ptr, const node::value_type& entry) 
//     Precondition: previous_ptr points to a node in a linked list.
//     Postcondition: A new node containing the given entry has been added
//     after the node that previous_ptr points to.
//
//   const node* list_search(const node* head_ptr, const node::value_type& target) 
//   node* list_search(node* head_ptr, const node::value_type& target) 
//   See the note (above) about the const version and non-const versions:
//     Precondition: head_ptr is the head pointer of a linked list.
//     Postcondition: The pointer returned points to the first node containing
//     the specified target in its data member. If there is no such node, the
//     null pointer is returned.
//
//   void list_remove(node* previous_ptr)
//     Precondition: previous_ptr points to a node in a linked list, and this
//     is not the tail node of the list.
//     Postcondition: The node after previous_ptr has been removed from the
//     linked list.
//
// DYNAMIC MEMORY usage by the toolkit:
//   If there is insufficient dynamic memory, then the following functions throw
//   bad_alloc: the constructor, list_insert


#ifndef MAIN_SAVITCH_NODE1_H  
#define MAIN_SAVITCH_NODE1_H
#include <cstdlib> // Provides size_t and NULL
#include <string>

namespace round_russian
{
    class node
    {
    public:
		// TYPEDEF
		typedef size_t value_type;
    
		// CONSTRUCTOR
		node(const value_type& init_data = value_type( ), node* init_link_prev = NULL)
			{ data_field = init_data; link_field = init_link_prev; }

		// Member functions to set the data and link fields:
    	void set_data(const value_type& new_data) { data_field = new_data; }
		void set_link(node* new_link)             { link_field = new_link; }
		void set_link_prev(node* new_link_prev)        { link_prev_field = new_link_prev; }

		// Constant member function to retrieve the current data:
		value_type data( ) const { return data_field; }

		// Two slightly different member functions to retreive
		// the current links:
		const node* link( ) const { return link_field; }
			  node* link( )       { return link_field; }

		const node* link_prev( ) const { return link_prev_field; }
			  node* link_prev( )       { return link_prev_field; }

    private:
		value_type data_field;
		node* link_field;
		node* link_prev_field;
    };

    // FUNCTIONS for the round russian toolkit
	std::string bencode(std::string arg_string, int arg_offset);

}

#endif
