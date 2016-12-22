/*Програма для розрахунку деяких площі та  об'єму фігур:
конуса, паралелепіпеда, куба, сфери, еліпсоїда та циліндра*/

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
                cout << "Введiть радiус основи: ";
                cin >> r;
                cout << "Введiть висоту : ";
                cin >> h;
                return 0;
            }
            //Знаходження площі та об'єму Циліндра
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
                cout << "Введiть сторону : ";
                cin >> a;
                return 0;
            }
            //Знаходження площі та об'єму Куба
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
                cout << "Введiть сторону a: ";
                cin >> a;
                cout << "Введiть сторону b: ";
                cin >> b;
                cout << "Введiть сторону c: ";
                cin >> c;
                return 0;
            }
            //Знаходження площі та об'єму Паралелепіпеда
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
                cout << "Введiть радiус основи: ";
                cin >> r;
                cout << "Введiть висоту: ";
                cin >> h;
                return 0;
            }
            //Знаходження площі та об'єму Конуса
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
                cout << "Введiть радiус: ";
                cin >> r;
                return 0;
            }
            //Знаходження площі та об'єму Сфери
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
                cout << "Введiть пiввiсь (радiус), a: ";
                cin >> a;
                cout << "Введiть пiввiсь (радiус), b: ";
                cin >> b;
                cout << "Введiть пiввiсь (радiус), c: ";
                cin >> c;
                return 0;
        	}
        	//Знаходження площі та об'єму Елісоїда
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
	
    cout << "Виберiть фiгуру:" << endl;
    cout << "1. Конус" << endl;
    cout << "2. Паралелепiпед" << endl;
    cout << "3. Куб" << endl;
    cout << "4. Сфера" << endl;
    cout << "5. Елiпсоїд" << endl;
    cout << "6. Цилiндр" << endl;
    int choise;
    cin >> choise;
   
    if (choise == 1)
    {
    	//створення вказівника на фігуру і надання доступу до методів класу через покажчик 
        Spherical *ptr1 = new Cone;
        ptr1->Get();
        cout << "Площа = " << (ptr1->Square()) << endl;
        cout << "Об'єм = " << (ptr1->Volume()) << endl;
    }
    else if (choise == 2)
    {
        Rectangular *ptr2 = new Paralelepiped;
        ptr2->Get();
        cout << "Площа = " << (ptr2->Square()) << endl;
        cout << "Об'єм = " << (ptr2->Volume()) << endl;
    }
    else if (choise == 3)
    {
        Rectangular *ptr3 = new Cube;
        ptr3->Get();
        cout << "Площа = " << (ptr3->Square()) << endl;
        cout << "Об'єм = " << (ptr3->Volume()) << endl;
    }
    else if (choise == 4)
    {
        Spherical *ptr4 = new Sphere;
        ptr4->Get();
        cout << "Площа = " << (ptr4->Square()) << endl;
        cout << "Об'єм = " << (ptr4->Volume()) << endl;
    }
    else if (choise == 5)
    {
        Spherical *ptr5 = new Elipsoid;
        ptr5->Get();
        cout << "Площа = " << (ptr5->Square()) << endl;
        cout << "Об'єм = " << (ptr5->Volume()) << endl;
    }
	else if (choise == 6)
    {
        Rectangular *ptr6 = new Cylinder;
        ptr6->Get();
        cout << "Площа = " << (ptr6->Square()) << endl;
        cout << "Об'єм = " << (ptr6->Volume()) << endl;
    }
    else
        cout << "Неправильний номер. Спробуйте знову." <<endl;
    return 0;
}

