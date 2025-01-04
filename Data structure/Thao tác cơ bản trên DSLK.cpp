#include <bits/stdc++.h>

using namespace std;

struct NODE{
    int data;
    NODE *next = NULL;
};

//tao mot not moi
NODE* makeNode(int x){
    NODE* tmp = new NODE();
    tmp -> data = x;
    tmp -> next = NULL;
    return tmp;
}

//dem so phan tu
int Size(NODE *a){
    int cnt = 0;
    while(a != NULL){
        cnt ++;
        a = a -> next;
    }
    return cnt;
}

//them 1 phan tu vào dau DSLK
void insertFist(NODE *&a,int x){
    NODE *tmp = makeNode(x);
    if(a == NULL){
        a = tmp;
    }
    else{
        tmp->next = a;
        a = tmp;
    }
}

//them 1 phan tu vao cuoi DSLK
void insertLast(NODE *&a, int x){
    NODE *tmp = makeNode(x);
    if(a==NULL){
        a = tmp;
    }
    else{
        NODE *p = a;
        while(p->next != NULL){
            p = p -> next;
        }
        p -> next = tmp;
    }
}

//them 1 phan tu vao giua DSLK
void insertMiddle(NODE *&a, int x, int pos){
    int n = Size(a);
    if(n == 1)  insertFist(a, x);
    else if(n = pos + 1)  insertLast(a,x);
    else{
        NODE *p = a;
        for(int i = 1; i < pos-1; i++){
            p = p->next;
        }
        NODE *tmp = makeNode(x);
        tmp -> next = p -> next;
        p -> next = tmp;
    }
}

void deleteFist(NODE *&a){
    if(a == NULL) return;
    a = a-> next;
}

void deleteLast(NODE *&a){
    if(a == NULL) return;
    NODE *truoc = NULL, *sau = a;
    while(sau -> next == NULL){
        truoc = sau;
        sau = sau -> next;
    }
    if(truoc == NULL){
        a = NULL;
    }
    else{
        truoc -> next = NULL;
    }
}

void deleteMiddle(NODE *&a, int pos){
    if(pos <= 0 || pos > Size(a)) return;
    NODE *truoc = NULL, *sau = a;
    for(int i = 0; i < pos; i++){
        truoc = sau;
        sau = sau -> next;
    }
    if(truoc = NULL){
        a = NULL;
    }
    else{
        truoc -> next = sau -> next;
    }
}

void in(NODE *a){
    cout << "---------------------------------\n";
    while(a != NULL){
        cout << a -> data << " ";
        a = a-> next;
    }
    cout << endl;
}

void sapxep(NODE *&a){
    
    for(NODE *p = a; p -> next != NULL; p = p -> next){
        NODE *min = p;
        for(NODE *q = p -> next; q!= NULL; q = q -> next){
            if(q -> data < min -> data){
                min = q;
            }
        }
        int tmp = min -> data;
        min -> data = p -> data;
        p -> data = tmp;
        
    }
}

int main() {
    NODE *head = NULL;
    while(1){
        cout << "--------------MENU---------------\n";
        cout << "0. Exit\n";
        cout << "1. Chen phan tu vao dau danh sach\n";
        cout << "2. Chen phan tu vao cuoi danh sach\n";
        cout << "3. Chen phan tu vao giua danh sach\n";
        cout << "4. Xoa phan tu o dau\n";
        cout << "5. Xoa phan tu o cuoi\n"; 
        cout << "6. Xoa phan tu o giua\n";
        cout << "7. Duyet danh sach lien ket\n";
        cout << "8. Sap xep danh sach lien ket\n";
        cout << "---------------------------------\n";
        cout << "Nhap lua chon : ";
        int lc; cin >> lc;
        if (lc == 0) break;
        switch(lc){
            case 1:{
                int x; cout << "nhap gia tri can chen :"; cin >> x;
                insertFist(head, x);
                break;
            }
            case 2:{
                int x; cout << "nhap gia tri can chen :"; cin >> x;
                insertLast(head, x);
                break;
            }
            case 3:{
                int x; cout << "nhap gia tri can chen :"; cin >> x;
                int pos; cout << "nhap vi tri can chen : "; 
                cin >> pos;
                insertFist(head, x);
                break;
            }
            case 4:{
                deleteFist(head);
                break;
            }
            case 5:{
                deleteLast(head);
                break;
            }
            case 6:{
                int pos; cout << "nhap vi tri can xoa : "; 
                cin >> pos;
                deleteMiddle(head, pos);
                break;
            }
            case 7:{
                in(head);
                break;
            }
            case 8:{
                sapxep(head);
                break;
            }
        }
    }
    
}
