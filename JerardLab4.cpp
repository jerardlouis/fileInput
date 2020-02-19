/*
=========================================================================================================
Jerard Dayanghirang Guevarra
CS280
February 10th, 2020
Lab4
=========================================================================================================
*/
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
using namespace std;


/*
Function to count lines, words, characters, and digits
Takes the pre-existing variables for each counter and reads line by line to increment the counter variables
*/
void count(int& lineCount, int& wordCount, int& charCount, int& digitCount, string line){
    lineCount = 0, wordCount = 0, charCount = 0, digitCount = 0;
    string word;
    stringstream ss(line);
    while(getline(cin,line)){
        lineCount++;
        charCount += line.size();

        stringstream ss(line);
        while(getline(ss,word,' ')){
            wordCount++;
        }
        
    }
    for(int i = 0; i < line.length(); i++){
        if(isdigit(line[i])){
            digitCount ++;
        }
    }
    //Adds newline characters to charCount since newlines are skipped by the .size() function
    charCount += lineCount;
    
}
int main(int argc, char*argv[]){
    //Initialize counting variables
    int wordCount, lineCount, charCount, digitCount;
    string input, line;
	ifstream infile;
    if(argc > 1){
	    infile.open(argv[1]);
    }
    if(argc<2){
    	count(lineCount,wordCount,charCount,digitCount,line);
    }
    //Check if file can be opened
    if(infile.is_open() == false) {
        cout << "CANNOT OPEN " << argv[1] << endl;
        exit(0);
        return -1;
    }

    //Call function to get results
    count(lineCount,wordCount,charCount,digitCount,line);
    //Display results
    cout << "LINES: " << lineCount << endl;
    cout << "WORDS: " << wordCount << endl;
    cout << "CHARS: " << charCount << endl;
    cout << "DIGITS: " << digitCount << endl;
    infile.close();

    return 0;
}

