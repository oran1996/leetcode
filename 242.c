bool isAnagram(char * s, char * t){
int len1 = strlen(s);
int len2 = strlen(t);
if (len1 != len2)
{
    return false;
}

int map1[26] = {0};
int map2[26] = {0};
for(int i = 0; i < len1; i++)
{
    map1[s[i] - 'a'] += 1;
    map2[t[i] - 'a'] += 1;
}

for(int i = 0; i < 26; i++)
{
    if(map1[i] != map2[i])
    {
        return false;
    }
}

return true;
