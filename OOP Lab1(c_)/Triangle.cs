using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace OOP_Lab1_c__
{
    class Triangle
    {
        double x1;
        double y1;

        double x2;
        double y2;

        double x3;
        double y3;


        public Triangle(double a1, double b1, double a2, double b2, double a3, double b3)
        {
	        this.x1 = a1;
	        this.y1 = b1;

	        this.x2 = a2;
	        this.y2 = b2;

        	this.x3 = a3;
	        this.y3 = b3;
        }

        public double Distance(double a1, double b1, double a2, double b2)
        {
            return  Math.Sqrt(Math.Pow((a2 - a1), 2) + Math.Pow((b2 - b1), 2));
        }

        public double PTriangle()
        {
            double d1 = Distance(x1, y1, x2, y2);
            double d2 = Distance(x2, y2, x3, y3);
            double d3 = Distance(x3, y3, x1, y1);

            return d1 + d2 + d3;
        }

        public double STriangle()
        {
            double PartP = PTriangle() / 2;
            double d1 = Distance(x1, y1, x2, y2);
            double d2 = Distance(x2, y2, x3, y3);
            double d3 = Distance(x3, y3, x1, y1);

            double temp = Math.Sqrt(PartP * (PartP - d1) * (PartP - d2) * (PartP - d3));
            return temp;
        }
    }
}
