#include "TemplateExample.hpp"

//   Шаблонные классы
// Шаблонные классы как и функции должны быть описаны в одном
// кодовом файле. Их можно разделить на объявление и определение но при
// этом нельзя выносить реализацию в другие файлы кода
// 
// Внутри обычного класса можно сделать шаблонный метод, но запрещено
// делать такие методы виртуальными
//

class Demo
{
public:
	template<class Type>
	void Print(const Type& obj)
	{
		std::cout << obj;
	}


	// Так делать нельзя!
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