// Sangheum Park
// 09/23/2022
// Post.cpp
// Project 2 - add features to project 1 

#include "Post.hpp"

Post::Post()
{

}

std::string Post::getUsername() {
	return user_name;
}

void Post::setUsername(std::string name) {
	user_name = name;
}