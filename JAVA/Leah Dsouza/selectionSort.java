class SelectionSort
{
    void sSort(int a[])
    {
        int len = a.length;
 
        for (int i = 0; i < len-1; i++)
        {
            
            int min = i;
            for (int j = i+1; j < len; j++)
                if (a[j] < a[min])
                    min = j;
 
            int temp = a[min];
            a[min] = a[i];
            a[i] = temp;
        }
    }
 
    
    void printArray(int a[])
    {
        for (int i=0; i<a.length; i++)
            System.out.print(a[i]+" ");
        System.out.println();
    }
 
    public static void main(String args[])
    {
        Selectionsort s = new SelectionSort();
        int numarr[] = {12,56,76,102,67,90};
        
        System.out.print("Original array: ");
        s.printArr(numarr);
        
        
        s.sSort(numarr);
        
        System.out.print("Sorted array: ");
        s.printArr(numarr);
    }
}