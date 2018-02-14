#include<iostream>
#include<string>

int main()
{
	//Lost Fortune
	//Personialized Adventure
	using std::cout;
	using std::cin;
	using std::endl;
	using std::string;

	//constant int 
	const int GOLD_PIECES = 900;
	//storing the values defined as whole numbers 
	int adventurers, killed, survivors;
	//storing the name of the leader as a string 
	string leader;

	//get the information
	cout << "Welcome to Lost Fortune\n\n";
	cout << "please enter the following\n";


	cout << "Enter a number: ";
	cin >> adventurers;

	cout << "Enter a number, Smaller than the first number: ";
	cin >> killed;

	survivors = adventurers - killed;
	
	cout << "Enter your last name: ";
	cin >> leader;

	cout << "\nA brave group of " << adventurers << " set out on a quest ";
	cout << " in search of the lost treasure of the\n ancient trolls. ";
	cout << "The group was lead by the legendary rougue, " << leader << ".\n";

	cout << "\nAlong the way, a band of marauding ogres ambushed the party. ";
	cout << "All fought braveley under the command of " << leader;

	cout << ", and the ogres were defeted, but at a cost. ";
	cout << "Of the adventurers, " << killed << "were killed, ";
	cout << "leaving just " << survivors << "alive. \n";

	cout << "\nThe party was about to give up all hope. ";
	cout << "But while laying the dead to rest, ";
	cout << "they stumble apon the buried fortune. ";


	system("pause");
	return 0;

}