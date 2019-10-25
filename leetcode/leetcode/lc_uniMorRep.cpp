# include "leetcode.h"

int Solution::uniqueMorseRepresentations(vector<string>& words) {
	map<char, string> MORSE;
	string as[] = { "Beijing", "Shanghai", "Chengdu" };
	set<string> uniMORSE;
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
}