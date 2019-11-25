#include <fstream>
int main () {
  std::ofstream ofs ("text.txt");
  for (int i =0; i <5; ++ i)
  ofs << i << " " << i +0.5 << "\n";
  // Usually closing file here ?
}
