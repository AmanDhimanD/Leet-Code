string reverseWord(string str){
    
  //Your code here
  string temp="";
  int i=str.length()-1;
  while(i>=0){
    temp+= str[i];
      i--;
  }
  return temp;
}
