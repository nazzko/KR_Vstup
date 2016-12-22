#include <iostream>
#include <cmath>


using namespace std;


class Prostorowi
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
    virtual double Extend()
		{
			return 0;
		}
};
   
    class Pryamokytni : public Prostorowi
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
		virtual double Extend()
		{
			return 0;
		}

	};
	
	
		class Cylinder : public Pryamokytni
        {
        public:
            int Get()
            {
                cout << "Vvedu radius: ";
                cin >> r;
                cout << "Vvedu vusoty: ";
                cin >> h;
                return 0;
            }
            double Square()
            {
                return 3.14*r*r;
            }
            double Extend()
            {
                return 3.14*r*r*h;
            }
        private:
            int r, h;
        };
        
        class Cube : public Pryamokytni
		{
			
		public:
            int Get()
            {
                cout << "Vvedu storonu : ";
                cin >> a;
                return 0;
            }
            double Square()
            {
                return  6*a*a;
            }
            double Extend()
            {
                return a*a*a;
            }
        private:
            int a;
        };
        
        class Paralelepiped : public Pryamokytni
		{
			
		public:
            int Get()
            {
                cout << "Vvedu storonu a: ";
                cin >> a;
                cout << "Vvedu storonu b: ";
                cin >> b;
                cout << "Vvedu storonu c: ";
                cin >> c;
                return 0;
            }
            double Square()
            {
                return  2*(a*b+b*c+a*c);
            }
            double Extend()
            {
                return a*b*c;
            }
        private:
            int a, b, c;
        };



    class Sferuchni : public Prostorowi
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
        virtual double Extend()
        {
            return 0;
        }
    };


		class Cone : public Sferuchni
        {
        	
        public:
            int Get()
            {
                cout << "Vvedu radius: ";
                cin >> r;
                cout << "Vvedu vusoty: ";
                cin >> h;
                return 0;
            }
            double Square()
            {
                return 3.14*r*r;
            }
            double Extend()
            {
                return 3.14/3*r*r*h;
            }
        private:
            int r, h;
        };
		
				           
        class Sphere : public Sferuchni
        {
        public:
            int Get()
            {
                cout << "Vvedu radius: ";
                cin >> r;
                return 0;
            }
            double Square()
            {
                return 4*3.14*r*r;
            }


            double Extend()
            {
                return 4 / 3 * 3.14*r*r*r;
            }
        private:
            int r;
        };
        
        
        class Elipsoid : public Sferuchni
        {
		public:
            int Get()
            {
                cout << "Vvedu pivvis (radius), a: ";
                cin >> a;
                cout << "Vvedu pivvis (radius), b: ";
                cin >> b;
                cout << "Vvedu pivvis (radius), c: ";
                cin >> c;
                return 0;
        	}
            double Square()
            {
                return 2*3.14*a*(a+pow(b,2)/pow((pow(a,2)-pow(b,2)),1/2)*log((a+pow((pow(a,2)-pow(b,2)),1/2))/b));
            }
            double Extend()
            {
                return 4/3*3.14*a*b*c;
            }
        private:
            int a, b, c;
        };
		
int main()
{
    cout << "Vuberu figyry:" << endl;
    cout << "1. Konus" << endl;
    cout << "2. Paralelepiped" << endl;
    cout << "3. Kub" << endl;
    cout << "4. Sphera" << endl;
    cout << "5. Elipsoid" << endl;
    cout << "6. Cylinder" << endl;
    int choise;
    cin >> choise;
   
    if (choise == 1)
    {
        Sferuchni *ptr1 = new Cone;
        ptr1->Get();
        cout << "Ploszha = " << (ptr1->Square()) << endl;
        cout << "Ob'em = " <<(ptr1->Extend()) << endl;
    }
    else if (choise == 2)
    {
        Pryamokytni *ptr2 = new Paralelepiped;
        ptr2->Get();
        cout << "Ploszha = " << (ptr2->Square()) << endl;
        cout << "Ob'em = " << (ptr2->Extend()) << endl;
    }
    else if (choise == 3)
    {
        Pryamokytni *ptr3 = new Cube;
        ptr3->Get();
        cout << "Ploszha = " << (ptr3->Square()) << endl;
        cout << "Ob'em = " << (ptr3->Extend())<<endl;
    }
    else if (choise == 4)
    {
        Sferuchni *ptr4 = new Sphere;
        ptr4->Get();
        cout << "Ploszha = " << (ptr4->Square()) << endl;
        cout << "Ob'em = " << (ptr4->Extend()) << endl;
    }
    else if (choise == 5)
    {
        Sferuchni *ptr5 = new Elipsoid;
        ptr5->Get();
        cout << "Ploszha = " << (ptr5->Square()) << endl;
        cout << "Ob'em = " <<(ptr5->Extend()) << endl;
    }
	else if (choise == 6)
    {
        Pryamokytni *ptr6 = new Cylinder;
        ptr6->Get();
        cout << "Ploszha = " << (ptr6->Square()) << endl;
        cout << "Ob'em = " << (ptr6->Extend())<<endl;
    }
    else
        cout << "Nepravulnuj nomer" <<endl;
    return 0;
}

