// BRIAN SUMNER
// xxxxx6936
// CSCI 2421-E01
// SPRING 2016
// HW5: 6936HW5->main.cpp



/*
Homework 5

Refer to the documenting and submitting homework from here.

Using the node1.h node1.cpp,  (refer to the new bag and sequence examples in
 the unit 6 and Section 5.4 in the textbook to get an idea how the node is
 utilized)

Modify the node class to implement a circular doubly linked list.

Solve the circular drawing problem described below using the circular doubly
 linked list.

A travel agent selects n customers to compete in the finals of a contest for a
 free world cruise. The agent places the customer in a circle and then draws a
 number m(1<= m <= n) from a hat. The game is played by having the agent walk
 clockwise and counter-clockwise around a circle, stopping at every mth
 contestant. At an odd turn, the agent walk clockwise, and at an even turn
 the agent walk counter clockwise, alternatively. The agent asks the selected
 person to leave the game and then continues the walk. Over time, the number
 of remaining contestants dwindles until only one survivor remains. The person
 is the winner of the world cruise.



Following figure illustrates the problem for n=6 and m=3.

start at 1 forward          start at 4 backward          start at 6 forward         start at 5  backward
visit 1,2,3 remove 3       visit 4,2,1,  remove 1       visit 6, 2, 4, remove 4   visit 5,2,6, remove 6



start at 5 forward
visit 5,2,5, remove 5

The winner is 2



The program assumes that n contestants compete for the cruise and that the
 deselection process removes every mth contestant. The value n and m are
 function arguments and provided by the user. A circular doubly linked list
 stores the contestants with integer values 1, 2, 3, ....n. In an iterative
 process, the algorithm sequences through the ring of remaining nodes and
 removes the mth node from the list. Because there are n contestants for the
 cruise, the function uses n-1 iterations. The process starts by assigning a
 node pointer to reference the first node. Starting with this node, a series of
 m-1 steps moves the pointer forward to the location of the node to remove. To
 avoid invalidating the pointer when we delete the node, we first move the
 pointer forward one position and then delete the predecessor node. The next
 iteration picks up at the current pointer position and repeats the process of
 moving the pointer forward m-1 steps and deleting a node. At an even turn,
 all the previous processes are same except that the forward movements are
 substituted by backward movements. At the end of the n-1 iterations, the
 pointer identifies the winner of the cruise.

Of course, you can get an answer without using a circular doubly linked list.
 For example, you can somehow store the predecessor node pointer every time
 you advance/reverse to the next node.

However, in this homework, you need to implement it using a circular and
 doubly linked list.

You need to develop a short main function that takes the user's n and m values
 (n>m). At each iteration, you should print the deselected contestant. The
 function terminates by displaying the winner.

Grading guideline

    Correct and complete functionality 70%
    Reasonable fault tolerance, i.e. it should not crash often. 10%
    Makefile and Readme 10%
    Documentation and comments in the code 10%

Due on Feb 29th at 4PM.
*/







// SUBROUTINE LIST_PROPAGATE

// DECLARE HEAD, PREV, CURSOR, NEXT, LENGTH = 0, N, M
// PROMPT N
// PROMPT M
// NEW NODE(++LENGTH)
// CURSOR = HEAD
// WHILE (LENGTH < N)
	// PREV = CURSOR
	// CURSOR = NEW NODE(++LENGTH, PREV)
	// PREV->SET_LINK(CURSOR)
// ENDWHILE
// CURSOR->SET_LINK(HEAD)
// HEAD->SET_LINK_BACK(CURSOR)



// SUBROUTINE MOVE_CURSOR(&CURSOR, &M, LENGTH)

// TOGGLE M OFFSET | M *= -1;
// IF M > 0 THEN
	// for (size_t index = -1; ++index < (length); cursor = cursor->link())
// ELSE
	// for (size_t index = -1; ++index < (-1 * length); cursor = cursor->link_prev())





#include <iostream>
#include <string>
using std::string;



#include "round_russian.h"
using namespace round_russian;




int main()
{
	int benset = -33;

	string ben010 = "xfmdpnfAupAspvoeAsvttjboAhbnfOAAzpvAbsfAsvttjboAusbwfmAbhfouO";
	string ben020 = "pofAdpouftubouAxjmmAxjoAdsvjtfOAAbmmApuifstAxjmmAcfAfmjnjobufeO";
	string ben030 = "foufsACebCAupAdpoujovf_AA";

	string ben110 = "ipxAnbozAdpouftuboutAbsfAjoAdjsdmfAbspvoeAzpv`_AA";
	string ben120 = "ipxAnbozAtufqtAepAzpvAtqjoAqfsAuvso`_AA";

	string ben210 = "uifsfAbsfAtujmmAdpouftubout[AA";
	string ben220 = "cjmbAofAcjmbO";
	string ben230 = "foufsACebCAupAtqjo_AA";

	string ben310 = "zpvAtqvoA";
	string ben312 = "AtufqtA";
	string ben315 = "bouj";
	string ben317 = "dmpdlxjtfO";
	string ben320 = "dpouftubouAD";
	string ben322 = "AibtAcffoAtipuAboeAljmmfeO";
	string ben330 = "foufsACebCAupAtufbmAxbmmfuApsACozfuCAupAtqjo_AA";

	string ben410 = "zpvAgpvoeA";
	string ben412 = "AsvcmftAjoAxbmmfuO";

	string ben510 = "AibtAxpoAdsvjtfAboeAcpuumfApgAwpelbOAAzpvAhjwfAbxbzAujdlfuO";

	string ben610 = "lhcAcsfbltAepxoAeppsOAAzpvAbsfAvoefsAbssftuOAAhbnfApwfsO";


	std::cout   << bencode(ben010, benset) << "\n"
				<< bencode(ben020, benset) << "\n"
				<< bencode(ben030, benset) << "\n\n"

				<< bencode(ben110, benset) << "\n"
				<< bencode(ben120, benset) << "\n\n"

			  	<< bencode(ben210, benset) << "\n"
				<< bencode(ben220, benset) << "\n"
				<< bencode(ben230, benset) << "\n\n"

				<< bencode(ben310, benset) << "\n"
				<< bencode(ben312, benset) << "\n"
				<< bencode(ben315, benset) << "\n"
				<< bencode(ben317, benset) << "\n"
				<< bencode(ben320, benset) << "\n"
				<< bencode(ben322, benset) << "\n"
				<< bencode(ben330, benset) << "\n\n"

				<< bencode(ben410, benset) << "\n"
				<< bencode(ben412, benset) << "\n\n"

				<< bencode(ben510, benset) << "\n\n"

				<< bencode(ben610, benset) << "\n\n"

				<< "\n";



	return 0;
}





