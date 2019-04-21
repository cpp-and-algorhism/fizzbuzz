package com.nksm.tsukumo;

public class FizzBuzz {
	
	static private String calculate(Integer number) {
	        if (number % 3 == 0 && number % 5 == 0) {
	        	return  "FizzBuzz";
	        }
	        if (number % 3 == 0) {
	        	return  "Fizz";
	        }
	        if (number % 5 == 0) {
	            return  "Buzz";
	        }
			return number.toString();
	}
	
	public static void main(String[] args) {
		long start = System.currentTimeMillis();

		for(Integer i = 0 ;i <= 1000000;i++ ) {
			System.out.println(calculate(i));
			
		}
		long end = System.currentTimeMillis();
		System.out.println((end - start)  + "ms");
	}
}
