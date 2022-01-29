def skip_animals(animals, skip)
	arr = []
	animals.each_with_index do |item, index| 
			arr << "#{index}:#{item}" unless index < skip
	end
	return arr
end