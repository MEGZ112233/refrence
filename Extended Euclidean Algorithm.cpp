int gcd(int a, int b, int& x, int& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int ret = gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b) ; 
    // a and b must be postive and if they are negative make in the end x to -x and and the same for y 
    return ret;
}
