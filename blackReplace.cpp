class Solution {
public:
	void replaceSpace(char *str,int length) {
        int blackCounter=0;
        for(int i=0;i<length;i++){
            if(str[i]==' ') ++blackCounter;
        }
        for(int i=length-1;i>=0;--i){
            if(str[i]!=' ') str[i+2*blackCounter]=str[i];
            else{
                str[i+2*blackCounter]='0';
                str[i+2*blackCounter-1]='2';
                str[i+2*blackCounter-2]='%';
                --blackCounter;
            }
        }
	}
};
