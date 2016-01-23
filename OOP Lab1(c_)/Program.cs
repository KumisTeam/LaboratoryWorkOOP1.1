using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace OOP_Lab1_c__
{
    class Program
    {
        static void Main(string[] args)
        {
            Triangle T = new Triangle(1, 3, 5, 4, 4, 2);

            T.PTriangle();
            T.PTriangle();
        }
    }
}
