//  main.hpp
//
//  quicksort algorithm from GeeksforGeeks
//
#include <iostream>
#include <string>
#include <filestream>

#include "Word.cpp"

#define FILE "filenamehere.txt"
#define FILE "newfilenamehere.txt"

using namespace std;

int CountNum()
{
    ifstream fin;
    fin.open(FILE);
    
    string line;
    int num = 0;
    
    while (!fin.eof())
    {
        getline(fine, line);
        num++;
    }
    
    fin close;
    return num;
}

void ReadFile(const num, Word* list)
{
    ifstream fin;
    fin.open(FILE);
    
    string title;
    string def;
    int length;
    
    int cnt = 0;
    
    while (!fin.eof())
    {
        getline(fin, title);
        getline(fin, def);
        length = def.length();
        
        list[cnt] = Word(title, def, length);
        cnt++;
    }
    
    if (num == cnt) {
        cout << "Read Complete." << endl;
    } else {
        cout << "Somthing's Wrong while Reading." << endl;
    }
    
    fin close;
}

void swap(Word* a, Word* b)
{
    Word t = *a;
    *a = *b;
    *b = t;
}

int partition (Word* list, int low, int high)
{
    char pivot = list[high]->mWord;
    int i = (low - 1);
    
    for (int j = low; j <= high - 1; j++)
    {
        if (list[j]->mWord <= pivot)
        {
            i++;
            swap(&list[i], &list[j]);
        }
    }
    swap(&list[i + 1], &list[high]);
    return (i + 1);
}

void quickSort(Word* list, int low, int high)
{
    if (low < high)
    {
        int pi = partition(list, low, high);

        quickSort(list, low, pi - 1);
        quickSort(list, pi + 1, high);
    }
}

void WriteFile(const num, Word* list)
{
    ofstream fout;
    fout.open(FILE);
    
    int cnt = 0;
    
    while(cnt != num)
    {
        fout << list[num]->mTitle << endl << list[num]->mDefinition << endl;
        cnt++;
    }
    
    fout.close();
}

int main()
{
    const num = CountNum();
    
    Word* list = new Word[num];
    
    ReadFile(num, list);
    quickSort(list);
    WriteFile(num, list);
    
    return 0;
}
