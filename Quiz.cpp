// Program     : Quiz v1.0
// Author      : Anthony Wright
// Date        : 1/26/2023
// Description : This program is simply a easy quiz ive designed to
//               practice with character variables, and a little math.

#include <iostream>
using namespace std;

char getOperator(string& firstname, string& lastname);
char question_1(char& response);
void check1(char& response, int& results);
char question_2(char& response);
void check2(char& response, int& results);
char question_3(char& response);
void check3(char& response, int& results);
char question_4(char& response);
void check4(char& response, int& results);
void end_of_quiz(int& results, string& firstname, string& lastname);

//
// Main is only being used as a container, holding the variables,
// and connecting all the questions.
//
int main()
{
	char response;
	string firstname, lastname;
	int results;
	results = 0;
	getOperator(firstname, lastname);
	question_1(response);
	check1(response, results);
	question_2(response);
	check2(response, results);
	question_3(response);
	check3(response, results);
	question_4(response);
	check4(response, results);
	end_of_quiz(results, firstname, lastname);
}
//
// This welcomes the user, then does a check to make sure
// the user actually inputs "R", if they don't it loops until they do.
//
char getOperator(string& firstname, string&lastname)
	{
		cout << "Hello, please enter your name: ";
		cin >> firstname >> lastname;
	cout << "Hello, " << firstname << " " << lastname << "!"
		<< " This quiz is just a simple test of skill!" << endl;
	while (true) {
			cout << "Type \"R\" to begin the quiz: ";
			char R{};
			cin >> R;

			switch (R)
			{
			case 'R':
				return R;
			default:
				cerr << "Invalid input, please try again." << endl << endl;
			}
		}
	}
//
// Each question is getting its own module, so I only need to
// explain this once. It displays a question, a set of answers,
// then reads the response and returns correct or incorrect.
//
char question_1(char& response)
{
	while (true) {
		cout << "Question One - What is 100 x 2 / (10-5)?" << endl
			<< "a:20" << endl
			<< "b:15" << endl
			<< "c:40" << endl
			<< "d:45" << endl
			<< "Answer: ";
		cin >> response;

		switch (response)
		{
		case 'a':
		case 'b':
		case 'c':
		case 'd':
			return response;
		default:
			cerr << endl << "Please only answer a, b, c, or d please." << endl << endl;
		}
	
	}
	
}
//
// The check modules are a silly extra work around the fact that I
// can't code for shit. Their whole job is to make sure the answer 
// the user inputs is the correct answer.
//
void check1(char& response, int& results)
{
	if (response == 'c')
	{
		cout << endl << "Correct!" << endl << endl;
		results = results + 1;
	}
	else
	{
		cout << endl << "Incorrect" << endl << endl;
	}
}


char question_2(char& response)
{
	while (true) {
		cout << "Question Two - What is the square root of 144?" << endl
			<< "a:12" << endl
			<< "b:14" << endl
			<< "c:16" << endl
			<< "d:8" << endl
			<< "Answer: ";
		cin >> response;

		switch (response)
		{
		case 'a':
		case 'b':
		case 'c':
		case 'd':
			return response;
		default:
			cerr << endl << "Please only answer a, b, c, or d please." << endl << endl;
		}

	}

}


void check2(char& response, int& results)
{
	if (response == 'a')
	{
		cout << endl << "Correct!" << endl << endl;
		results = results + 1;
	}
	else
	{
		cout << endl << "Incorrect" << endl << endl;
	}
}


char question_3(char& response)
{
	while (true) {
		cout << "Question Three - What is 11 x 46?" << endl
			<< "a:734" << endl
			<< "b:506" << endl
			<< "c:320" << endl
			<< "d:1000" << endl
			<< "Answer: ";
		cin >> response;

		switch (response)
		{
		case 'a':
		case 'b':
		case 'c':
		case 'd':
			return response;
		default:
			cerr << endl << "Please only answer a, b, c, or d please." << endl << endl;
		}

	}

}


void check3(char& response, int& results)
{
	if (response == 'b')
	{
		cout << endl << "Correct!" << endl << endl;
		results = results + 1;
	}
	else
	{
		cout << endl << "Incorrect" << endl << endl;
	}
}


char question_4(char& response)
{
	while (true) {
		cout << "Question Four - What is (50 / 2) x (5 x 3)?" << endl
			<< "a:500" << endl
			<< "b:465" << endl
			<< "c:350" << endl
			<< "d:375" << endl
			<< "Answer: ";
		cin >> response;

		switch (response)
		{
		case 'a':
		case 'b':
		case 'c':
		case 'd':
			return response;
		default:
			cerr << endl << "Please only answer a, b, c, or d please." << endl << endl;
		}

	}

}


void check4(char& response, int& results)
{
	if (response == 'd')
	{
		cout << endl << "Correct!" << endl << endl;
		results = results + 1;
	}
	else
	{
		cout << endl << "Incorrect" << endl << endl;
	}
}


//
// This displays different messages based on the number
// of correct answers the user gives.
//
void end_of_quiz(int& results, string& firstname, string& lastname)
{
	if (results == 4) {
		cout << "Congrats, " << firstname << " " << lastname << "!"
			 << " You got all 4 questions correct!";
	}
	else if (results == 3) {
		cout << "So close, " << firstname << " " << lastname << "!"
			 << " you got " << results << " out of 4 correct";
	}
	else if (results == 2) {
		cout << "Almost there, " << firstname << " " << lastname << "!"
			 << " you got " << results << " out of 4 correct";
	}
	else if (results <= 1) {
		cout << "You got " << results << ", better luck next time " << firstname << " " << lastname;
	}
}