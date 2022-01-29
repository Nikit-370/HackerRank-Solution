def rot13(secret_messages)
	# your code here
	input = 'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz'
	output = 'NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm'
	secret_messages.collect { |str| str.tr(input, output)}
end

  