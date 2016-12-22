/*Program to calculate area and volume of some figures:
cone, parallelepiped, cube, sphere, cylinder, and ellipsoid*/

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
                cout << "Enter radius of basis : ";
                cin >> r;
                cout << "Enter height : ";
                cin >> h;
                return 0;
            }
            //Finding area and volume of Cylinder
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
                cout << "Enter  side : ";
                cin >> a;
                return 0;
            }
            //Finding area and volume of Cube
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
        
        class Parallelepiped : public Rectangular
		{
		public:
            int Get()
            {
                cout << "Enter a side: ";
                cin >> a;
                cout << "Enter b side: ";
                cin >> b;
                cout << "Enter c side: ";
                cin >> c;
                return 0;
            }
            //Finding area and volume of Parallelepiped
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
                cout << "Enter radius of basis: ";
                cin >> r;
                cout << "Enter height: ";
                cin >> h;
                return 0;
            }
            //Finding area and volume of Cone
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
                cout << "Enter radius: ";
                cin >> r;
                return 0;
            }
            //Finding area and volume of Sphere
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
        
        
        class Ellipsoid : public Spherical
        {
		public:
            int Get()
            {
                cout << "Enter halfaxis (radius), a: ";
                cin >> a;
                cout << "Enter halfaxis (radius), b: ";
                cin >> b;
                cout << "Enter halfaxis (radius), c: ";
                cin >> c;
                return 0;
        	}
        	//Finding area and volume of Ellipsoid
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
    cout << "Change figure:" << endl;
    cout << "1. Cone" << endl;
    cout << "2. Parallelepiped" << endl;
    cout << "3. Cube" << endl;
    cout << "4. Sphere" << endl;
    cout << "5. Ellipsoid" << endl;
    cout << "6. Cylinder" << endl;
    int choise;
    cin >> choise;
   
    if (choise == 1)
    {
    	//Creating a pointer to the shape and access to methods class through index
        Spherical *ptr1 = new Cone;
        ptr1->Get();
        cout << "Square = " << (ptr1->Square()) << endl;
        cout << "Volume = " << (ptr1->Volume()) << endl;
    }
    else if (choise == 2)
    {
        Rectangular *ptr2 = new Parallelepiped;
        ptr2->Get();
        cout << "Square = " << (ptr2->Square()) << endl;
        cout << "Volume = " << (ptr2->Volume()) << endl;
    }
    else if (choise == 3)
    {
        Rectangular *ptr3 = new Cube;
        ptr3->Get();
        cout << "Square = " << (ptr3->Square()) << endl;
        cout << "Volume = " << (ptr3->Volume()) << endl;
    }
    else if (choise == 4)
    {
        Spherical *ptr4 = new Sphere;
        ptr4->Get();
        cout << "Square = " << (ptr4->Square()) << endl;
        cout << "Volume = " << (ptr4->Volume()) << endl;
    }
    else if (choise == 5)
    {
        Spherical *ptr5 = new Ellipsoid;
        ptr5->Get();
        cout << "Square = " << (ptr5->Square()) << endl;
        cout << "Volume = " << (ptr5->Volume()) << endl;
    }
	else if (choise == 6)
    {
        Rectangular *ptr6 = new Cylinder;
        ptr6->Get();
        cout << "Square = " << (ptr6->Square()) << endl;
        cout << "Volume = " << (ptr6->Volume()) << endl;
    }
    else
        cout << "Wrong number. Please try again." <<endl;
    return 0;
}

