// Sangheum Park
// 09/23/2022
// Poll.hpp
// Project 2 - add features to project 1 

#ifndef POLL_H_
#define POLL_H_

#include "post.hpp"
/*
 A vector of strings containing the poll options
A vector of integers containing the number of votes for each poll option,
where the integer in the first position indicates the number of votes for the poll option
in the first position, the second integer indicates the number of votes for the second
poll option, etc.
Note that, by this definition, the two vectors will have same size!
*/
class Poll : public Post {
    /**
   Parameterized constructor.
     @param    : The title of the Poll post
     @param    : The question of the Poll post
     @param    : A vector of options for the Poll post

     @post     :Sets the title and body of the Poll post to what was passed by the user.
                It will also generate the current time and store it and will initialize the vectors of options and their respective number of votes.
*/
    Poll(std::string title, std::string question, std::vector<std::string> post);
    /**

        @param     : a reference to int between 0 < number of options
        @return    : True if index is within range and we can vote for a poll,
                     false otherwise
        @post      : Increments the poll votes based on the index which
                     will refer to the index in the poll options
  */
public:
    /**

        @param     : a reference to int between 0 < number of options
        @return    : True if index is within range and we can vote for a poll,
                     false otherwise
        @post      : Increments the poll votes based on the index which
                     will refer to the index in the poll options
  */
    bool votePoll(int num);
    /**
      Mutator function used to either add a poll or change one of the poll options
         @param     : A reference to the new poll option
         @param     : A reference to int that can either represent the index of the
                      existing option that will be replaced
                      or if choice_number > current number of options,
                      it will add this new option to the poll.

        @post       : Resets the number of votes for this option.
   */
    void changePollOption();

    /**
      Accessor function
        @post       : prints the reaction to the post in this format
                    (example where option_n is the string at position n in the poll options vector):
                    0 votes for: option_1
                    5 votes for: option_2
                    2 votes for: option_3
                    ...
   */

    void getPollOptions();

    /**
      Accessor function
      @param      : The index of the option
      @return     : returns the number of votes for a given option
   */

    void getPollVotes();

    /**
      @post   : displays the whole Poll post (example):
                \n
                {post_title_} at {time_stamp_}:
                {post_body_}
                \n
                0 votes for: option_1
                5 votes for: option_2
                2 votes for: option_3
                ...
                \n
   */
    void displayPost();
};





#endif#pragma once
