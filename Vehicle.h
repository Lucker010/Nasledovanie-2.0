#pragma once

#include <string>

//класс транспорт
class Vehicle
{
private:
	//поля класса
	std::string name;				//название транспорта
	int max_speed;					//максимальная скорость
	std::string fuel_type;			//тип топлива

public:
	//методы класса
	void set_name(const std::string &new_name);			//указание нового названия транспорта
	void set_max_speed(int new_max_speed);			//указание максимальной скорости
	void set_fuel_type(const std::string &new_fuel_type);	//указание типа топлива

	std::string get_name() const;					//получение названия транспорта
	int get_max_speed() const;						//получение максимальной скорости
	std::string get_fuel_type() const;				//получение типа топлива
	virtual std::string get_string() const;					//возвращает строку
	
	void set_props(const std::string &new_name, int new_max_speed, const std::string &new_fuel_type);			//устанавливает все поля

	Vehicle();																					//конструктор по-умолчанию
	Vehicle(const std::string &new_name, int new_max_speed, const std::string &new_fuel_type);				//конструктор с параметрами

};

//добавить, изменить поля
// virtual???