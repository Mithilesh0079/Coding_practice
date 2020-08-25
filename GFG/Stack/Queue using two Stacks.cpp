void StackQueue :: push(int x)
 {
        s1.push(x);
 }

/*The method pop which return the element poped out of the queue*/
int StackQueue :: pop()
{
    if(s1.empty() && s2.empty())
    return -1;
    
    if(!s2.empty())
    {
        int n= s2.top();
        s2.pop();
        return n;
    }
   else if(s2.empty())
    {    
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
            //cout<<s2.top()<<endl;
            //break;
        } 
        int n= s2.top();
         s2.pop();
        return n;
    }
}
