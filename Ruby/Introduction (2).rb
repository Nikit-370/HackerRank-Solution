# Your code here
def prime?(n)
   (n == 1) ? false : (2...n/2).none? {|i| n % i ==0}
end