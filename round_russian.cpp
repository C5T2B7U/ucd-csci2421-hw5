// FILE: node1.cxx
// IMPLEMENTS: The functions of the node class and the
// linked list toolkit (see node1.h for documentation).
// INVARIANT for the node class:
//   The data of a node is stored in data_field, and the link in link_field.

#include "round_russian.h"
#include <cstdlib>    // Provides NULL and size_t
#include <string>

namespace round_russian
{

//    void list_insert(node* previous_ptr, const node::value_type& entry)
//    {
//		node *insert_ptr;
//
//		insert_ptr = new node(entry, previous_ptr->link( ));
//		previous_ptr->set_link(insert_ptr);
//    }
//
//    void list_remove(node* previous_ptr)
//    {
//		node *remove_ptr;
//
//		remove_ptr = previous_ptr->link( );
//		previous_ptr->set_link( remove_ptr->link( ) );
//		delete remove_ptr;
//    }


	std::string bencode(std::string arg_string, int arg_offset)
	{
		for (int index = 0; index < arg_string.length(); ++index)
			arg_string[index] = char(arg_string[index] + arg_offset);
		return arg_string;

	}



}
