#include "Car.h"
#include <iostream>

void Car::set_transmission(const std::string &new_transmission)	//указание коробки передач
{
	if (new_transmission != "")
		this->transmission = new_transmission;
	else throw std::invalid_argument("Поле не может быть пустым");
}

void Car::set_body(const std::string &new_body)					//указание кузова
{
	if (new_body != "")
		this->body = new_body;
	else throw std::invalid_argument("Поле не может быть пустым");
}

void Car::set_drive_unit(const std::string &new_drive_unit)		//указание привода
{
	if (new_drive_unit != "")
		this->drive_unit = new_drive_unit;
	else throw std::invalid_argument("Поле не может быть пустым");
}

std::string Car::get_transmission() const					//получение коробки передач
{
	return this->transmission;
}

std::string Car::get_body() const							//получение кузова
{
	return this->body;
}
std::string Car::get_drive_unit() const					//получение привода
{
	return this->drive_unit;
}
std::string Car::get_string() const							//возвращает строку
{
	std::string str;
	return str = "Коробка передач: " + this->transmission + "\n" +
		"Кузов: " + this->body + "\n" +
		"Привод: " + this->drive_unit + "\n";
}

void Car::set_props(const std::string &new_transmission, const std::string &new_body, const std::string &new_drive_unit)			//устанавливает все поля
{
	set_transmission(new_transmission);
	set_body(new_body);
	set_drive_unit(new_drive_unit);
}

Car::Car()																								//конструктор по-умолчанию
{
	set_props("АКПП", "Купе", "Задний");
}

Car::Car(const std::string &new_transmission, const std::string &new_body, const std::string &new_drive_unit)				//конструктор с параметрами
{
	set_props(new_transmission, new_body, new_drive_unit);
}