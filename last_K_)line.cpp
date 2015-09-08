void prinLast10Lines(char* fileName){
  const int k=10;
  ifstream fiel (fileName);
  string L[k];
  int size = 0;
  
  //逐行读取文件，并存入循环式数组
  while(file.good()) {
    getline(file,L[size % k]);
    size++;
    }
  
  //计算循环式数组的开头和大小
  int start = size > k ? (size%k):0;
  int count = min(k,size);
  
  //根据读取顺序，打印数组元素
  for (int i=0;i < count;i++) {
  count << L[(start + i)%k] << endl;
  }
