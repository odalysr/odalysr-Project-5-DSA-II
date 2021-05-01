#include"lcs.hpp"
#include<fstream>
#include<string>
#include<vector>
#include<iostream>
#include<sstream>

using namespace std;

void LCS::readFile(){
    ifstream inFile;
    inFile.open("twoStrings.txt");
    inFile >> a >> b;
    inFile.close();
}
int LCS::computeLCS(){ //rturn the length of the common substr
    this->m = a.size()-1;
    this->n = b.size()-1;
    vect = vector<vector<int>>(a.size()+1, vector<int>(b.size()+1, 0)); //initalize multi dimen to zero
    int biggest = 0;
    for(int i = 1; i <= (int)a.size() ; i++){
        for(int j = 1; j <= (int)b.size(); j++){
            if (a.at(i-1) == b.at(j-1)){ 
                vect[i][j] = vect[i-1][j-1] + 1;
                biggest = (biggest > vect[i][j]) ? biggest : vect[i][j];
                //cout << 0;
            }
            else {
                vect[i][j] = (vect[i-1][j] >= vect[i][j-1]) ? vect[i-1][j] : vect[i][j-1];
                /*
                if (vect[i-1][j] >= vect[i][j-1]){
                    vect[i][j] = vect[i-1][j];
                }
                else{
                    vect[i][j] = vect[i][j-1]; 
                }*/
                
            }
        }    
    }
    return biggest;
}

string LCS::commonStr(){//returns commmon string
    string str;
    int mDim = m+1;
    int nDim = n+1;

    while (mDim > 0 && nDim > 0){
        if(a.at(mDim-1) == b.at(nDim-1)){
            str += a.at(mDim-1);//same mv diag
            --mDim;
            --nDim;
        }else if(vect[mDim-1][nDim] > vect[mDim][nDim-1]){//comparing left and top indexes of matrix
            --mDim;
        }else{
            --nDim;
        }
    }
    return str;
}
void LCS::directAccess(){

    stringstream ss;
    int currPos;
    currPos = 0; //character position
    string strChar; //actual char string
    string strLength;
    int numLines; //number of lines in file
    
    ifstream inFile;
    inFile.open("multiStrings.txt");
    
    inFile >> strLength;
    currPos += strLength.size()+1; 
    ss << strLength;
    ss >> numLines;
    //makeCommon(numLines); //Make the array to hold the LCS comparisons

    for(int i = 1; i < numLines; i++){
        inFile >> strChar; 
        currPos += strChar.size()+1; 
        this->a = strChar; 
        for(int j = i+1; j <= numLines; j++){
            inFile >> strChar; 
            this->b = strChar; 

            //int lcs = ShortLCS(); 
            //common[i-1][j-1] = params(a.size(), b.size(),lcs); 
        }
        //inFile.seekg(currPos-1, file.beg); 
    }
    inFile.close();

    //print
}
