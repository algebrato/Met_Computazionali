# 1 "get_set.cpp"
# 1 "<command-line>"
# 1 "get_set.cpp"



class Number{
 int i_;

 public:
 int get() {
        return i_;
 }

 void set(int i){
  i_ = i;
 }
};



int main(){
 Number n;
 n.set(5);
 return n.get();
}
