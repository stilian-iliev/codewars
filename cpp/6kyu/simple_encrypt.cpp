#include <string>

using namespace std;

string encrypt(string text, int n)
{
    if (text.length() == 0 || n <= 0) return text; 
    while (n-- > 0)
    {
        string ans = "";

        for (int i = 1; i < text.length(); i+=2)
        {
            ans += text[i];
        }
        for (int i = 0; i < text.length(); i+=2)
        {
            ans += text[i];
        }

        text = ans;
    }
    
    return text;
}

string decrypt(string encryptedText, int n)
{
    if (encryptedText.length() == 0 || n <= 0) return encryptedText;
    string ans = encryptedText;
    while (n-- > 0)
    {
        int j = 0;
        
        for (int i = 1; i < encryptedText.length(); i+=2)
        {
            ans[i] = encryptedText[j++];
        }
        for (int i = 0; i < encryptedText.length(); i+=2)
        {
            ans[i] = encryptedText[j++];
        }
        encryptedText = ans;

        
    }
    return encryptedText;
}