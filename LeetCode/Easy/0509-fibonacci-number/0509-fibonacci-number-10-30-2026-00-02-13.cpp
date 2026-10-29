class Solution {
    int fun(int x){
          if(x==0) return 0;
        if(x==1) return 1;

        int ans1=fib(x-1);
        int ans2=fib(x-2);

        return ans1+ans2;
    }
public:
    int fib(int n) {
      
      return fun(n);
    }
};