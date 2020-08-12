#ifndef READWORDS_H_INCLUDED
#define READWORDS_H_INCLUDED

std::istream& readWords(std::istream&, std::vector<std::string>&);
std::vector<std::string>::size_type vectorSize(const std::vector<std::string>&);
void countAndPrintRepeatedWords(std::vector<std::string> words);

#endif // READWORDS_H_INCLUDED
