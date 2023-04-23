#pragma once
using namespace std;
#include <string>
#include <map>
class Menu
{
public:
	Menu(string filePath);
	void printWordFreq(string word);
	void printPurchasedItemsFreq();
	void printPurchasedItemsHistogram();
	void readFile(string fileName);
	void writeFile(string fileName);
private:
	map<string, int> freqMap;
};

