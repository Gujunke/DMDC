//Calculator.h: ͷ�ļ�
#include <stack>
#include <vector>
#include <string>
using namespace std;

//��������
class Calculator
{
public:
	Calculator();
	void getFormat();					//���ʽ�Զ����׼��ʽ��
	int getPrior(char c);				//��ȡ�����������ȼ�
	void getPostfix();					//��׺���ʽת��
	void calResult();					//�����׺���ʽ
	void calculate();					//���㷽��
	double getResult();					//��ȡ���

	string operatorSym;					//�������
	string infix;						//���ʽ����

private:
	vector<string> postfix;				//��׺���ʽ����
	stack<char> symStack;				//����ջ
	stack<double> figStack;				//����ջ
	string stdInfix;					//�Զ����׼��ʽ�����ʽ
	double result;						//���ռ�����
};
