#include "Moto.h"
#include <iostream>

void Moto::set_engine_type(const std::string &new_engine_type)			//�������� ���� ���������
{
	if (new_engine_type != "")
		this->engine_type = new_engine_type;
	else throw std::invalid_argument("���� �� ����� ���� ������");
}

void Moto::set_moto_type(const std::string &new_moto_type)			//�������� ���� ���������
{
	if (new_moto_type != "")
		this->moto_type = new_moto_type;
	else throw std::invalid_argument("���� �� ����� ���� ������");
}

void Moto::set_intake_type(const std::string &new_intake_type)	//�������� ���� ������
{
	if (new_intake_type != "")
		this->intake_type = new_intake_type;
	else throw std::invalid_argument("���� �� ����� ���� ������");
}

std::string Moto::get_engine_type() const					//��������� ���� ���������
{
	return this->engine_type;
}

std::string Moto::get_moto_type() const								//��������� ���� ���������
{
	return this->moto_type;
}
std::string Moto::get_intake_type() const				//��������� ���� ������
{
	return this->intake_type;
}
std::string Moto::get_string() const				//���������� ������
{
	std::string str;
	return str = "��� ���������: " + this->engine_type + "\n" +
		"��� ���������: " + this->moto_type + "\n" +
		"��� ������: " + this->intake_type + "\n";
}

void Moto::set_props(const std::string &new_engine_type, const std::string &new_moto_type, const std::string &new_intake_type)			//������������� ��� ����
{
	set_engine_type(new_engine_type);
	set_moto_type(new_moto_type);
	set_intake_type(new_intake_type);
}

Moto::Moto()																					//����������� ��-���������
{
	set_props("���������� �����������", "������", "��������");
}

Moto::Moto(const std::string &new_engine_type, const std::string &new_moto_type, const std::string &new_intake_type)				//����������� � �����������
{
	set_props(new_engine_type, new_moto_type, new_intake_type);
}