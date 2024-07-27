#include <string>
#include <map>
int longestSeq(int max_len,std::string input,std::map<std::string,int> dna)
{
      for(int i=0;i<input.size();i++)
    {
    auto it = dna.find(input[i]);
        if ( it >= 1)
        {
            return i;
        }
        it++;
        
    }  
}
int main()
{

    std::map<std::string,int> dna = {{"a",0},{"g",0},{"c",0},{"t",0}};
    std::string input = "attcggga";

}