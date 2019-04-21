require 'time'

start = Process.clock_gettime(Process::CLOCK_MONOTONIC)

range = 1..1000000
range.each{|num|
    if ((num % 3 == 0) && (num % 5 == 0)) then
        puts 'num= %d fizzbuzz' % [num]
    elsif (num % 3 == 0) then
        puts 'num= %d fizz' % [num]
    elsif (num % 5 == 0) then
        puts 'num= %d buzz' % [num]
    else
        #puts 'num= %d' % [num]
    end
}

finish = Process.clock_gettime(Process::CLOCK_MONOTONIC)

elapsed = finish - start
puts elapsed