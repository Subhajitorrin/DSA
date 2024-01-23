vector<int> rotateArray(vector<int>arr, int k) {
    // reduce the kth elemnt with modulo
    k=k%arr.size();

    // reverse the vector from index 0 to k-1 
    // [reverse function go till < second parameter passed]
    reverse(arr.begin(),arr.begin()+k);

    // reverse the vector from index k to less than end
    reverse(arr.begin()+k,arr.end());

    // reverse the complete vector
    reverse(arr.begin(),arr.end());

    // return the vector
    return arr;
}
