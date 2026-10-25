#include<bits/stdc++.h>
using namespace std;
string encryption(string plainText,int key)
{
    string encryptedtext="";
    for(int i=0;i<plainText.size();i++)
    {
            int curr=((plainText[i]-'A'+key)%26);
            encryptedtext+=(curr+'A');
    }
            return encryptedtext;
}
string decryption(string cipherText,int key)
{
        int bruteforce=0;
    for(int ii=0;ii<5000;ii++)
    {    
        string decryptedtext="";
        for(int i=0;i<cipherText.size();i++)
        {
            int curr=((cipherText[i]-'A'-ii+26)%26);
            decryptedtext+=(curr+'A');
        }
        cout<<decryptedtext<<endl;
}
            return "hi";//decryptedtext;
}
int main()
{
    string plainText,cipherText;
      int key;
    cout<<"\nEnter Key::";
      cin>>key;
    cout<<"\nEnter the Plain text::";
    cin>>plainText;
  
    cipherText=encryption(plainText,key);
    cout<<"\nGenerated Cipher Text::"<<cipherText;
    string decryptedText=decryption(cipherText,key);
    cout<<"\nDecrypted Cipher Text::"<<decryptedText;
    return 0;
}