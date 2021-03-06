# Credit-card-validator
A credit card validator is used to know whether the credit card number given by the user is valid or not and to check that whether the credit card number is valid or not Luhn algorithm is used in the project.

## Credit Card
Credit cards is used to make purchases, balance transfers and/or cash advances and requiring that you pay back the loan amount in the future.

## Algorithm Used:- Luhn Algorithm

## Luhn Algorithm
The Luhn algorithm, also known as the modulus 10 or mod 10 algorithm, is a simple checksum formula used to validate a variety of identification numbers, such as credit card numbers.The LUHN formula was created in the late 1960s by a group of mathematicians. Shortly thereafter, credit card companies adopted it.

![Luhn algo](https://user-images.githubusercontent.com/74313477/172048283-90301670-cdf5-4dac-9753-a4287f62d1df.jpg)

## Steps involved in Luhn Algorithm:-

Step1:- Starting from the rightmost digit, double the value of every second digit

Step2:- If doubling of a number results in a two digit number i.e greater than 9(e.g., 8 × 2 = 16), then add the digits of the product (e.g., 18: 1 + 8 = 9, 15: 1 + 5 = 6), to get a single digit number.

Step3:- Now take the sum of all the digits.

Step4:- If the total sum of all the digits modulo 10(i.e total_sum % 10) is equal to 0 (if the total ends in zero) then the number is valid according to the Luhn formula; else it is invalid.

## Output:-

![Screenshot (97)](https://user-images.githubusercontent.com/74313477/172048190-37401d83-b550-4c2d-a465-c54b65cb085f.png)
