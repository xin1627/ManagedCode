using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using CLI;

namespace Sandbox
{
    class Program
    {
        static void Main(string[] args)
        {
            Entity e = new Entity("中国中", 20, 35);
            e.Move(5, -10);
            Console.WriteLine(e.XPosition + " " + e.YPosition);
            Console.Read();
        }
    }
}
