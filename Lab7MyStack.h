

#include<string>
#include<vector>
#include<list>
using namespace std;
using std::array;
void stringstringReversal1(string input);

void stringstringReversal2(string input);

void stringstringReversal3(string input);

void stringstringReversal4(string input);

class MYStack {
private:
	//vector<char> my_vec;
	list<char> my_vec;
public:
	bool isEmpty();
	void push(char& c);
	char pull();
};