#pragma once

#include <string>

//����� ���������
class Vehicle
{
private:
	//���� ������
	std::string name;				//�������� ����������
	int max_speed;					//������������ ��������
	std::string fuel_type;			//��� �������

public:
	//������ ������
	void set_name(const std::string &new_name);			//�������� ������ �������� ����������
	void set_max_speed(int new_max_speed);			//�������� ������������ ��������
	void set_fuel_type(const std::string &new_fuel_type);	//�������� ���� �������

	std::string get_name() const;					//��������� �������� ����������
	int get_max_speed() const;						//��������� ������������ ��������
	std::string get_fuel_type() const;				//��������� ���� �������
	virtual std::string get_string() const;					//���������� ������
	
	void set_props(const std::string &new_name, int new_max_speed, const std::string &new_fuel_type);			//������������� ��� ����

	Vehicle();																					//����������� ��-���������
	Vehicle(const std::string &new_name, int new_max_speed, const std::string &new_fuel_type);				//����������� � �����������

};

//��������, �������� ����
// virtual???