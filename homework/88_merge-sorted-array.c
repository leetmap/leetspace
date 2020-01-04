void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    int newlocation = m + n;
    int tmp_m = m;
    int tmp_n = n;
    while ( newlocation > 0 && tmp_m && tmp_n ) {
        if ( *( nums1 + tmp_m - 1 ) <= *( nums2 + tmp_n - 1 ) ) {
            *( nums1 + newlocation - 1 ) = *( nums2 + tmp_n - 1 );
            tmp_n--;
        } else {
            *( nums1 + newlocation - 1 ) = *( nums1 + tmp_m - 1 );
            tmp_m--;
        }
        newlocation--;
    }
    while ( newlocation > 0 ) {
        while (tmp_m) {
            *( nums1 + newlocation - 1 ) = *( nums1 + tmp_m - 1 );
            tmp_m--; 
            newlocation--;
        }
        while (tmp_n) {
            *( nums1 + newlocation - 1 ) = *( nums2 + tmp_n - 1 );
            tmp_n--; 
            newlocation--;
        }
    }
    return ;
}
