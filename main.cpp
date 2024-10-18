#include "TemplateExample.hpp"

//   ��������� ������
// ��������� ������ ��� � ������� ������ ���� ������� � �����
// ������� �����. �� ����� ��������� �� ���������� � ����������� �� ���
// ���� ������ �������� ���������� � ������ ����� ����
// 
// ������ �������� ������ ����� ������� ��������� �����, �� ���������
// ������ ����� ������ ������������
//

class Demo
{
public:
	template<class Type>
	void Print(const Type& obj)
	{
		std::cout << obj;
	}


	// ��� ������ ������!
	//
	/*template<class Type>
	virtual void Print(const Type& obj)
	{
		std::cout << obj;
	}*/

};


int main()
{
	TemplateExample<int> obj;

	return 0;
}