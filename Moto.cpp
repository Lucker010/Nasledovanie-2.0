#include "Moto.h"
#include <iostream>

void Moto::set_engine_type(const std::string &new_engine_type)			//указание типа двигателя
{
	if (new_engine_type != "")
		this->engine_type = new_engine_type;
	else throw std::invalid_argument("Поле не может быть пустым");
}

void Moto::set_moto_type(const std::string &new_moto_type)			//указание типа мотоцикла
{
	if (new_moto_type != "")
		this->moto_type = new_moto_type;
	else throw std::invalid_argument("Поле не может быть пустым");
}

void Moto::set_intake_type(const std::string &new_intake_type)	//указание типа впуска
{
	if (new_intake_type != "")
		this->intake_type = new_intake_type;
	else throw std::invalid_argument("Поле не может быть пустым");
}

std::string Moto::get_engine_type() const					//получение типа двигателя
{
	return this->engine_type;
}

std::string Moto::get_moto_type() const								//получение типа мотоцикла
{
	return this->moto_type;
}
std::string Moto::get_intake_type() const				//получение типа впуска
{
	return this->intake_type;
}
std::string Moto::get_string() const				//возвращает строку
{
	std::string str;
	return str = "Тип двигателя: " + this->engine_type + "\n" +
		"Тип мотоцикла: " + this->moto_type + "\n" +
		"Тип впуска: " + this->intake_type + "\n";
}

void Moto::set_props(const std::string &new_engine_type, const std::string &new_moto_type, const std::string &new_intake_type)			//устанавливает все поля
{
	set_engine_type(new_engine_type);
	set_moto_type(new_moto_type);
	set_intake_type(new_intake_type);
}

Moto::Moto()																					//конструктор по-умолчанию
{
	set_props("Бензиновый инжекторный", "Чоппер", "Инжектор");
}

Moto::Moto(const std::string &new_engine_type, const std::string &new_moto_type, const std::string &new_intake_type)				//конструктор с параметрами
{
	set_props(new_engine_type, new_moto_type, new_intake_type);
}