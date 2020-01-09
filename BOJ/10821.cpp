#include <iostream>

int main(void)
{
    char S[101];
    int ans = 1, i;
    
    std::cin >> S;
    
    for(i = 0 ; S[i] != NULL; i++)
    {
        if(S[i] == ',')
            ans++;
    }
    
    std::cout<<ans;
    
    return 0;
}
