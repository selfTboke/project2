/*
* test2.h
*
*  Created on: Sep 9, 2017
*      Author: moon
*/
#ifndef test2_H_
#define test2_H_
#include <string>

class test2 {
public:
	test2();
	virtual ~test2();
private:
	std::string fileName;
public:
	/**
	* @function:Setting value of fileName
	*/
	void setFileName(std::string fileName);
	/**
	* @function:Counting the number of character
	* @return:If success,return the number of character,else return -1
	*/
	int computingChar(void);
	/**
	* @function:Counting the number of word
	* @return:If success,return the number of word,else return -1
	*/
	int computingWord(void);
	/**
	* @function:Counting the number of line
	* @return:If success,return the number of line,else return -1
	*/
	int computingLine(void);
};

#endif /* test2_H_ */
