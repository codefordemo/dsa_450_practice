#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<int> myvector;
    // myvector.push_back(5);
    myvector.push_back(15);
    myvector.push_back(1);
    myvector.push_back(3);
    myvector.push_back(30);
    // vector<int>::iterator it = myvector.begin();
    // cout<<"the maxsize is "<<myvector.max_size()<<endl;
    // cout << "the size is " << myvector.size() << endl;
    // cout << "the capacity is " << myvector.capacity() << endl;

    vector<int> mysecondvector;
    mysecondvector.push_back(2);
    mysecondvector.push_back(4);
    mysecondvector.push_back(6);
    mysecondvector.push_back(8);
    mysecondvector.push_back(88);

    myvector.swap(mysecondvector); //swap myvector element to mysecondvetor element (but is should be of same type  )

    // myvector.insert(it,55); // used to insert element at begining
    // myvector.insert(it, 22, 4);// used to insert 22 copies i f 4(i.e 22 times 4 is inserted at begining)
    // myvector.erase(myvector.begin() + 3); //too erase the element at index 3
    // myvector.erase(myvector.begin(), myvector.begin() + 2); //too erase the element in range
    // myvector.pop_back();  //to delete element from end

    // for (int i = 1; i < 5; i++)
    // {
    //     myvector.push_back(i);
    // }

    // myvector<int>::iterator it = myvector.begin();
    // for (myvector<int> :: iterator it = myvector.begin(); it != myvector.end(); it++)
    // {
    //     cout<<"the vector is "<<i<<endl;
    // }
    // cout << "capacity is " << myvector.capacity() << endl;
    // cout << "size is " << myvector.size() << endl;
    // cout << myvector.data() << endl;

    // cout << "front element is " << myvector.front() << endl;
    // cout << "front element is " << myvector.front() << endl;
    // cout << "  element at index 2 is " << myvector[2] << endl;
    // cout << "  element at index 2 is using at method " << myvector.at(2) << endl;
    // myvector.push_back(111);
    // myvector.end();
    // cout << "  element at index 2 is using at method " << myvector.end() << endl;

    // for (vector<int> ::iterator it = myvector.begin() ; it < myvector.end(); it++)
    // {
    //     cout << "vectors are " << *it << endl;
    // }

    for (int i = 0; i < myvector.size(); i++)
    {
        cout << " MYVECTOR printing vector by simple method i.e without iterator " << myvector[i] << endl;
    }

    for (int i = 0; i < mysecondvector.size(); i++)
    {
        cout << " SECOND VECTOR printing vector by simple method i.e without iterator " << mysecondvector[i] << endl;
    }
    // vector<string> mvector { "this is a portal  ", "geels"};
    // for (auto i = mvector.begin(); i < mvector.end(); i++)
    // {
    //     cout << *i << endl;
    // }

    return 0;
}