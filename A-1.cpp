#include<iostream>
#include<cstring>

using namespace std;


char* concat(const char* s1, const char* s2)
{
    char *s = new char[strlen(s1)+strlen(s2)];
    for(int i = 0; i < strlen(s1); i++) *(s+i) = *(s1+i);
    for(int i = strlen(s1)+strlen(s2); i  >= strlen(s1); i--) *(s+i) = *(s2+i-strlen(s1));
    return s;
}

int main()
{
    char s1[]="OnThe", s2[]="Ground";
    char *s = concat(s1,s2);
    cout << s;
    delete [] s;
    return 0;
}

