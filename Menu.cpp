#include "Menu.h"
#include <iostream>     // std::cout
#include <fstream>
#include <map>
Menu::Menu(string filePath)
{
    freqMap = {};    //map container for grocery items
	
}



void Menu::readFile(string fileName) {
    ifstream inputFile;
    inputFile.open(fileName);

    if (inputFile.is_open()) {       //opens file and adds items to the map
        string item;
        while (inputFile >> item) {
            freqMap[item]++;
        }
        inputFile.close();

    }
    else {
        cout << "File unopenable" << endl;
    }
}

    void Menu::writeFile(string fileName) {   //creates backup file to store program data on for review
    ofstream outputFile;
    outputFile.open("frequency.dat");

    if (outputFile.is_open()) {
        for (auto item : freqMap) {
            outputFile << item.first << " " << item.second << endl;
        }
        outputFile.close();
    }
    else {
        cout << "File unopenable" << endl;
    }
}

void Menu::printWordFreq(string word)
{
    cout << freqMap[word] << endl;    //prints a specific item from the map
    
}

void Menu::printPurchasedItemsFreq()
{
    for (auto freq: freqMap) {         //prints frequency of all purchased items
        cout << freq.first << " " << freq.second << endl;
    }
}

void Menu::printPurchasedItemsHistogram()
{
    for (auto freq : freqMap) {        //prints histogram version of purchased items
        cout << freq.first << " " << string(freq.second, '*') << endl;
    }
    

}
