#include<iostream>
#include<limits.h>
using namespace std;

void rowsum(int brr[][3], int row, int column)
{
 for(int i =0; i<row; i++)
 {
    int sum =0;
    for(int j =0; j<column; j++)
    {
        sum += brr[j][i];
    }
    cout<<sum<<endl;
 }
}


bool findkey(int brr[][3], int row, int column, int key)
{
    for(int i =0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            if(key==brr[i][j])
            {return true;}
        }
    }
    return false;
}


int maxarray(int brr[][3], int row, int column)
{
    int maxi=INT_MIN;
    for(int i =0; i<row; i++)
    {
        for(int j =0; j<column; j++)
        {
           if(brr[i][j]> maxi)
           {
            maxi=brr[i][j];
           }
        }
    }
    return maxi;

}
int minarray(int brr[][3], int row, int column)
{
    int mini=INT_MAX;
    for(int i =0; i<row; i++)
    {
        for(int j =0; j<column; j++)
        {
           if(brr[i][j] < mini)
           {
            mini=brr[i][j];
           }
        }
    }
    return mini;

}

void transpose(int brr[][3], int row, int column, int tr[][3])
{
    for (int  i = 0; i < row; i++)
    {
        /* code */for(int j =0; j, column; j++)
        {
            tr[j][i]=brr[i][j];
        
        }
     
    }
    
}
int main()
{
    // int arr[3][3] ={ 
    //                {1,2,3},
    //                {1,5,6},
    //                {5,9,8} };
    // cout<<arr[0][2]<<" "<<arr[0][1]<<" ";
    
    // cout<<"Rowwise Print"<<endl;
    // for(int i=0; i<3; i++)
    // {
    //     for(int j =0; j<3; j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


    // cout<<"columnwise print"<<endl;
    // for(int i=0; i<3; i++)
    // {
    //     for(int j =0; j<3; j++)
    //     {
    //         cout<<arr[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }
int brr[3][3];
int row=3;
int column=3;

    for(int i=0; i<row; i++)
    {
        for(int j =0; j<column; j++)
        {
            cin>>brr[i][j];
        }
    }

    cout<<"Print 2d array"<<endl;
    
    for(int i=0; i<row; i++)
    {
        for(int j =0; j<column; j++)
        {
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }

    //rowsum( brr, row, column);

//    int key;
//    cin>>key;
//    bool z=findkey(brr,row,column,key);
//    cout<<z;

   
 int maximum=  maxarray(brr, row,column);
 cout<<maximum;
  int minimum=  minarray(brr, row,column);
 cout<<minimum;
  int tr[3][3];
  transpose(brr,row,column,tr);
    return 0;
}