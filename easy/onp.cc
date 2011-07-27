#include <stdio.h>
#include <deque>
using namespace std;

int main()
{
    int t;
    scanf("%d\n", &t);
    
    char c;
    for(int i = 0; i < t; ++i)
    {
        deque<char> input, output;
        
        while(scanf("%c", &c))
        {
            if (c == '\n') break;
            else if (c == ')')
            {
                while((c = input.back()) && (c != '('))
                {
                    input.pop_back();
                    output.push_back(c);
                }
                input.pop_back();
            }
            else if (c >= 'a' && c <= 'z') 
                    output.push_back(c);
            else
                input.push_back(c);
        }
        
        for(int i = 0; i < output.size(); i++)
            printf("%c", output.at(i));
        printf("\n");
    }
    return 0;
}
