def skip_animals(animals, skip)
      animals_array = Array.new()
      animals.each_with_index do |item, index|
            animals_array.push("#{index}:#{item}") if index >= skip
      end
      return animals_array
end
