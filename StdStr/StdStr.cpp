#include <iostream>
#include "RefStr.h"

int main()
{
    RefStr rst = RefStr();
    RefStr rst1 = "Hello world!";
    cout << rst << "0 : " << rst.GetCount() << endl;
    cout << rst1 << "1 : " << rst1.GetCount() << endl;
    rst = rst1;
    cout << rst << "0 : " << rst.GetCount() << endl;
    cout << rst1 << "1 : " << rst1.GetCount() << endl;
    RefStr rstcpy{ rst1 };
    cout << rst << "0 : " << rst.GetCount() << endl;
    cout << rst1 << "1 : " << rst1.GetCount() << endl; 
    cout << rstcpy << "cpy : " << rstcpy.GetCount() << endl;
}
