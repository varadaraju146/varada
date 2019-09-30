void countword()
{
ifstream fin;
 fin.open("STORY.TXT");
 char word[30];
 int count=0;
 while(!fin.eof())
 {
  fin>>word;
  if(strcmpi(word,"the")==0)
   count++;
 }
 cout<<"Number of the word in file are "<<count;
 fin.close();
}
