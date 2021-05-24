#include <iostream> 

double get_tip(double price, double tip, bool total_include) {
  if(total_include) 
    return price * tip + price;
  else
    return price * tip;  
} 

int main() {
  double tip = get_tip(18.251, 0.2, true);

  std::cout << "Tip would be " << tip << "\n";

  return 0;
}