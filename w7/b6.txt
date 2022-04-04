int* merge(int* firstArr, int lenArr1, int* secondArr, int lenArr2)
{
    int* arr = new int [lenArr1 + lenArr2];
    bool check=false;
    if(firstArr[0] > firstArr[lenArr1-1])
    check = true;
    if(secondArr[0] > secondArr[lenArr2-1])
    check = true;
    for(int i = 0; i < lenArr1; i++)
    arr[i] = firstArr[i];
    for(int i = lenArr1; i < lenArr1 + lenArr2; i++)
    arr[i] = secondArr[i-lenArr1];
    if(check)
    sort(arr, arr + lenArr1 + lenArr2, greater<int>());
    else
    sort(arr, arr + lenArr1 + lenArr2);
    return arr;
}