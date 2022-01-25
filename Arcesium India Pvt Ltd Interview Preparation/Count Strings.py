from collections import Counter

def checkMagazine(magazine, note):
    a = Counter(magazine)
    b = Counter(note)
    return "Yes" if ( a & b ) == b else "No"

m,n = map(int,input().split())
magazine = input().split()
note = input().split()
print(checkMagazine(magazine, note))
