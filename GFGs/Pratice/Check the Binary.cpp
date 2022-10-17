bool isBinary(string str)
{
   // Your code here
   int i=0;
  while(str[i]!='\0'){
      if(str[i]!='0' && str[i]!='1'){
          return false;
      }
      i++;
      
  }
  return true;
}
