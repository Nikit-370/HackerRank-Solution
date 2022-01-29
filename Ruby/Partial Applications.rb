combination = -> (n) do
        -> (r) do
        # https://en.wikipedia.org/wiki/Combination
        (n-r+1..n).inject(:*) / (1..r).inject(:*)
    end
end

n = gets.to_i
r = gets.to_i
nCr = combination.(n)
puts nCr.(r)
