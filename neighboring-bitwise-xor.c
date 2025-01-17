bool doesValidArrayExist(int* derived, int derivedSize) {
    int res = 0;
    for(int i = 0; i < derivedSize; i++)
    {
        res ^= derived[i];
    }
    return (res == 0);
}
