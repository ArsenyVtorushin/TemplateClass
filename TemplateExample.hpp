#ifndef TEMPLATEEXAMPLE_HPP
#define TEMPLATEEXAMPLE_HPP
#include <iostream>
#include <string>

// ���������� ���������� ������:
//
template<class Type> // ���������� ����� ���� �����
class TemplateExample
{
public:
	TemplateExample() = default;
	TemplateExample(const Type& var) :var(var) {}

	void setVar(Type var)
	{
		this->var = var;
	}
	Type getVar()const // (�������� � ������ ������������� �������)
	{
		return this->var;
	}

	Type& getData() // (�������� � ���������� ������������� �������) �� ����� �������� ������ �� ������ � �������� ��� ����� ��
	{
		return this->var;
	}
	const Type& getData() const // (�������� � ���������� ������������� �������) �� ����� �������� ������ �� ������, �� �� ����� ��� �������� ����� ��� ������
	{
		return this->var;
	}

private:
	Type var;
};

#endif // !TEMPLATEEXAMPLE_HPP
