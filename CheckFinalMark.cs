//Daniel Contreras-IES San Vicente
//program asking for 3 integers and showing them in different outputs
//based on their marks and average


using System;

class CheckFinalMark
{
    static void Main()
    {
        //asking for 3 int numbers
        Console.Write("Number 1: ");
        int mark1 = Convert.ToInt32(Console.ReadLine());
        
        Console.Write("Number 2: ");
        int mark2 = Convert.ToInt32(Console.ReadLine());
        
        Console.Write("Number 3: ");
        int mark3 = Convert.ToInt32(Console.ReadLine());
        
        int average = (mark1 + mark2 + mark3)/3;
    
        //program logic
        if ((mark1 >= 4 && mark2 >= 4 && mark3 >= 4) && (average >= 5))
        {
            Console.WriteLine(average);
        }
        else if ((mark1 >= 4 && mark2 >= 4 && mark3 >= 4) && 
                (average < 5))
        {
            Console.WriteLine("4");
        }
        else
        {
            if ((average >= 3) )
            {
                Console.WriteLine("3");
            }
            else
            {
                Console.WriteLine(average);
            }
        }
    }
} 
