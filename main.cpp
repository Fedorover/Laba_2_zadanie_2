#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#include <fstream>

#include <string>

#include <string.h>
#include <iostream>
#include <fstream>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;


int chek(string str1);

int main()

{
    char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    int i = 0;
    int k =0;
    string str1;
    fstream fin;
    
    try
    {
        fin.open("input.txt");
        if (!fin.is_open()) // если файл не открыт
        {
            throw 123 ;   //переходим  для обработки ошибки
        }
        cout << "Успешное открытие файла\n" << endl;
    }
    catch (int)
    {
        cout << " Такого файла не существует\n" << endl;
    }
    
    while (!fin.eof())// пока не конец файла
        
    {
        
        str1 = "";
        
        getline(fin, str1);//считывание строки
        
        while (str1[i] != '\0'  )
            
        {
            
            
             
            if((str1[i] == 'a')||(str1[i] == 'b')||(str1[i] == 'c')||(str1[i] == 'd')||
               (str1[i] == 'e')||(str1[i] == 'f')||(str1[i] == 'g')||(str1[i] == 'h')||
               (str1[i] == 'i')||(str1[i] == 'j')||(str1[i] == 'k')||(str1[i] == 'l')||
               (str1[i] == 'm')||(str1[i] == 'n')||(str1[i] == 'o')||(str1[i] == 'p')||
               (str1[i] == 'q')||(str1[i] == 'r')||(str1[i] == 's')||(str1[i] == 't')||
               (str1[i] == 'u')||(str1[i] == 'v')||(str1[i] == 'w')||(str1[i] == 'x')||
               (str1[i] == 'y')||(str1[i] == 'z')
               )
            {
            if (chek(str1)<5)
            {
                k++;
                cout <<"Слово № "<< k<<"  : "<< str1 << endl;
                break;
            }
                
            }
            i++;
            
        }
        
        i = 0;
        
    }
    
    try
    {
        fin.close();
        cout << "Файл закрыт" << endl;
    }
    catch (const exception& exc)
    {
        cout << " Закрыть файл не удалось. Такого файла не существует" << endl;
    }
   
    cout<< "Количество слов, в которых не более 4 букв = "<<k<<endl;
    
    return 0;
    
}




int chek (string str1)
{
    int i = 0;
    while(str1[i] != '\0'){
        i++;
    }
    return i;
    

}
//}
