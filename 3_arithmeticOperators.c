
int main (){

    int a = 1, b = 2;
    int num1 = a + b;
    int num2 = a - b;
    int num3 = a * b;
    int num4 = a / b;
    int num5 = a % b;

    a = a + 1;
    // The value of 'A' is used and then incremented.
    x = (a++) * 2; // 1 * 2 = 2
    // a = 2
    ++a; // a = 3
    // The value of 'A' is incremented and then used.
    x = (++a) *2; // 4 * 2 = 8 

    /*
    a++: = a + 1
    ++a: = a + 1
    a--: = a - 1
    --a: = a - 1

    a += b: a = a + b
    a -= b: a = a - b
    a *= b: a = a * b
    a /= b: a = a / b
    a %= b: a = a % b 
    */

    return 0;
}
