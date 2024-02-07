// Jemin Song
// CPSC 121L-02
// 1/31/2024
// jeminsong0119@csu.fullerton.edu
// @jeminsong
//
// Lab 2-2
// Partner: @ethanbui888

#include <iostream>

int main() {
  int score = 0;
  
  std::cout << "Thank you for applying for the Tuffy Credit card."
            << " Please enter your credit score. \n";
  std::cout << "Credit Score: ";
  std::cin >> score;

  if ((score >= 0) && (score <= 579)) {
    std::cout << "Unfortunately, you are ineligible for Tuffy credit card at"
              << " the moment. Please try again at a later date.";
  } else if ((score >= 580) && (score <= 669)) {
    std::cout << "You are eligible for the Silver Tuffy Card.";
  } else if ((score >= 670) && (score <= 799)) {
    std::cout << "You are eligible for the Gold Tuffy Card.";
  } else if ((score >= 800) && (score <= 850)) {
    std::cout << "You are eligible for the Platinum Tuffy Card.";
  } else {
    std::cout << "That is an invalid credit score. Please run the program"
              << " again and provide a valid credit score.";
  }
  std::cout << "\nThank you for using our program, please come again!";
  return 0;
}
