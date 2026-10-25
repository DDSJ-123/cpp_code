#include <iostream>
#include <string>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

Node *head = NULL;

void add(int x)
{
    if(head != NULL){
        Node *newNode = new Node;
        newNode->data = x;
        newNode->next = NULL;
        Node *p = head;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = newNode;
    }else{
        head = new Node;
        head->data = x;
        head->next = NULL;
    }
}

void insert(int n,int x)
{
    Node *newNode = new Node;
    newNode->data = x;
    newNode->next = NULL;
    if(n == 1){
        newNode->next = head;
        head = newNode;
    }else{
        int i;
        Node *p = head;
        for(int i = 1;i <= n - 2;i++){
            p = p->next;
            if(p == NULL){
                break;
            }
        }
        if(p == NULL){
            cout<<"错误:n的值有误"<<endl;
        }else{
            newNode->next = p->next;
            p->next = newNode;
        }
    }
}

void deldata(int data)
{
    Node *p = head,*pre = NULL;
    while(p != NULL){
        if (data == p->data)
        {
            if (p == head)
            {
                head = p->next;
            }else{
                pre->next = p->next;
            }
            delete p;
            break;
        }
        pre = p;
        p = p->next;
    }
}

void delops(int n)
{
    Node *p = head,*t;
    if(n == 1){
        if(head != NULL)
        {
            head = head->next;
            delete p;
        }else{
            cout<<"链表已空"<<endl;
        }
    }else{
        for(int i = 1;i <= n - 2;i++){
            p = p->next;
            if(p == NULL){
                break;
            }
        }
        if(p == NULL || p->next ==NULL){
            cout<<"错误:n的值不存在"<<endl;
        }else{
            t = p->next;
            p->next = t->next;
            delete t;
        }
    }
}

void display()
{
    Node *p = head;
    while (p != NULL)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<endl;
}

int main()
{
    int n,x;
    string sr;
    while(1){
        cout<<"\n1:追加 2:插入 3:删除值 4:删除位置 5:显示 6:退出\n请输入:";
        cin>>sr;
        cout<<endl;
        if(sr == "1" || sr == "1:追加" || sr == "追加"){
            cout<<"请输入值:";
            cin>>x;
            add(x);
        }
        if(sr == "2" || sr == "2:插入" || sr == "插入"){
            cout<<"请输入位置:";
            cin>>n;
            cout<<"\n请输入值:";
            cin>>x;
            insert(n,x);
        }
        if(sr == "3" || sr == "3:删除值" || sr == "删除值"){
            cout<<"请输入值:";
            cin>>x;
            deldata(x);
        }
        if(sr == "4" || sr == "4:删除位置" || sr == "删除位置"){
            cout<<"请输入位置:";
            cin>>n;
            delops(n);
        }
        if(sr == "5" || sr == "5:显示" || sr == "显示"){
            display();
        }
        if(sr == "6" || sr == "6:退出" || sr == "退出"){
            cout<<"----------------------------------\n";
            cout<<"感谢使用";
            break;
        }
    }    
    return 0;
}
