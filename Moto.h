#pragma once
#include "Vehicle.h"						

//класс мотоцикл
class Moto :public Vehicle
{
private:
	//поля класса
	std::string engine_type;				// тип двигателя(V-образный, бензиновый инжекторный)
	std::string moto_type;					// тип мотоцикла(дорожный, спортивный и т.д.)
	std::string intake_type;				// тип впуска (инжектор)

public:
	//методы класса
	void set_engine_type(const std::string &new_engine_type);			//указание типа двигателя
	void set_moto_type(const std::string &new_moto_type);				//указание типа мотоцикла
	void set_intake_type(const std::string &new_intake_type);			//указание типа впуска

	std::string get_engine_type() const;				//получение типа двигателя
	std::string get_moto_type() const;					//получение	типа мотоцикла
	std::string get_intake_type() const;				//получение	типа впуска
	std::string get_string() const override;						//возвращает строку

	void set_props(const std::string &new_engine_type, const std::string &new_moto_type, const std::string &new_intake_type);			//устанавливает все поля

	Moto();																									//конструктор по-умолчанию
	Moto(const std::string &new_engine_type, const std::string &new_moto_type, const std::string &new_intake_type);				//конструктор с параметрами
};

