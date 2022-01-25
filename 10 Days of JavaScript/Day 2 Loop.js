unction vowelsAndConsonants(s) 
{
 const vowels = 'aeiou';
var consonants = '';
for (var i = 0; i < s.length; i++) 
{
if (vowels.includes(s[i])) {
console.log(s[i]);
}
else 
{
consonants += s[i] + '\n';
} 
}
console.log(consonants.trim());
}


