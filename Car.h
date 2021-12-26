#pragma once
#include "Vehicle.h"

//����� ������
class Car: public Vehicle
{
private:
	//���� ������
	std::string &transmission;				//������� �������
	std::string &body;						//������
	std::string &drive_unit;					//������

public:
	//������ ������
	void set_transmission(const std::string &new_transmission);	//�������� ������� �������
	void set_body(const std::string &new_body);					//�������� ������
	void set_drive_unit(const std::string &new_drive_unit);		//�������� �������

	std::string get_transmission() const;					//��������� ������� �������
	std::string get_body() const;							//��������� ������
	std::string get_drive_unit() const;						//��������� �������
	std::string get_string() const override;							//���������� ������

	void set_props(const std::string &new_transmission, const std::string &new_body, const std::string &new_drive_unit);		//������������� ��� ����

	Car();																								//����������� ��-���������
	Car(const std::string &new_transmission, const std::string &new_body, const std::string &new_drive_unit);				//����������� � �����������

};

