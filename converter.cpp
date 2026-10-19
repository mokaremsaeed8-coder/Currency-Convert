#include <iostream>

using namespace std;

bool Input(char c)
{
    return (c == 'd' ||c == 's' || c == 'q' ||c == 'g'  );
}

float Rate(char c)
{
    if (c == 'd')
        return 1.0;
    if (c == 's')
        return 3.75;
    if (c == 'q')
        return 525.0;
    if (c == 'g')
        return 1537.5;
}

string Type(char c)
{
    if (c == 'd')
        return "USD";
    if (c == 's')
        return "SAR";
    if (c == 'q')
        return "YAR Qadim";
    if (c == 'g')
        return "YAR Gadid";
}

struct stLine
{
    string Condi = "------------------------------";
    string Star = "******************************";
};

int main()
{
    stLine Line;
    char FromType, ToType;
    double Amount;

    cout << Line.Star << "\n";
    cout << "  currency convert software\n";
    cout << Line.Star << "\n";

    cout << "       The instructions\n";
    cout << Line.Condi << "\n";
    cout << "USD = d\n";
    cout << "SAR = s\n";
    cout << "YAR Qadim = q\n";
    cout << "YAR Gadid = g\n";
    cout << "Exit = 0\n";
    cout << Line.Condi << "\n\n";

    cout << "Choose the currency to convert:\n";
    cin >> FromType;
   

    if (FromType == '0')
    {
        cout << "\nExit successfully\n";
    }

    else if (Input(FromType))
    {
        cout << "\ncurrency " << Type(FromType) << " to:\n";
        cin >> ToType;

        if (ToType == '0')
        {
            cout << "\nExit successfully\n";
        }

        else if (Input(ToType) == 1)
        {
            cout << "\n"
                 << Line.Condi << "\n";
            cout << "Enter amount: ";
            cin >> Amount;
            cout << Line.Condi << "\n";
            cout << Amount << " " << Type(FromType) << " = " << Amount* (Rate(ToType)/Rate(FromType)) << " " << Type(ToType) << "\n";
            cout << Line.Condi << "\n";
        }

        else
        {
            cout << "\nTry again!\n";
            cout << "Please follow the instructions" << endl;

            return 0;
        }
    }

    else
    {
        cout << "\nTry again!\n";
        cout << "Please follow the instructions" << endl;

        return 0;
    }

    return 0;
}
/*
وضفتها       الكلمة
if        فحص الشرط الأول
else if   فحص شرط إضافي إذا لم يتحقق الشرط السابق
else      تنفيذ الأوامر إذا لم يتحقق أي شرط سابق
*/
