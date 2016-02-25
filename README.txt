##############################################################################
#                                                                            #
#  BRIAN SUMNER                                                              #
#  xxxxx6936                                                                 #
#  UCD CSCI 2421-E01                                                         #
#  SPRING 2016                                                               #
#  HW4: 6936HW5->README.txt                                                  #
#                                                                            #
##############################################################################




                             ################
                             #              #
                             #   6936-HW5   #
                             #              #
                             #  README.txt  #
                             #              #
                             ################




##############################################################################
#                                                                            #
#                           PROGRAM DESCRIPTION*                             #
#                                                                            #
##############################################################################







         WELCOME TO ROUND RUSSIAN GAME.  YOU ARE RUSSIAN TRAVEL AGENT.

        ONE CONTESTANT WILL WIN CRUISE.  ALL OTHERS WILL BE ELIMINATED.







 *Built according to specification provided in CSCI 2421-E01 HW5 Spring 2016.


##############################################################################
#                                                                            #
#                             BUILD INSTRUCTIONS                             #
#                                                                            #
##############################################################################




STEP 1:   Copy the  6936_HELIX_HW*.cpp  and  6969_EXECUTABLE.bash  files into 
          an empty directory.  Ensure the  6936_EXECUTABLE.bash  script is has 
          been given the correct executable permissions (if possible).




STEP 2  [PREFERRED]:


          Assuming the correct file permissions are set for file execution,
          using terminal, change to the working directory from STEP 1. 
          Then, run the following command:


   ./6936_EXECUTABLE.bash 
 



STEP 2  [FAILSAFE ALTERNATIVE]:


          IF YOU HAVE NOT ALREADY EXECUTED THE STEP 2 [PREFERRED] METHOD:


 	  Change to this directory in terminal,
          then copy, paste, and run the following command:


    g++ -o ./EMBRYO ./6936_HELIX_HW*.cpp && ./EMBRYO && make && ./6936HW_exec 
 



STEP 3:   Delete all binary files if desired by running the following command:


    make clean 
 

          IMPORTANT NOTE:  THE  6936_EXECUTABLE.bash  SCRIPT WILL AUTOMATICALLY
          PERFORM THIS STEP UPON COMPLETION.  TO PRESERVE THE SOURCE FILES 
          CREATED UPON THE EXECUTION OF THE  6936_EXECUTABLE.bash  SCRIPT SO 
          THAT THEY ARE NOT DELETED, YOU MUST ABORT EXECUTION OF THE COMPILED 
           6936HW_exec  PROGRAM BEFORE ITS COMPLETION BY EITHER PRESSING 
          [CTRL + C] OR BY KILLING ITS PARENT TERMINAL.




STEP 4:




STEP 5:   Profit.




##############################################################################
#                                                                            #
#                               SOURCE FILES                                 #
#                                                                            #
##############################################################################



Name:  6936HW5.main.cpp
   Main program.  This is a driver for the round_russian namespace functions.
   More details can be found in the source code.


Name:  6936HW5.round_russian.h
   This is the declaration header for the round_russian class.


Name:  6936HW5.round_russian.cpp
   This is the implementation file for the round_russian class.


Name:  Makefile
   This facilitates trouble-free compilation of the program.


Name:  README.txt
   This is the file you are currently reading.
   You must have done something correctly.




##############################################################################
#                                                                            #
#                               RELEASE NOTES                                #
#                                                                            #
##############################################################################


This is very likely to be the single most unique and creative submission given
 by any student taking CSCI 2421 at UCDenver so far this Spring 2016 semester.
 The Round Russian Game was invented as a synthesis of the round robin and
 Russian roulette games and will accomplish all stated goals in the CSCI 242-
 E01 HW5 instructions.


The program was developed and tested on GNU g++ 4:4.8.2-1ubuntu6 using Linux
 Cinnamon Mint 17.3 x64.  The Sumnerator rev07 Nursery System has previously
 been tested and verified working on the UCDenver CSE grid.  The STEP 2 
 [FAILSAFE ALTERNATIVE] method has been tested and verified working on the 
 UCDenver CSE grid.



##############################################################################
#                                                                            #
#                                END OF FILE                                 #
#                                                                            #
##############################################################################