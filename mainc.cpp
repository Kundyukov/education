#include <iostream>
using namespace std;

// ������� �����
class Base
{
public:
    // virtual - ������� ����������� �������
    virtual void PrintInfo()
    {
        cout << "Base." << endl;
    }
};

// �����, �������������� �� ������ Base,
// �����: ����� ������ ���� ����������� public
class Derived : public Base
{
public:
    virtual void PrintInfo() override // ������������ override ����� ���������
    {
        cout << "Derived." << endl;
    }
};

int main()
{
    // 1. ������� ���������� �������� � ������������ ������
    Base obj1;
    Derived obj2;

    // 2. �������� ��������� �� ������� �����
    Base* p;

    // 3. ������������ �������: ��������� �� ������� ����� ����� ���������
    //    �� ����� ��������� �������� � ������������ �� ���� ������.
    //    ���� ��������������� �����������.
    // 3.1. ���������� ��������� p �� ��������� �������� ������ obj1
    //    � ������� PrintInfo()
    p = &obj1;
    p->PrintInfo(); // Base

    // 3.2. ���������� ��������� p �� ��������� ������������ ������
    //      � ������� PrintInfo()
    p = &obj2;
    p->PrintInfo(); // Derived - ��� ���� ����������� (����� virtual)
}