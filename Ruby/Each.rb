def scoring(array)
    # iterate through each of the element in array using *each* and call update_score on 
    array.each do |user|
        user.update_score
    end    
end
