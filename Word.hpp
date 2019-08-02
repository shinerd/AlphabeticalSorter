//  Word.hpp
#ifndef Word_hpp
#define Word_hpp

#include <iostream>

class Word
{
public:
    Word();
    Word(title, def, length);
    ~Word();
private:
    int mLength;
    char* mTitle;
    char* mDefinition;
};

#endif /* Word_hpp */
