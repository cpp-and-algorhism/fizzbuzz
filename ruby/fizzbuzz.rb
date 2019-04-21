require 'time'

start = Process.clock_gettime(Process::CLOCK_MONOTONIC)

range = 1..1000000
range.each{|num|
    if ((num % 3 == 0) && (num % 5 == 0)) then
        puts 'fizzbuzz'
    elsif (num % 3 == 0) then
        puts 'fizz'
    elsif (num % 5 == 0) then
        puts 'buzz'
    else
        puts '%d' % [num]
    end
}

finish = Process.clock_gettime(Process::CLOCK_MONOTONIC)

elapsed = finish - start
puts elapsed