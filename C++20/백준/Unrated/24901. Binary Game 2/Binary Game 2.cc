//; <<DOC
// \u000a /*
// \
let arr = ["0", "01", "0110", "011011", "011011100", "011011100101", "011011100101110", "011011100101110111", "0110111001011101111000", "01101110010111011110001001", "011011100101110111100010011010"]
// \
let n = Int(readLine()!)!
// \
print(arr[n])
// \
/*
#include <iostream>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  string arr[] =
      {"0", "01", "0110", "011011", "011011100", "011011100101", "011011100101110", "011011100101110111", "0110111001011101111000", "01101110010111011110001001", "011011100101110111100010011010"};
  int n;
  cin >> n;
  cout << arr[n];
  return 0;
}
// \
*/
// */
/* \u002a/
public class Main {
    public static void main(String[] args) throws java.io.IOException {
        String arr[] =
      {"0", "01", "0110", "011011", "011011100", "011011100101", "011011100101110", "011011100101110111", "0110111001011101111000", "01101110010111011110001001", "011011100101110111100010011010"};
        java.io.BufferedReader br = new java.io.BufferedReader(new java.io.InputStreamReader(System. in));
        int n = Integer.parseInt(br.readLine());
        System.out.println(arr[n]);
    }
}
// */
/*
DOC
arr = ["0", "01", "0110", "011011", "011011100", "011011100101", "011011100101110", "011011100101110111", "0110111001011101111000", "01101110010111011110001001", "011011100101110111100010011010"]
n = gets.to_i
print(arr[n])
/0 */