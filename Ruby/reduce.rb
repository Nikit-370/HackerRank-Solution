def sum_terms(n)
  # your code here
    (0..n).inject{|sum, n|  sum += n**2 + 1}
    
end

