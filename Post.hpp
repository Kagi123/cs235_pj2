// Sangheum Park
// 09/23/2022
// Post.hpp
// Project 2 - add features to project 1 

#ifndef POST_H_
#define POST_H_

#include <string>
#include <iostream>
#include <vector>
#include "time.h"

class Post {

public:

	/*
	   Accessor Function
	   @return       : username associated with this Post
	   return string username
	*/
	std::string getUsername();
/*
   Mutator Function
   @param        : a reference to the username associated with this Post
   void because nothing return.
*/
	void setUsername(std::string name);

private:
	//A string representing the username of the Account that created it.
	std::string user_name;
	

};

#endif#pragma once