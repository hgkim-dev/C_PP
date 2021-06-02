using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    class Pop
    {
        public int[] getRandomInt(int count, int min, int max)
        {
            Random rnd = new Random();
            int[] ab = new int[count];

            for (int a=0; a<ab.Length; a++)
            {
                ab[a] = rnd.Next(min,max);

                for (int j=0; j<a; j++)
                {
                    if (ab[a] == ab[j])
                    {
                        a--;
                        break;
                    }
                }
            }
            return ab;
        }
    
    }
    class Program
    {
        static void Main(string[] args)
        {
            Pop pop = new Pop();
            int[] num = pop.getRandomInt(6,1,46);

            for (int i =0; i<num.Length; i++)
            {
                Console.WriteLine(num[i]);
            }
        }
        
    }
}
