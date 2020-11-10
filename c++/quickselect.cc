int quickSelect(int arr[], int start, int end, int k){
    int l, r;
    while(start <= end){
        if(start == end) return arr[start];
        int idx = rand()%(end-start+1) + start;
        swap(arr[idx], arr[start]);
        l = start+1, r = end;
        while(l <= r){
            if(arr[l] > arr[start] && arr[r] < arr[start]){
                swap(arr[l], arr[r]);
            }
            if(arr[l] <= arr[start])
                l++;
            if(arr[r] >= arr[start])
                r--;
        }
        swap(arr[start], arr[r]);
        if(r == k) return arr[r];
        else if(r < k)
            start = r+1;
        else
            end = r-1;
    }
    return -1;
}

int kthSmallest(int arr[], int l, int r, int k) {
    srand(time(0));
    k = k-1;
    if(k>=l && k<=r)
        return quickSelect(arr, l, r, k);
    return 0;
}
