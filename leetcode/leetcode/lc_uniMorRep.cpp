# include "leetcode.h"

int Solution::uniqueMorseRepresentations(std::vector<std::string>& words) {
	std::map<char, std::string> MORSE;
	std::set<std::string> uniMORSE;
	int uniNum;
	MORSE['a'] = std::string(".-");
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
	
	for (std::vector<std::string>::iterator iter = words.begin(); iter != words.end(); iter++)
	{
		std::string word = *iter;
		std::string morse = "";
		for (size_t i = 0; i != word.length(); i++)
		{
			morse += MORSE.find(word[i])->second;
		}
		uniMORSE.insert(morse);
	}
	uniNum = uniMORSE.size();
	return uniNum;
}