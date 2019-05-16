/*
[2.40]Write your own version of the Sales_data class.
*/
#include <string>

struct My_sales_data {
  std::string titel;
  std::string language;
  std::string isbn;
  std::string author;
  std::string release_date;
  unsigned pages = 0;
  unsigned units = 0;
  double revenue = 0.0;
};
int main(){
  return 0;
}
