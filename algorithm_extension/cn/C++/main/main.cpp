#include "question/85_Maximal_Rectangle.cpp"
#include "regex"
#include "algm/parse.h"
int main(int argc, char *argv[])
{
    string str = "[[\"[[\\\"1\\\",\\\"0\\\",\\\"1\\\",\\\"0\\\",\\\"0\\\"],[\\\"1\\\",\\\"0\\\",\\\"1\\\",\\\"1\\\",\\\"1\\\"],[\\\"1\\\",\\\"1\\\",\\\"1\\\",\\\"1\\\",\\\"1\\\"],[\\\"1\\\",\\\"0\\\",\\\"0\\\",\\\"1\\\",\\\"0\\\"]]\"]]";
    vector<vector<string>> arr = parseStringArrArr(str);
    for (int i = 0; i < arr.size(); i++)
    {
      vector<string> args = arr[i];
      Solution *s = new Solution();
      vector<vector<char>> arg0 = parseCharArrArr(args[0]);
      int result=s->maximalRectangle(arg0);
      string resultabc =serializeInteger(result);
      cout << "resultabc"+to_string(i)+":" << resultabc <<"resultend"<< endl;
    }
    return 0;
}