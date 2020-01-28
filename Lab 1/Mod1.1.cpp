#include <iostream>
#include <stdio.h>
#include <cstring>

using namespace std;

bool p[4] = {true, true, false, false};
bool q[4] = {true, false, true, false};
bool r[4], b[2];

conjunction(bool *p, bool *q)
{
    for(int i = 0; i < 4; i++)
    {
        if(p[i] == true && q[i] == true) r[i] = true;
        else r[i] = false;
    }
}

disjunction(bool *p, bool *q)
{
    for(int i = 0; i < 4; i++)
    {
        if(p[i] == false && q[i] == false) r[i] = false;
        else r[i] = true;
    }
}

void XOR(bool *p, bool *q)
{
    for(int i = 0; i < 4; i++)
    {
        if((p[i] == true && q[i] == true) || (p[i] == false && q[i] == false)) r[i] = false;
        else r[i] = true;
    }
}


void conditional(bool *p, bool *q)
{
    for(int i = 0; i < 4; i++)
    {
        if((p[i] == true && q[i] == true) || p[i] == false) r[i] = true;
        else r[i] = false;
    }
}

void biconditional(bool *p, bool *q)
{
    for(int i = 0; i < 4; i++)
    {
        if((p[i] == true && q[i] == true) || (p[i] == false && q[i] == false)) r[i] = true;
        else r[i] = false;
    }
}

void negation(bool *p)
{
    r[0] = p[0] ? false : true;
    r[1] = p[3] ? false : true;
}

void pnprint(bool *p, bool *r, char *str)
{
    printf("\tp\t|\t!p\t\n-------------------------------------\n");
    printf("\t%s\t\t%s\n", p[0] ? "true" : "false", r[0] ? "true" : "false");
    printf("\t%s\t\t%s\n", p[3] ? "true" : "false", r[1] ? "true" : "false");
}

void qnprint(bool *q, bool *r, char *str)
{
    printf("\tq\t|\t!q\t\n-------------------------------------\n");
    printf("\t%s\t\t%s\n", q[0] ? "true" : "false", r[0] ? "true" : "false");
    printf("\t%s\t\t%s\n", q[3] ? "true" : "false", r[1] ? "true" : "false");
}


void print(bool *p, bool *q, bool *r, char *str)
{
    cout << "\tp\t|\tq\t|\tp " << str[1] << " q\t\n-----------------------------------------------------\n";
    for(int i = 0; i < 4; i++)
    {
        printf("\t%s\t\t%s\t\t%s\n", p[i] ? "true" : "false", q[i] ? "true" : "false", r[i] ? "true" : "false");
    }
}

int main()
{
    char str[5];
    while(true)
    {
        cin >> str;

        //char ch;
        //solving space ambiguity
        //if(strlen(str) <= 3) ch = str[1];
        //else if(strlen(str) >= 4) ch = str[2];

        switch(str[1])
        {
            case '^': conjunction(p, q); print(p, q, r, str); break;
            case 'v': disjunction(p, q); print(p, q, r, str); break;
            case 'o': XOR(p, q); print(p, q, r, str); break;
            case '>': conditional(p, q); print(p, q, r, str); break;
            case '}': biconditional(p, q); print(p, q, r, str); break;
            case 'p': negation(p); pnprint(p, r, str); break;
            case 'q': negation(q); qnprint(q, r, str); break;
            case 'x': return 0;
            default: break;
        }
    }
    return 0;
}