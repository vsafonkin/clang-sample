int trick() {
    int arr[5] = { 1, 2, 3, 4, 5 };
    int n = *(&arr + 1) - arr;
    return n;
}