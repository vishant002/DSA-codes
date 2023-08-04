bool binarysearch(vector<int> &v, int k, int l, int r){
    int mid = (l+r)/2;
    if(l > r){
        return false;
    }

    if(v[mid] == k){
        return true;
    }

    if(v[mid] < k){
        return binarysearch(v, k, mid + 1, r);
    }
    return binarysearch(v, k, l, mid - 1);
}