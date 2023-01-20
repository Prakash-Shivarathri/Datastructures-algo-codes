public class QuickSort {
    // It is like merge sort we just divede based on pivot
    // pivot is a index find out
    // part 1: left to pivot-1,
    // part 2: right to pivot +1
    // pivot element is a element i.e. on correct position
    // all the element left are lesser
    // all element at right are larger

    public int pivotPartision( int []a,int left,int right){
        /*
        *  1.   Asuume Pivot elemnt as last element
        *  2.   Take two pointer i,j
        *  3.   i=left-1, j=left go till j<=right
        *        3.1  If curr element is lesser than pivot
        *           ---> i=i+1
        *           ---> swap(a[i],a[j]);
        *   4. Put the pivit element by swaping
        *   5. Return i+1
        *
        * */


        int pvtelement = a[right]; // assume last element
        int pvtindex=0;

        int i = left-1;
        // Iterations
        for(int j=left;j<right;j++){

            if(a[j]<pvtelement){
                i+=1;
                int tmp = a[i];
                   a[i]=a[j];
                   a[j]=tmp;
            }

        }

        // put pivot element at correct index
        int tmp=a[i+1];
        a[i+1]=a[right];
        a[right]=tmp;

        pvtindex=i+1;
        return pvtindex;
    }

    public void sort(int []a, int left,int right){

        if(left<right) {

            int pvt = pivotPartision(a,left,right);  // point of division
            // Divide
            sort(a, left, pvt-1); // work on left arr
            sort(a, pvt, right); // work on right arr
        }

    }
}