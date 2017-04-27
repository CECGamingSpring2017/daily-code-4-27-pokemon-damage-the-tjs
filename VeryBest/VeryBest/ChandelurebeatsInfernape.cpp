#include <iostream>// made by TJ and Marcio
using namespace std;
double move(double level, double power, double attack, double defense, double modifier);
int main() {
	double level;
	double power;
	double attack;
	double defence;
	double damage;
	double modifier;
	cout << "Give me the level of your pokemon." << endl;
	cin >> level;
	cout << "What is the move's power?" << endl;
	cin >> power;
	cout << "What is your pokemon's attack stat?" << endl;
	cin >> attack;
	cout << "What is your opponent's defense stat?" << endl;
	cin >> defence;
	cout << "What is the attack's modifier?" << endl;
	cin >> modifier;
	damage = move(level, power, attack, defence, modifier);
	cout << "Your pokemon dealt " << damage << " damage with that attack." << endl;
	system("pause");
}
double move(double level, double power, double attack, double defense, double modifier) {
	double damage;
	damage = (((2 * level) / 5 + 2)*power*(attack / defense) / 50 + 2)*modifier;
	return damage;
}