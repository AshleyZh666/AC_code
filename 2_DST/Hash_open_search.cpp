#include<iostream>
#include<cstring>
#include<string.h>
#include<algorithm>
#include<vector>

using namespace std;

///��������  ����
////��������ӣ����ң�ɾ������ͬ�ڲ��ң����ҵ�����Ϊfalse��


int search_first_N(int x){
    for(int i = x ;;++i){
        bool flag = true;
        for(int j = 2 ; j * j < i ; ++j){
            if (i % j == 0){
                flag = false ;
                break;
            }
        }
        if(flag){
            return i;
        }
    }
}
const int N = search_first_N(100000);///////���Ϊ����
// const int INF = 1e9;
int n ;
int h[N * 2];//////// ������������
// ���x�ڹ�ϣ���У�����x���±ꣻ���x���ڹ�ϣ���У�����xӦ�ò����λ��
int find(int x){
    int k = (x % N + N) % N;
    while(h[k] != null && h[k] != x)//////�ӱ�ռ��
    {
        ++k;
        /////////���������
        if (k == N * 2) k = 0 ;
    }
    return k;
}
// 3 3
// 1 2 2
// 2 3 1
// 1 3 4
int main(){
    scanf("%d%d" , &n );
    while(n--){
        char oper[2];
        int x;
        scanf("%s%d" , oper,&x);
        if (h[find[x]] == x)
        // if (*oper == "I") h[find[x]] = x;
        // else {
        //     if (query(x)) puts("Yes");
        //     else puts("No");
        // }
    }
    printf("\nC ܳ mother fucker\n");
    system("pause");
}
