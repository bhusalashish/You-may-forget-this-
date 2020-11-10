
typedef pair<int, int> pi;

#For MIN_Heap
class comp{
  public:
    bool operator ()(pi &a, pi &b){
        return a.second > b.second;     //min_heap
    } 
};

//For Max_Heap
class comp{
  public:
    bool operator ()(pi &a, pi &b){
        return a.second < b.second;     //max_heap
    } 
};


int main(){
    priority_queue<pi, vector<pi>,  comp > pq; 
    return 0;
}
