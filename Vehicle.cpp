#include "Vehicle.h"
#include <iostream>


void Vehicle::set_name(const std::string &new_name)			//указание нового названия транспорта
{
	if (new_name != "")									
		this->name = new_name;
	else throw std::invalid_argument("Имя не может быть пустым");
}

void Vehicle::set_max_speed(int new_max_speed)			//указание максимальной скорости
{
	if (new_max_speed > 0)
		this->max_speed = new_max_speed;
	else throw std::invalid_argument("Скорость не может быть отрицательной");
}

void Vehicle::set_fuel_type(const std::string &new_fuel_type)	//указание типа топлива
{
	if (new_fuel_type != "")
		this->fuel_type = new_fuel_type;
	else throw std::invalid_argument("Поле не может быть пустым");
}

std::string Vehicle::get_name() const					//получение названия транспорта
{
	return this->name;
}

int Vehicle::get_max_speed() const								//получение максимальной скорости
{
	return this->max_speed;
}
std::string Vehicle::get_fuel_type() const				//получение типа топлива
{
	return this->fuel_type;
}
std::string Vehicle::get_string() const				//возвращает строку
{
	std::string str;
	return str = "Название транспорта: " + this->name + "\n" +
		"Максимальная скорость: " + std::to_string(this->max_speed) + "\n" +
		"Тип топлива: " + this->fuel_type + "\n";
}

void Vehicle::set_props(const std::string &new_name, int new_max_speed, const std::string &new_fuel_type)			//устанавливает все поля
{
	set_name(new_name);
	set_max_speed(new_max_speed);
	set_fuel_type(new_fuel_type);
}

Vehicle::Vehicle()																					//конструктор по-умолчанию
{
	set_props("Nissan", 40, "Дизель");
}

Vehicle::Vehicle(const std::string &new_name, int new_max_speed, const std::string &new_fuel_type)				//конструктор с параметрами
{
	set_props(new_name, new_max_speed, new_fuel_type);
}