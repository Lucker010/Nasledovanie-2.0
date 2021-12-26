#include "Vehicle.h"
#include <iostream>


void Vehicle::set_name(const std::string &new_name)			//�������� ������ �������� ����������
{
	if (new_name != "")									
		this->name = new_name;
	else throw std::invalid_argument("��� �� ����� ���� ������");
}

void Vehicle::set_max_speed(int new_max_speed)			//�������� ������������ ��������
{
	if (new_max_speed > 0)
		this->max_speed = new_max_speed;
	else throw std::invalid_argument("�������� �� ����� ���� �������������");
}

void Vehicle::set_fuel_type(const std::string &new_fuel_type)	//�������� ���� �������
{
	if (new_fuel_type != "")
		this->fuel_type = new_fuel_type;
	else throw std::invalid_argument("���� �� ����� ���� ������");
}

std::string Vehicle::get_name() const					//��������� �������� ����������
{
	return this->name;
}

int Vehicle::get_max_speed() const								//��������� ������������ ��������
{
	return this->max_speed;
}
std::string Vehicle::get_fuel_type() const				//��������� ���� �������
{
	return this->fuel_type;
}
std::string Vehicle::get_string() const				//���������� ������
{
	std::string str;
	return str = "�������� ����������: " + this->name + "\n" +
		"������������ ��������: " + std::to_string(this->max_speed) + "\n" +
		"��� �������: " + this->fuel_type + "\n";
}

void Vehicle::set_props(const std::string &new_name, int new_max_speed, const std::string &new_fuel_type)			//������������� ��� ����
{
	set_name(new_name);
	set_max_speed(new_max_speed);
	set_fuel_type(new_fuel_type);
}

Vehicle::Vehicle()																					//����������� ��-���������
{
	set_props("Nissan", 40, "������");
}

Vehicle::Vehicle(const std::string &new_name, int new_max_speed, const std::string &new_fuel_type)				//����������� � �����������
{
	set_props(new_name, new_max_speed, new_fuel_type);
}