#include "Human.h"
#include "Parent.h"
#include "Child.h"
using namespace std;

int main() {
	Parent Homer = new Parent();
	Parent March = new Parent();

	Child Lisa = new Child(March, Homer);
	Child Bart = new Child(March, Homer);
	Child Maggie = new Child(March, Homer);

	Homer.setName("Homer");
	Homer.setAge(36);
	Homer.setSex('M');
	Homer.work("Safety Inspector");

	March.setName("March");
	March.setAge(34);
	March.setSex('F');
	March.work("Housewife");

	Lisa.setAge(12);
	Lisa.setSex('F');
	Lisa.work("Students");

	Bart.setAge(10);
	Bart.setSex('M');
	Bart.work("Student");

	Maggie.setAge(3);
	Maggie.setSex('F');
	Maggie.work("Play");

	March.setChildName("Maggie", Maggie);
	Homer.setChildName("Bart", Bart);
	Homer.setChildName("Lisa", Lisa);

	cout << Homer.getName() << endl;
	cout << Homer.getAge() << endl;
	cout << Homer.getSex() << endl;
	cout << Homer.work << endl;

	cout << Lisa.getName() << endl;
	cout << Lisa.getAge() << endl;
	cout << Lisa.getSex() << endl;
	cout << Lisa.work << endl;

	cout << Maggie.getName() << endl;
	cout << Maggie.getAge() << endl;
	cout << Maggie.getSex() << endl;
	cout << Maggie.work << endl;

}

#ifndef HUMAN_H_
#define HUMAN_H_
#include <string>
#include <iostream>
using namespace std;

class Human {

private:
	string name;
	int age;
	char sex;
	Human();

protected:
	Human(string name, int age, char sex);

public:
	void setName(string name);
	void setAge(int age);
	void setSex(char sex);
	string getName();
	int getAge();
	char getSex();
	virtual void work();
	virtual ~Human();
};

#endif /* HUMAN_H_ */

#include "Human.h"

Human::Human() {
	name = "No Name";
	age = 0;
	sex = 'X';
}

Human::Human(string names, int ages, char sexes){
	name = names;
	age = ages;
	sex = sexes;
}

void Human::setName(string names){
	name = names;
}

void Human::setAge(int ages){
	age = ages;
}

void Human::setSex(char sexes){
	sex = sexes;
}

string Human::getName(){
	return name;
}

int Human::getAge(){
	return age;
}

char Human::getSex(){
	return sex;
}

#ifndef CHILD_H_
#define CHILD_H_
#include "Human.h"
#include "Parent.h"

class Child: public Human {

private:
	Parent Mom;
	Parent Dad;
	Child();
	string work;

public:
	Child(Parent Mom, Parent Dad);
	void Work(string work);
};

#endif /* CHILD_H_ */

#include "Child.h"

void Child::Work(string works){
	work = works;
}


#ifndef PARENT_H_
#define PARENT_H_
#include "Human.h"
#include "Child.h"
#include <vector>
#include <iostream>

using namespace std;

class Parent: public Human{

private:
	vector<Child> children;
	string work;

public:
	Parent();
	void setChild(Human child);
	Human getChild();
	void setChildName(string name, Human child);
};

#endif /* PARENT_H_ */


#include "Parent.h"
#include "Child.h"
#include "Human.h"
#include <vector>

Parent::Parent(){
	vector<Child> children;
}
void Parent::setChild(Human child){
	children >> child;
}

Human Parent::getChild(){
	return children[0];
}

void Parent::setChildName(string name, Human child){
	child.setName(name);
}

Parent::Work(string Work){
	work = Work;
}
