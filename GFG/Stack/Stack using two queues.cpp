void QueueStack :: push(int x)
{
        q1.push(x);
}

/*The method pop which return the element poped out of the stack*/
int QueueStack :: pop()
{
       if(q1.empty() && q2.empty())
       return -1;
       
       int n;
       if(!q1.empty())
       {
           while(q1.size()>1)
           {
               q2.push( q1.front());
               q1.pop();
           }
           int n= q1.front();
           q1.pop();
           return n;
       }
       else
       {
           while(q2.size()>1)
           {   
               q1.push(q2.front());
               q2.pop();
           }
           int n = q2.front();
           q2.pop();
           return n;
       }
}
