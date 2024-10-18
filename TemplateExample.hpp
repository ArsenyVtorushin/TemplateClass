#ifndef TEMPLATEEXAMPLE_HPP
#define TEMPLATEEXAMPLE_HPP
#include <iostream>
#include <string>

// ќбъ€вление шаблонного класса:
//
template<class Type> // параметров может быть много
class TemplateExample
{
public:
	TemplateExample() = default;
	TemplateExample(const Type& var) :var(var) {}

	void setVar(Type var)
	{
		this->var = var;
	}
	Type getVar()const // (работаем с копией возвращаемого объекта)
	{
		return this->var;
	}

	Type& getData() // (работаем с оригиналом возвращаемого объекта) мы можем получить ссылку на объект и изменить его через неЄ
	{
		return this->var;
	}
	const Type& getData() const // (работаем с оригиналом возвращаемого объекта) мы можем получить ссылку на объект, но не можем его изменить через эту ссылку
	{
		return this->var;
	}

private:
	Type var;
};

#endif // !TEMPLATEEXAMPLE_HPP
