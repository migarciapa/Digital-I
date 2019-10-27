#include "iostream"
using namespace std;

int main()
{
    //coordenadas[Pin][x3][x2][x1][x0]
    bool tabla[7][2][2][2][2]={
    {{{{1,0},{1,1}},{{0,1},{1,1}}},{{{1,1},{1,0}},{{1,0},{1,1}}}},
    {{{{1,1},{1,1}},{{1,0},{0,1}}},{{{1,1},{1,0}},{{0,1},{0,0}}}},
    {{{{1,1},{0,1}},{{1,1},{1,1}}},{{{1,1},{1,1}},{{0,1},{0,0}}}},
    {{{{1,0},{1,1}},{{0,1},{1,0}}},{{{1,0},{0,1}},{{1,1},{1,0}}}},
    {{{{1,0},{1,0}},{{0,0},{1,0}}},{{{1,0},{1,1}},{{1,1},{1,1}}}},
    {{{{1,0},{0,0}},{{1,1},{1,0}}},{{{1,1},{1,1}},{{1,0},{1,1}}}},
    {{{{0,0},{1,1}},{{1,1},{1,0}}},{{{1,1},{1,1}},{{0,1},{1,1}}}}};
    
    for(int x3=0; x3<=1; x3++){
    for(int x2=0; x2<=1; x2++){
    for(int x1=0; x1<=1; x1++){
    for(int x0=0; x0<=1; x0++){
        cout << x3 << x2 << x1 << x0 <<" | ";
    for(int P=0; P<=6; P++){
        cout << tabla [P][x3][x2][x1][x0];
    }   cout << endl;
    }}}}
    
    cout << "----------------------------\n";
    
    int conteo[7][3][3][3][3];
    
    for(int y3=0; y3<=2; y3++){
    for(int y2=0; y2<=2; y2++){
    for(int y1=0; y1<=2; y1++){
    for(int y0=0; y0<=2; y0++){
        
        int ver =1;
        if(y3==2){ver=ver*2;}
        if(y2==2){ver=ver*2;}
        if(y1==2){ver=ver*2;}
        if(y0==2){ver=ver*2;}
        
        cout << y3 << y2 << y1 << y0 <<" | "<<ver<<"\t| ";
        
    for(int P=0; P<=6; P++){
        
        conteo[P][y3][y2][y1][y0]=0;
        
        for(int x3=0; x3<=1; x3++){
        for(int x2=0; x2<=1; x2++){
        for(int x1=0; x1<=1; x1++){
        for(int x0=0; x0<=1; x0++){
            if((y3==2||y3==x3)&&(y2==2||y2==x2)&&(y1==2||y1==x1)&&(y0==2||y0==x0)&&tabla[P][x3][x2][x1][x0]){
                conteo[P][y3][y2][y1][y0]++;}
        }}}}
        
        conteo[P][y3][y2][y1][y0]=(conteo[P][y3][y2][y1][y0]==ver);
        
        cout << conteo[P][y3][y2][y1][y0];
        
    }   cout << endl;
    }}}}
    
    
    for(int y3=0; y3<=2; y3++){
    for(int y2=0; y2<=2; y2++){
    for(int y1=0; y1<=2; y1++){
    for(int y0=0; y0<=2; y0++){
        
    for(int P=0; P<=6; P++){
        
        if(conteo[P][y3][y2][y1][y0]==1){
            for(int x3=0; x3<=2; x3++){
            for(int x2=0; x2<=2; x2++){
            for(int x1=0; x1<=2; x1++){
            for(int x0=0; x0<=2; x0++){
            
            if((x3!=y3||x2!=y2||x1!=y1||x0!=y0)&&(y3==2||y3==x3)&&(y2==2||y2==x2)&&(y1==2||y1==x1)&&(y0==2||y0==x0)&&conteo[P][x3][x2][x1][x0]==1){
                conteo[P][x3][x2][x1][x0]=0;
        }}}}}}
        
    }}}}}
    
    cout << "----------------------------\n";
    
    for(int y3=0; y3<=2; y3++){
    for(int y2=0; y2<=2; y2++){
    for(int y1=0; y1<=2; y1++){
    for(int y0=0; y0<=2; y0++){
        
    cout << y3 << y2 << y1 << y0 <<" | ";
    
    for(int P=0; P<=6; P++){
        cout << conteo[P][y3][y2][y1][y0];
    }   cout << "\n";
    }}}}
    
    cout << "----------------------------\n";
    
    int coincide [2][2][2][2][2][2][2];
    
    for(int c0=0; c0<=1; c0++){
    for(int c1=0; c1<=1; c1++){
    for(int c2=0; c2<=1; c2++){
    for(int c3=0; c3<=1; c3++){
    for(int c4=0; c4<=1; c4++){
    for(int c5=0; c5<=1; c5++){
    for(int c6=0; c6<=1; c6++){
        
        coincide [c0][c1][c2][c3][c4][c5][c6]=0;
        for(int x3=0; x3<=2; x3++){
        for(int x2=0; x2<=2; x2++){
        for(int x1=0; x1<=2; x1++){
        for(int x0=0; x0<=2; x0++){
            
            if( c0==conteo[0][x3][x2][x1][x0]&&
                c1==conteo[1][x3][x2][x1][x0]&&
                c2==conteo[2][x3][x2][x1][x0]&&
                c3==conteo[3][x3][x2][x1][x0]&&
                c4==conteo[4][x3][x2][x1][x0]&&
                c5==conteo[5][x3][x2][x1][x0]&&
                c6==conteo[6][x3][x2][x1][x0]){
            coincide [c0][c1][c2][c3][c4][c5][c6]++;
            
        }}}}}
        cout << c0 << c1 << c2 << c3 << c4 << c5 << c6 << " | " << coincide [c0][c1][c2][c3][c4][c5][c6] << "\n";
        
    }}}}}}}
    
    return 0;
}