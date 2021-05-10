#include <iostream>
#include <vector>
using namespace std;
bool delim(char c)
{
	return c == ' ';
}
bool is_op(char c)
{
	return (c == '+' || c == '-' || c == 'x' || c == '/');
}
int priority(char c)
{
	if (c == '+' || c == '-') return 1;
	else if (c == 'x' || c == '/') return 2;
	else return -1;
}
void process_op(vector<int>& val, char op)
{
	int r = val.back();
	val.pop_back();
	int l = val.back();
	val.pop_back();
	switch (op)
	{
	case '+': val.push_back(l + r); break;
	case '-': val.push_back(l - r); break;
	case 'x':val.push_back(l * r); break;
	case'/':val.push_back(l / r); break;
	}
}
bool is_digit(char c)
{
	return (c >= '0' && c <= '9');
}
int evaluate(string s)
{
	vector <int> val;
	vector <char> op;
	for (int i = 0; i < s.size(); i++)
	{
		if (delim(s[i])) continue;
		if (s[i] == '(') op.push_back(s[i]);
		else if (s[i] == ')')
		{
			while (op.back() != '(')
			{
				process_op(val, op.back());
				op.pop_back();
			}
			op.pop_back();
		}
		else if (is_op(s[i]))
		{
			char cur_op = s[i];
			if ((!op.empty()) && (priority(op.back()) >= priority(cur_op)))
			{
				process_op(val, op.back());
				op.pop_back();
			}
			op.push_back(cur_op);
		}
		else if (is_digit(s[i]))
		{
			int number = 0;
			while (i < s.size() && is_digit(s[i]))
			{
				number = number * 10 + s[i] - '0';
				i++;
			}
			i--;
			val.push_back(number);
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