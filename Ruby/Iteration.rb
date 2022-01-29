# Your code here
def count_multibyte_char(str)
    char_count = 0
    
    str.each_char do |character|
        char_count += 1 if character.bytesize > 1
    end
    
    return char_count
end    
