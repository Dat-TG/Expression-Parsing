#include <iostream>
#include<vector>
using namespace std;
int priority(char c)
{
	if (c == '+' || c == '-') return 1;
	return 2;
}
bool isDigit(char c)
{
	if (c >= '0' && c <= '9') return 1;
	return 0;
}
void process_op(vector<int>& val, char op)
{
	int r = val.back();
	val.pop_back();
	int l = val.back();
	val.pop_back();
	switch (op)
	{
	case '+':val.push_back(l + r); break;
	case '-':val.push_back(l - r); break;
	case'x':val.push_back(l * r); break;
	case '/':val.push_back(l / r); break;
	}
}
int evaluate(string s)
{
	vector <int> val;
	vector <char>op;
	for (int i = 0; i < s.size(); i++)
	{
		if (isDigit(s[i]))
		{
			int number = 0;
			while (i < s.size() && isDigit(s[i]))
			{
				number = number * 10 + s[i] - '0';
				i++;
			}
			i--;
			val.push_back(number);
		}
		else
		{
			char cur_op = s[i];
			if (!op.empty() &&priority(op.back())>=priority(cur_op))
			{
				process_op(val, op.back());
				op.pop_back();
			}
			op.push_back(cur_op);
		}
	}
	while (!op.empty())
	{
		process_op(val, op.back());
		op.pop_back();
	}
	return val.back();
}
int main()
{
	string s;
	cin >> s;
	cout << evaluate(s);
	return 0;
}