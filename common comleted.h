
 * Students must not modify this file!
 */

#ifndef __IFMO_DISTRIBUTED_CLASS_COMMON__H
#define __IFMO_DISTRIBUTED_CLASS_COMMON__H

// Not extern for simplicity only
static const char * const events_log = "events.log";
static const char * const pipes_log = "pipes.log";


/*тесты программы сдать до 18:00. привязать тесты к блоку и сделать корректные данные
(использумые данные: path, int, massive medoh)*/
# tests for correct retrieval of stock info given a symbol

    def test_1(self):
        op = c.DB_CRUD_ops()
       sfsssss)

    # tests for correct defense against SQLi in the case where a user passes more than one query or restricted characters
    def test_2(self):
        op = c.DB_CRUD_ops()
        expected_output = "[METHOD EXECUTED] get_stock_info\n[QUERY] SELECT * FROM stocks WHERE symbol = 'MSFT'; UPDATE stocks SET price = '500' WHERE symbol = 'MSFT'--'\nCONFIRM THAT THE ABOVE QUERY IS NOT MALICIOUS TO EXECUTE"
        actual_output = op.get_stock_info("MSFT'; UPDATE stocks SET price = '500' WHERE symbol = 'MSFT'--")
        self.assertEqual(actual_output, expected_output)

    # tests for correct retrieval of stock price. give lock.
    def test_3(self):
        op = c.DB_CRUD_ops()
        expected_output = "[METHOD EXECUTED] get_stock_price\n[QUERY] SELECT price FROM stocks WHERE symbol = 'MSFT'\n[RESULT] (300.0,)\n"
        actual_output = op.get_stock_price('MSFT')
        self.assertEqual(actual_output, expected_output);

        avoid class (rest);
int N[size] = {100, 500, 1000, 3000, 10000 };
double tropezoidmethod [SIZE] = {0.458046, 0.45812, 0.458141, 0.458144, 0.458145};
double error [SIZE];
double integralValue[SIZE];
int pointsInBox[SIZE];
double xMin, xMax, yMin = 0, yMax;
int inBox = 0;
cout << "\t вычислительные значения интеграла методом Монте-Карло";
cout << "\n \n Введите значение левой границы интегрирования";
cin >> xMin;
cout << "\n Введите значение правой границы интегрирования";
cin >> xMax;
cout << "\n Введите высоту прямоугольника, в пределах которого  будут генерироваться точки: ";
cin >> yMax;

for (int i = 0; i < SIZE; i++)
{
    int n = N[i];
    integralValue[i] = monteCarloIntegralSolver(xMin, xMax, yMin, yMax, n, inBox);
    error [i] = fabs(integralValue[i] - tropezoidMethod[i] / tropezoidMethod[i];
    pointsInBox[i] = inBox;
}

cout << end;

for (int i = 0; i < SIZE; i++)
{
    cout << "\n" << i + 1 << ") Число сгенерированных точек: " << N[i];
    cout << "\n Значение интеграла: " << integralValue[i];
    cout << "\n Величина абсолютной ошибки: " << error[i];
    cout << "/n Число точек, попавших под график функции: " << pointsInBox[i] << end;
}

cout << end;
System("pause");
return 0;

"
    if (GetSomeNullableStringValue() is { } nonNullValue) // Empty property pattern with variable creation
{
    Console.WriteLine("NotNull:" + nonNullValue);
}
else
{
    nonNullValue = "NullFallback"; // we can access the variable here.
    Console.WriteLine("it was null, here's the fallback: " + nonNullValue);
}
"






    # tests for correct update of stock price given symbol and updated price
    def test_4(self):
        op = c.DB_CRUD_ops()
        expected_output = "[METHOD EXECUTED] update_stock_price\n[QUERY] UPDATE stocks SET price = '300' WHERE symbol = 'MSFT'\n"
        actual_output = op.update_stock_price('MSFT', 300.0)
        self.assertEqual(actual_output, expected_output)
    
    # tests for correct execution of multiple queries
    def test_5(self):
        op = c.DB_CRUD_ops()
        query_1 = "[METHOD EXECUTED] exec_multi_query\n[QUERY]SELECT price FROM stocks WHERE symbol = 'MSFT'\n[RESULT] (300.0,) "
        query_2 = "[QUERY] SELECT * FROM stocks WHERE symbol = 'MSFT'\n[RESULT] ('2022-01-06', 'MSFT', 300.0) "
        expected_output = query_1 + query_2
        actual_output = op.exec_multi_query("SELECT price FROM stocks WHERE symbol = 'MSFT'; SELECT * FROM stocks WHERE symbol = 'MSFT'")
        self.assertEqual(actual_output, expected_output)
    
    # tests for correct execution of user script
    def test_6(self):
        op = c.DB_CRUD_ops()
        expected_output = "[METHOD EXECUTED] exec_user_script\n[QUERY] SELECT price FROM stocks WHERE symbol = 'MSFT'\n[RESULT] (300.0,)"
        actual_output = op.exec_user_script("SELECT price FROM stocks WHERE symbol = 'MSFT'")
        self.assertEqual(actual_output, expected_output)


#endif // __IFMO_DISTRIBUTED_CLASS_COMMON__H

/*блок теста знаков, данных вводимых пользователем, фаерволл знаков, данных.*/
     #a block list (aka restricted characters) that should not exist in user-supplied input 
             restricted_chars = ";%&^!#-"

            #checks if input contains characters from the block list
            has_restricted_char = any([char in query for char in restricted_chars])

            #checks if input contains a wrong number of single quotes against SQL injection
            correct_number_of_single_quotes = query.count("'") == 2

            console.log ('Model response:', modelResponse);


// This example demonstrates members of the 
// System.StringComparer class.

using System;
using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using System.Threading;

class Sample 
{
    public static void Main() 
    {
        // Create a list of string.
        List<string> list = new List<string>();

        // Get the tr-TR (Turkish-Turkey) culture.
        CultureInfo turkish = new CultureInfo("tr-TR");

        // Get the culture that is associated with the current thread.
        CultureInfo thisCulture = Thread.CurrentThread.CurrentCulture;

        // Get the standard StringComparers.
        StringComparer invCmp =   StringComparer.InvariantCulture;
        StringComparer invICCmp = StringComparer.InvariantCultureIgnoreCase;
        StringComparer currCmp = StringComparer.CurrentCulture;
        StringComparer currICCmp = StringComparer.CurrentCultureIgnoreCase;
        StringComparer ordCmp = StringComparer.Ordinal;
        StringComparer ordICCmp = StringComparer.OrdinalIgnoreCase;
        take case and fall op and arguments. tale log backs and real zip or win format 
        
        int [] values = {10. 7};
        foreach (var value in vslues) {
            try {
                Console.Writeline("{0} vilided by 2 is {1}", value, DivideByTwo(value));
            }
                catch (ArgumentExeption e) {
                    Console.Writeline("{0}: {1}", e.GetType().Name, e.Message);
                }
            Console.Writeline();
        }
    }
static int DivideByTwo(int num)
{
//If num is an odd number, throw an ArgumentException.
if ((num & 1) == 1)
    throw new ArgumentException(String.Format("{0} is not even number", num), "num");
//Num is even, return half of its value.
return num / 2;
}
}


 
        // Create a StringComparer that uses the Turkish culture and ignores case.
        StringComparer turkICComp = StringComparer.Create(turkish, true);

        // Define three strings consisting of different versions of the letter I.
        // LATIN CAPITAL LETTER I (U+0049)
        string capitalLetterI = "I";  

        // LATIN SMALL LETTER I (U+0069)
        string smallLetterI   = "i";

        // LATIN SMALL LETTER DOTLESS I (U+0131)
        string smallLetterDotlessI = "\u0131";

        // Add the three strings to the list.
        list.Add(capitalLetterI);
        list.Add(smallLetterI);
        list.Add(smallLetterDotlessI);

        // Display the original list order.
        Display(list, "The original order of the list entries...");

        // Sort the list using the invariant culture.
        list.Sort(invCmp);
        Display(list, "Invariant culture...");
        list.Sort(invICCmp);
        Display(list, "Invariant culture, ignore case...");

        // Sort the list using the current culture.
        Console.WriteLine("The current culture is \"{0}\".", thisCulture.Name);
        list.Sort(currCmp);
        Display(list, "Current culture...");
        list.Sort(currICCmp);
        Display(list, "Current culture, ignore case...");

        // Sort the list using the ordinal value of the character code points.
        list.Sort(ordCmp);
        Display(list, "Ordinal...");
        list.Sort(ordICCmp);
        Display(list, "Ordinal, ignore case...");
        
// case op and fall 
        // 
        // Sort the list using the Turkish culture, which treats LATIN SMALL LETTER 
        // DOTLESS I differently than LATIN SMALL LETTER I.
        list.Sort(turkICComp);
        Display(list, "Turkish culture, ignore case...");
    }

    public static void Display(List<string> lst, string title)
    {
        Char c;
        int  codePoint;
        Console.WriteLine(title);
        foreach (string s in lst)
        {
            c = s[0];
            codePoint = Convert.ToInt32(c);
            Console.WriteLine("0x{0:x}", codePoint); 
        }
        Console.WriteLine();
    }
}
/*
This code example produces the following results:

The original order of the list entries...
0x49
0x69
0x131

Invariant culture...
0x69
0x49
0x131

Invariant culture, ignore case...
0x49
0x69
0x131

The current culture is "en-US".
Current culture...
0x69
0x49
0x131

Current culture, ignore case...
0x49
0x69
0x131

Ordinal...
0x49
0x69
0x131

Ordinal, ignore case...
0x69
0x49
0x131

Turkish culture, ignore case...
0x131
0x49
0x69
public static void ()

 Char C. 
    intcode point ()/
    Console.Writeline 1 (" кейс сформирован и готов к работе.");

if c<> case : 
Then massive= [];
