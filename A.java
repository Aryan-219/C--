class A {
   
    static int n = 3;
    static int x = 2 * n - 1;
    static int a = 1;
    static int d;
    static int distance;
    // ****************************
    static int calcDist(int i, int j, int n){
        
          
        if (i >= n || j >= n){
            if (i > j)
            {
                distance = Math.abs(i - n + 1);
            }
            else
            {
                distance = Math.abs(j - n + 1);
            }
        }
        else{
            

            if (i < j)
            {

                distance = Math.abs(n - i+1);
            }
            else
            {
                distance = Math.abs(n - j+1);
            }
    }
        return distance;
    }
    // ****************************
     public static void main(String[] args){
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            d = A.calcDist(i, j, n);
            System.out.print( a + d);
        }
        System.out.println();
    }
    }
}