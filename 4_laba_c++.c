/*�������� ��� ���������� ������ ����� ��  ��'��� �����:
������, �������������, ����, �����, ������� �� �������*/

#include <iostream>
#include <cmath>
using namespace std;

class Spatial_figures
{
public:
    virtual double Square()
    {
        return 0;
    }
    virtual int Get()
    {
        return 0;
    }
    virtual double Volume()
	{
		return 0;
	}
};
   
    class Rectangular : public Spatial_figures
	{
	public:
		virtual double Square() 
		{
			return 0;
		}
		virtual int Get()
		{
			return 0;
		}
		virtual double Volume()
		{
			return 0;
		}
	};
	
		class Cylinder : public Rectangular
        {
        public:
            int Get()
            {
                cout << "����i�� ���i�� ������: ";
                cin >> r;
                cout << "����i�� ������ : ";
                cin >> h;
                return 0;
            }
            //����������� ����� �� ��'��� �������
            double Square()
            {
                return 3.14*r*r;
            }
            double Volume()
            {
                return 3.14*r*r*h;
            }
        private:
            int r, h;
        };
        
        class Cube : public Rectangular
		{
		public:
            int Get()
            {
                cout << "����i�� ������� : ";
                cin >> a;
                return 0;
            }
            //����������� ����� �� ��'��� ����
            double Square()
            {
                return  6*a*a;
            }
            double Volume()
            {
                return a*a*a;
            }
        private:
            int a;
        };
        
        class Paralelepiped : public Rectangular
		{
		public:
            int Get()
            {
                cout << "����i�� ������� a: ";
                cin >> a;
                cout << "����i�� ������� b: ";
                cin >> b;
                cout << "����i�� ������� c: ";
                cin >> c;
                return 0;
            }
            //����������� ����� �� ��'��� �������������
            double Square()
            {
                return  2*(a*b+b*c+a*c);
            }
            double Volume()
            {
                return a*b*c;
            }
        private:
            int a, b, c;
        };



    class Spherical : public Spatial_figures
    {
    public:
        virtual int Get()
        {
            return 0;
        }
        virtual double Square()
        {
            return 0;
        }
        virtual double Volume()
        {
            return 0;
        }
    };


		class Cone : public Spherical
        {
        public:
            int Get()
            {
                cout << "����i�� ���i�� ������: ";
                cin >> r;
                cout << "����i�� ������: ";
                cin >> h;
                return 0;
            }
            //����������� ����� �� ��'��� ������
            double Square()
            {
                return 3.14*r*r;
            }
            double Volume()
            {
                return 3.14/3*r*r*h;
            }
        private:
            int r, h;
        };
		
				           
        class Sphere : public Spherical
        {
        public:
            int Get()
            {
                cout << "����i�� ���i��: ";
                cin >> r;
                return 0;
            }
            //����������� ����� �� ��'��� �����
            double Square()
            {
                return 4*3.14*r*r;
            }
            double Volume()
            {
                return 4 / 3 * 3.14*r*r*r;
            }
        private:
            int r;
        };
        
        
        class Elipsoid : public Spherical
        {
		public:
            int Get()
            {
                cout << "����i�� �i��i�� (���i��), a: ";
                cin >> a;
                cout << "����i�� �i��i�� (���i��), b: ";
                cin >> b;
                cout << "����i�� �i��i�� (���i��), c: ";
                cin >> c;
                return 0;
        	}
        	//����������� ����� �� ��'��� ������
            double Square()
            {
                return 2*3.14*a*(a+pow(b,2)/pow((pow(a,2)-pow(b,2)),1/2)*log((a+pow((pow(a,2)-pow(b,2)),1/2))/b));
            }
            double Volume()
            {
                return 4/3*3.14*a*b*c;
            }
        private:
            int a, b, c;
        };
		
int main()
{
	setlocale(LC_CTYPE, "ukr");
	
    cout << "�����i�� �i����:" << endl;
    cout << "1. �����" << endl;
    cout << "2. ���������i���" << endl;
    cout << "3. ���" << endl;
    cout << "4. �����" << endl;
    cout << "5. ��i����" << endl;
    cout << "6. ���i���" << endl;
    int choise;
    cin >> choise;
   
    if (choise == 1)
    {
    	//��������� ��������� �� ������ � ������� ������� �� ������ ����� ����� �������� 
        Spherical *ptr1 = new Cone;
        ptr1->Get();
        cout << "����� = " << (ptr1->Square()) << endl;
        cout << "��'�� = " << (ptr1->Volume()) << endl;
    }
    else if (choise == 2)
    {
        Rectangular *ptr2 = new Paralelepiped;
        ptr2->Get();
        cout << "����� = " << (ptr2->Square()) << endl;
        cout << "��'�� = " << (ptr2->Volume()) << endl;
    }
    else if (choise == 3)
    {
        Rectangular *ptr3 = new Cube;
        ptr3->Get();
        cout << "����� = " << (ptr3->Square()) << endl;
        cout << "��'�� = " << (ptr3->Volume()) << endl;
    }
    else if (choise == 4)
    {
        Spherical *ptr4 = new Sphere;
        ptr4->Get();
        cout << "����� = " << (ptr4->Square()) << endl;
        cout << "��'�� = " << (ptr4->Volume()) << endl;
    }
    else if (choise == 5)
    {
        Spherical *ptr5 = new Elipsoid;
        ptr5->Get();
        cout << "����� = " << (ptr5->Square()) << endl;
        cout << "��'�� = " << (ptr5->Volume()) << endl;
    }
	else if (choise == 6)
    {
        Rectangular *ptr6 = new Cylinder;
        ptr6->Get();
        cout << "����� = " << (ptr6->Square()) << endl;
        cout << "��'�� = " << (ptr6->Volume()) << endl;
    }
    else
        cout << "������������ �����. ��������� �����." <<endl;
    return 0;
}

