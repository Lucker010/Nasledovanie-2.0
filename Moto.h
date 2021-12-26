#pragma once
#include "Vehicle.h"						

//����� ��������
class Moto :public Vehicle
{
private:
	//���� ������
	std::string engine_type;				// ��� ���������(V-��������, ���������� �����������)
	std::string moto_type;					// ��� ���������(��������, ���������� � �.�.)
	std::string intake_type;				// ��� ������ (��������)

public:
	//������ ������
	void set_engine_type(const std::string &new_engine_type);			//�������� ���� ���������
	void set_moto_type(const std::string &new_moto_type);				//�������� ���� ���������
	void set_intake_type(const std::string &new_intake_type);			//�������� ���� ������

	std::string get_engine_type() const;				//��������� ���� ���������
	std::string get_moto_type() const;					//���������	���� ���������
	std::string get_intake_type() const;				//���������	���� ������
	std::string get_string() const override;						//���������� ������

	void set_props(const std::string &new_engine_type, const std::string &new_moto_type, const std::string &new_intake_type);			//������������� ��� ����

	Moto();																									//����������� ��-���������
	Moto(const std::string &new_engine_type, const std::string &new_moto_type, const std::string &new_intake_type);				//����������� � �����������
};

