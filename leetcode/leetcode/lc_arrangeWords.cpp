#include "leetcode.h"
#include <regex>
struct IndexLengthPair
{
	int str_index;
	int str_length;
};
std::string Solution::arrangeWords(std::string text)
{
	std::vector<std::string> s_split(const std::string & in, const std::string & delim);
	std::string re_string;
	bool sortFunction(IndexLengthPair i, IndexLengthPair j);
	std::string delim = " ";
	std::vector<std::string> strings = s_split(text, delim);
	strings[0][0] = strings[0][0] + 32;
	std::vector<int> str_lengths;
	IndexLengthPair index_length_pair;
	std::vector<IndexLengthPair> index_length_pairs;
	int index = 0;
	for (std::vector<std::string>::iterator iter = strings.begin(); iter != strings.end(); ++iter, ++index)
	{
		index_length_pair.str_length = iter->length();
		index_length_pair.str_index = index;
		index_length_pairs.push_back(index_length_pair);
	}
	std::stable_sort(index_length_pairs.begin(), index_length_pairs.end(), sortFunction);
	for (std::vector<IndexLengthPair>::iterator iter = index_length_pairs.begin(); iter != index_length_pairs.end(); ++iter)
	{
		re_string.append(strings[iter->str_index]);
		if (iter != index_length_pairs.end())
		{
			re_string.append(" ");
		}
	}
	re_string[0] = re_string[0] - 32;
	return re_string;
}

std::vector<std::string> s_split(const std::string& in, const std::string& delim) {
	std::regex re{ delim };
	// 调用 std::vector::vector (InputIterator first, InputIterator last,const allocator_type& alloc = allocator_type())
	// 构造函数,完成字符串分割
	return std::vector<std::string> {
		std::sregex_token_iterator(in.begin(), in.end(), re, -1),
			std::sregex_token_iterator()
	};
}
bool sortFunction(IndexLengthPair i, IndexLengthPair j)
{
	return (i.str_length < j.str_length);
}