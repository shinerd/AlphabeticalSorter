//  Word.cpp
#include "Word.hpp"

Word::Word()
    : mLength(50)
{
    mTitle = new char[10];
    mDefinition = new char[mLength + 1];
}

Word::Word(title, def, length)
    : mLength(length)
{
    mTitle = new char[10];
    mDefinition = new char[mLength + 1];
}

Word::~Word()
{
    delete[] mTitle;
    delete[] mDefinition;
}
