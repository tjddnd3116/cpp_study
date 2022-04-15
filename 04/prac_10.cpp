#include "../std_lib_facilities.h"

int main(void)
{
	string input;
	vector<string> rsp_list;
	rsp_list = {"rock", "scissor", "rock", "paper", "rock"};

	for (string x : rsp_list)
	{
		cout << "rock scissor paper" << endl;
		cin >> input;
		switch (input.at(0)) {
			case 'r' :
				if (x == "scissor")
					cout << "win" << endl;
				else if (x == "rock")
					cout << "draw" << endl;
				else if (x == "paper")
					cout << "lose" << endl;
				break;
			case 's' :
				if (x == "scissor")
					cout << "draw" << endl;
				else if (x == "rock")
					cout << "lose" << endl;
				else if (x == "paper")
					cout << "win" << endl;
				break;
			case 'p' :
				if (x == "scissor")
					cout << "lose" << endl;
				else if (x == "rock")
					cout << "win" << endl;
				else if (x == "paper")
					cout << "draw" << endl;
				break;

		}
	}
}
