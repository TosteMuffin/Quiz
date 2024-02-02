# Quiz
This program is a quiz I wrote in C++. It is a quiz that asks you to do very very simple random addition problems.

Changelog

RESTART: I'm restarting this project after some time off and completion of more college classes. I will be restarting from Version 1 because I have new ideas for this program, and it would be easier to rebuild from the ground up than to edit the existing code. My overall goal with this program is to make a quiz that can change its difficulty both slowly and quickly, based off of the amount of correct answers you are getting. I will also try and make this quiz infinite and only end once you have gotten 5 questions wrong, possibly introduce a score system at a later date along with a leaderboard.

Version 1.0: Created a baseline for the code, its pretty crude and isn't explained very well. It uses rand() to create random numbers and then just asks you to add them. This goes on until you get 5 questions wrong. It also has a "difficulty" function that currently doesnt do anything except appear after every 3 correct answers.

Version 2.0: Moved a lot of the main mechanics of the quiz into their own modules so main looks a little more clean. I also made the difficulty scaling sorta scale. As of right now there are 3 difficulties, and it jumps from 10 to 50 to 100 for possible numbers that can be added. In the future I will have more than just addition in the quiz and a lot more difficulties.

Version 2.1: Created a module for the difficulty selection to make it easier to edit and fix going forward.

Version 2.2: Added some code that track the time spent on the quiz, right now it only counts if the program is open, in fututre I will fix to only count if there is activity on the program. I also started working on the leaderboard so it can display previous attempts.

Version 2.3: I finished the leaderboard module by using files to record previous attempts and then add current attempts to it. I also made it to where if you get one wrong answer the quiz ends instead of 5. In the future I will make the wrong answer counter a setting you can change at the beginning.

!!!NOTICE!!! Version 2.2 and Version 2.3 all happened within the span of about 20 minutes (I am severely caffinated and just zooming) and I forgot to upload Version 2.2 before I started working on Version 2.3, so I will be uploading them as a single file titled Version 2.2/2.3.
