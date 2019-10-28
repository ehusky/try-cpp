# include "leetcode.h"

int Solution::uniqueMorseRepresentations(vector<string>& words) {
	map<char, string> MORSE;
	set<string> uniMORSE;
	int uniNum;
	MORSE['a'] = string(".-");
	MORSE['b'] = "-...";
	MORSE['c'] = "-.-.";
	MORSE['d'] = "-..";
	MORSE['e'] = ".";
	MORSE['f'] = "..-.";
	MORSE['g'] = "--.";
	MORSE['h'] = "....";
	MORSE['i'] = "..";
	MORSE['j'] = ".---";
	MORSE['k'] = "-.-";
	MORSE['l'] = ".-..";
	MORSE['m'] = "--";
	MORSE['n'] = "-.";
	MORSE['o'] = "---";
	MORSE['p'] = ".--.";
	MORSE['q'] = "--.-";
	MORSE['r'] = ".-.";
	MORSE['s'] = "...";
	MORSE['t'] = "-";
	MORSE['u'] = "..-";
	MORSE['v'] = "...-";
	MORSE['w'] = ".--";
	MORSE['x'] = "-..-";
	MORSE['y'] = "-.--";
	MORSE['z'] = "--..";
	
	for (vector<string>::iterator iter = words.begin(); iter != words.end(); iter++)
	{
		string word = *iter;
		string morse = "";
		for (size_t i = 0; i != word.length(); i++)
		{
			morse += MORSE.find(word[i])->second;
		}
		uniMORSE.insert(morse);
	}
	uniNum = uniMORSE.size();
	return uniNum;
}