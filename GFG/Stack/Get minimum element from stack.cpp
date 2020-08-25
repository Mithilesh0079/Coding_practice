int minx=INT_MAX;

int _stack :: getMin()
{
   if(s.empty())
   {
       minx=-1;
   }
   return  minx;
}

/*returns poped element from stack*/
int _stack ::pop()
{
    if(s.empty()){
      minx=-1;
      return -1;
    }
    else 
    {
        int x= s.top();
        s.pop();
        if(x<=minx)
        {    
             int curr= minx;
             minx= 2*minx-x;
             x= curr;
        }
        return x;
     }
}
/*push element x into the stack*/
void _stack::push(int x)
{
  if(s.empty())
  {
      s.push(x);
      minx= x;
  }
  else if(x<=minx)
  {
      s.push(2*x-minx);
      minx= x;
  }
  else 
  s.push(x);
}
