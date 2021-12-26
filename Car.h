#pragma once
#include "Vehicle.h"

//класс машина
class Car: public Vehicle
{
private:
	//поля класса
	std::string &transmission;				//коробка передач
	std::string &body;						//кузова
	std::string &drive_unit;					//привод

public:
	//методы класса
	void set_transmission(const std::string &new_transmission);	//указание коробки передач
	void set_body(const std::string &new_body);					//указание кузова
	void set_drive_unit(const std::string &new_drive_unit);		//указание привода

	std::string get_transmission() const;					//получение коробки передач
	std::string get_body() const;							//получение кузова
	std::string get_drive_unit() const;						//получение привода
	std::string get_string() const override;							//возвращает строку

	void set_props(const std::string &new_transmission, const std::string &new_body, const std::string &new_drive_unit);		//устанавливает все поля

	Car();																								//конструктор по-умолчанию
	Car(const std::string &new_transmission, const std::string &new_body, const std::string &new_drive_unit);				//конструктор с параметрами

};

