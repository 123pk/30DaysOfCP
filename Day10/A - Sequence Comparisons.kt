/*
Platform :- Codeforces
Contest :- Kotlin Heros Round 8
Approach :- if there is both '>' and '<' in string then we have multiple answers and our answer is '?' , no we are left with case when we have either one of type and we print that
            type.
*/
fun main(args: Array<String>) {
    val t = Integer.valueOf(readLine())
    for(i in 1..t)
    { 
      
      val s=readLine()!!
      //var start = 1000
      var c=0
      var d=0
      
      for(j in s.indices){
         if(s[j]=='<')c+=1
         else{
           if(s[j]=='>'){
             d+=1
           }
         }
      }
       
      if(c!=0 && d!=0)println('?')
      else{
         if(c!=0)println('<')
         else {
          if(d!=0)println('>')
          else println('=')
          }
          
      }
    }
}
