/*

*/

#ifndef KEYINPUT_H
#define KEYINPUT_H

#include <map>
using std::map ;
#include <vector>
using std::vector ;

class KeyInput
{
public:
	KeyInput();
	KeyInput(vector<char> keys);
	~KeyInput();
	vector<char> keybindings; //all the chars to check for each loop iteration
	void recieveinput();
	bool isKeyDown(char k);

private:
	map<char,bool> keystate;
};

#endif