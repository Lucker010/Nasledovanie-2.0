#include "Car.h"
#include <iostream>

void Car::set_transmission(const std::string &new_transmission)	//�������� ������� �������
{
	if (new_transmission != "")
		this->transmission = new_transmission;
	else throw std::invalid_argument("���� �� ����� ���� ������");
}

void Car::set_body(const std::string &new_body)					//�������� ������
{
	if (new_body != "")
		this->body = new_body;
	else throw std::invalid_argument("���� �� ����� ���� ������");
}

void Car::set_drive_unit(const std::string &new_drive_unit)		//�������� �������
{
	if (new_drive_unit != "")
		this->drive_unit = new_drive_unit;
	else throw std::invalid_argument("���� �� ����� ���� ������");
}

std::string Car::get_transmission() const					//��������� ������� �������
{
	return this->transmission;
}

std::string Car::get_body() const							//��������� ������
{
	return this->body;
}
std::string Car::get_drive_unit() const					//��������� �������
{
	return this->drive_unit;
}
std::string Car::get_string() const							//���������� ������
{
	std::string str;
	return str = "������� �������: " + this->transmission + "\n" +
		"�����: " + this->body + "\n" +
		"������: " + this->drive_unit + "\n";
}

void Car::set_props(const std::string &new_transmission, const std::string &new_body, const std::string &new_drive_unit)			//������������� ��� ����
{
	set_transmission(new_transmission);
	set_body(new_body);
	set_drive_unit(new_drive_unit);
}

Car::Car()																								//����������� ��-���������
{
	set_props("����", "����", "������");
}

Car::Car(const std::string &new_transmission, const std::string &new_body, const std::string &new_drive_unit)				//����������� � �����������
{
	set_props(new_transmission, new_body, new_drive_unit);
}