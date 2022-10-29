/*

#include <iostream>
#include <string>
#include <time.h>
using namespace std;

class Car {
private:
	int speed;
	int gear;
	string color;
public:
	int getSpeed();
	void setSpeed(int s);
	int getGear();
	void setGear(int g);
	string getColor();
	void setColor(string c);

	void speedUp();
	void speedDown();
	void init(int s, int gear, string c);
	void show();
};

int Car::getSpeed() {
	return speed;
}
void Car::setSpeed(int s) {
	speed = s;
}
int Car::getGear() {
	return gear;
}
void Car::setGear(int g) {
	gear = g;
}
string Car::getColor() {
	return color;
}
void Car::setColor(string c) {
	color = c;
}
void Car::speedUp() {
	speed += 10;
}
void Car::speedDown() {
	speed -= 10;
}
void Car::init(int s, int g, string c)
{
	speed = s;
	gear = g;
	color = c;
}

void Car::show() {
	cout << "==============" << endl;
	cout << "�ӵ�:   " << speed << endl;
	cout << "���:   " << gear << endl;
	cout << "����:   " << color << endl;
	cout << "==============" << endl;
	}


void main() {
	Car car1, car2;

	srand(time(0));
	car1.init(50, 3, "blue");
	car1.show();

	car2.init(rand() % 100, 4, "red");
	car2.show();

	if (car1.getSpeed() < car2.getSpeed()) {
		cout << "car2 �� �¸�" << endl;
		cout << car2.getColor() << endl;

	}
	else if (car1.getSpeed() > car2.getSpeed()) {
		cout << "car1�� �¸�" << endl;
	}
	else
	{
		cout << "car1�� car2�� ���ÿ� ���Խ��ϴ�!" << endl;
	}



}*/
/*
#include<iostream>
#include<string>
using namespace std;

class Date {
private:
	int year;
	int month;
	int day;
public:
	int getYear();
	void setYear(int y);
	int getMonth();
	void setMonth(int m);
	int getDay();
	void setDay(int d);
	void print();
};
int Date::getYear() {
	return year;
}
void Date::setYear(int y) {
	year = y;
}
int Date::getMonth() {
	return month;
}
void Date::setMonth(int m) {
	month = m;
}
int Date::getDay() {
	return day;
}
void Date::setDay(int d) {
	day = d;
}
void Date::print() {
	cout << year << "��" << month << "��" << day << "��" << endl;
}
void main() {
	Date date;
	date.setYear(2022);
	date.setMonth(7);
	date.setDay(19);
	date.print();
}*/
/*
#include<iostream>
#include<string>
using namespace std;

class Product {
private:
	int id;
	string name;
	int price;
public:
	void input();
	void print();
	bool isCheaper(Product other);
};
void Product::input() {
	cout << "��ǰ�� �Ϸù�ȣ: ";
	cin >> id;
	cout << "��ǰ�� �̸�: ";
	cin >> name;
	cout << "��ǰ�� ����: ";
	cin >> price;
}
void Product::print() {
	cout << "��ǰ��ȣ" << id << endl;
	cout << "��ǰ�� �̸�" << name << endl;
	cout << "��ǰ�� ����" << price << endl;
}
bool Product::isCheaper(Product other)
{
	if (price < other.price)
		return true;
	else
		return false;
}

int main()
{
	Product p1, p2;
	p1.input();
	p2.input();
	if (p1.isCheaper(p2)) {
		p2.print();
		cout << "�� �� �Դϴ�." << endl;
	}
	else {
		p2.print();
		cout << "�� �� �Դϴ�." << endl;
	}
}*/

//-----------------------------�ǽ�1 ũ��Ŀ-----------------------------

/*
#include <iostream>

using namespace std;

class cracker {
private:
	int crackerNum;
	int price;
	int cal;
public:
	int getPrice();
	int getCal();
	void question();
	void answer();
};

int cracker::getPrice() {
	return price;
}
int cracker::getCal() {
	return cal;
}
void cracker::question() {
	cout << "�� ũ��Ŀ ���ݰ� ������ �Է��ϼ���" << endl;
	cin >> price >> cal;
}
void cracker::answer() {
	cout << "�� ũ��Ŀ\t" << "����: " << getPrice() << "Į�θ�: " << getCal() << endl;

}

void main() {
	cracker crackers[5];

	for (int i = 0; i < 5; i++) {
		cout << i+1;
		crackers[i].question();
	}
	for (int i = 0; i < 5; i++) {
		cout << i+1;
		crackers[i].answer();
	}

}
*/
//�ǽ�2 ���Ի��
/*
#include <iostream>
#include <string>
using namespace std;

class stdScore {
private:
	string name;
	double g;
	int eng;
public:
	void input();
	double getg();
	int geteng();
	string getname();
};

void stdScore::input() {
	cin >> name >> g >> eng;
}

double stdScore::getg() {
	return g;
}
int stdScore::geteng(){
	return eng;
}
string stdScore::getname(){
	return name;
}

int main() {
	stdScore students[5];
	cout << "�̸�, ����, ���������� �Է��ϼ���.\n";

	for (int i = 0; i < 5; i++) {

		students[i].input();
	}

	cout<<"\n\n����Ʈ �����?\n"<<endl;
	for(int i=0;i<5;i++){
		if(((students[i].getg())>(4.0) || students[i].getg()==4.0)&&
		((students[i].geteng())>(900)||students[i].getg()==900)){
			cout<<students[i].getname()<<endl;

		}
	}


return 0;
}

*/

//--------------�ǽ�3 Ŀ�Ǹӽ�-----------------
/*
#include <iostream>
using namespace std;

class CoffeeMachine {
private:
	int coffee = 0;
	int water = 0;
	int sugar = 0;
public:
	int getcoffee();
	void putcoffee(int c);
	int getwater();
	void putwater(int w);
	int getsugar();
	void putsugar(int s);
	void print();

};

int CoffeeMachine::getcoffee() {
	return coffee;
}
int CoffeeMachine::getwater() {
	return water;
}
int CoffeeMachine::getsugar() {
	return sugar;
}
void CoffeeMachine::putcoffee(int c) {
	coffee = c;
}
void CoffeeMachine::putwater(int w) {
	water = w;
}
void CoffeeMachine::putsugar(int s) {
	sugar = s;
}
void CoffeeMachine::print() {
	cout << coffee << " coffee\t" << water << " water\t"
		<< sugar << " sugar" << endl;
}
int main() {
	CoffeeMachine espresso;
	espresso.putcoffee(1);
	espresso.putwater(1);
	espresso.putsugar(0);

	CoffeeMachine americano;
	americano.putcoffee(1);
	americano.putwater(2);
	americano.putsugar(0);

	CoffeeMachine sugarcoffee;
	sugarcoffee.putcoffee(1);
	sugarcoffee.putwater(2);
	sugarcoffee.putsugar(1);
	cout << "------------Ŀ�Ǹ� �ֹ��ϼ���----------" << endl;
	cout << "1:espresso		 2 : americano		 3 : sugarcoffee ";
	
	int coffeenum = 0;
	cin >> coffeenum;

	switch (coffeenum) {
	case 1:
		espresso.print();
		break;

	case 2:
		americano.print();
		break;

	case 3:
		sugarcoffee.print();
		break;

	default:
		cout << "1:espresso 2:americano 3:sugarcoffee" << endl;
	}




	return 0;
}

*/
/*
#include <iostream>
using namespace std;

void main() {
	char shortString1[] = { 'a','b','c','\0'}; //null���� �� ���� �����Ⱚ ����.
	cout << shortString1 << endl;



}
*/
/*
#include <iostream>
using namespace std;

void main() {
	char ourString[5] = "Hi";
	cout << ourString << endl;
	int index = 0;
	while (ourString[index] != '\0')
	{
		ourString[index] = 'X';
		index++;
	}
	cout << ourString << endl;

}
*/
/*
#include <iostream>
using namespace std;

void main() {
	char happyString[7] = "DoBeDo";
	cout << happyString[6] << endl;
	cout << happyString << endl;
	happyString[6] = 'Z';
	cout << happyString[6] << endl;
	cout << happyString << endl;

}
*/
/*
#include <iostream>
using namespace std;

void main() {
	char aString[6]="Hello";//'='�����ڴ� c-string ���� ���� ����� �� �ִ�.



	*/
	/*
	#include <iostream>
	using namespace std;

	void main() {
		char a[80], b[80];
		cout << "Enter input:";
		cin >> a >> b;
		cout << a << b << "END OF OUTPUT\n";

	}*/
	/*
	#include <iostream>
	using namespace std;

	void main() {
		char a[80];
		cout << "Enter input:";
		cin.getline(a, 5);
		cout << a << "End of output\n";

	}
	*/
	/*
	#include <iostream>
	using namespace std;

	void main() {
		cout << "Enter a line of input and I will echo it:\n";
		char symbol;
		do {
			cin.get(symbol);
			cout << symbol;

		} while (symbol != '\n');
		cout << "That's all for this denomstration.\n";


	}*/
	/*
	#include <iostream>
	#include <string>
	using namespace std;

	void main() {
		string phrase;
		string adjective("fried"), noun("potato");
		string wish = "Bon appetite!";

		phrase = "I love " + adjective + " " + noun + "!";
		cout << phrase << endl
			<< wish << endl;

	}
	*/

	//strlen �Լ� �����ϱ�
	/*
	#include <iostream>
	#include <cstring>
	using namespace std;
	int strLen(const char str[]);

	void main() {
		char myString[10] = "dobedo";
		cout << strlen(myString) << endl;
		cout << strLen(myString) << endl;

	}

	int strLen(const char str[]) {
		int i = 0;
		for (int count = 0; str[count] != '\0'; count++) {
			i++;
		}
		return i;
	}
	*/

