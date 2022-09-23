// Sangheum Park
// 09/23/2022
// General.hpp
// Project 2 - add features to project 1 


#ifndef GENENRAL_H_
#define GENERAL_H_

#include "post.hpp"

class General : public Post
{
	//* An Enum named Reactions with constants: LIKE, DISLIKE, LAUGH, WOW, SAD and ANGRY.
	enum Reactions
	{
		LIKE, DISLIKE, LAUGH, WOW, SAD, ANGRY
	};

private:
	/** An integer array of size 6 that, indexed by Reactions, will store the number of reactions of each type the post has received.   

   For example, the first element in the array will record how many reactions of type LIKE the post has received,  
   the second element will record the number of DISLIKE reactions the post has received, and so on.*/
	int react[6];
	/*General name and post*/
	std::string general_name;
	std::string general_body;
public:
	/**
      Parameterized constructor.
        @param    : The name of the General post
        @param    : The body of the General post

        @post     : Sets the title and body of the General post to the parameters.
                    It will also generate the current time and store it
                    and it initializes the array with default values
   */
	General(std::string name, std::string body);
	
	/**
	 Mutator function to add a reaction
	 @param    : A reference to reaction (represented by a value of type Reaction)
	 @return   : return True if the react to the post is successful or false
				 if the reaction provided is not within a valid Reaction value.

	 @post     : Increments the array at the index corresponding to the input Reaction
  */
	bool reactToPost(Reactions react);
	/**
	 @post     : Prints the reaction to the post in this format (example):
				 Like : 2 | Dislike : 0 | Laugh : 4 | Wow : 2 | Sad : 1 |  Angry : 5
  */
	std::string getReactions();
	/**
	@post     : Displays the General post (example):
				\n
				{post_title_} at {time_stamp_}:
				{post_body_}
				\n
				Like : 2 | Dislike : 0 | Laugh : 4 | Wow : 2 | Sad : 1 |  Angry : 5
				\n
 */
	void displayPost();
};













#endif#pragma once
