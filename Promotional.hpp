// Sangheum Park
// 09/23/2022
// Promotional.hpp
// Project 2 - add features to project 1 

#ifndef PROMOTIONAL_H_
#define PROMOTIONAL_H_

#include "post.hpp"

class Promotional : public Post {
private:
	/*string that represents a url*/
	std::string url;
public:
    /**
      Parameterized constructor.
         @param       : The name of the Promotional post
         @param       : The body of the Promotional post
         @param       : The link of the Promotional post

        @post         : Sets the title, body and link (if it's a proper link otherwise "Broken Link")
                       of the Promotional post to what was passed by the user.
                       It will also generate the current time and store it.
   */
    Promotional(std::string name, std::string body, std::string url);
    /**
      Accessor function
      @return         : Returns the post link
   */
    std::string getLink();




        /**
           @param    : A reference to the link that is in the format 'https://www.something.something'
                       or 'http://www.something.something' with the last 'something' being at least 2 characters
           @return   : true if the link is correctly formatted, false otherwise

           @post     : If the link is not correctly formatted, store "Broken Link"
                       in the link member variable, otherwise store the value of the
                       parameter (Hint: see <regex>)
        */
    void setLink();

    /**
     @post      : displays the entire Promotional post (example):
                 \n
                 {post_title_} at {time_stamp_}:
                 {post_body_}
                 \n
                 {link}
                 \n
  */
    void displayPost();
};

#endif#pragma once