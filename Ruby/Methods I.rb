def process_text(array)
    array.map {|string| string.strip}.join(" ")
end