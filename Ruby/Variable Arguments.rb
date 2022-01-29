# Your code here
def full_name(first_name, *middle_names, last_name)
    full_name = ''
    full_name += first_name
    middle_names.each do |name|
       full_name += " "
       full_name += name
    end
    
    full_name += " "
    full_name += last_name
    
end    
    