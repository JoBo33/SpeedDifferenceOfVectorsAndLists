
#include <iostream>
#include <vector>
#include <chrono>
#include <list>


using namespace std;

int main()
{
    auto start1 = chrono::steady_clock::now();

    std::vector<int> v1;
    for (int i = 0; i < 1000000; i++)
    {
        v1.push_back(i);

    }
    auto end1 = chrono::steady_clock::now();

    std::cout << "Time of vector on stack with push_back: " << chrono::duration_cast<chrono::microseconds>(end1 - start1).count() << " microseconds\n\n";


    auto start2 = chrono::steady_clock::now();
    std::vector<int> v2;
    v2.reserve(1000000);
    for (int i = 0; i < 1000000; i++)
    {
        v2.push_back(i);

    }
    auto end2 = chrono::steady_clock::now();

    std::cout << "Time of vector on stack with push_back and with reserved memory: " << chrono::duration_cast<chrono::microseconds>(end2 - start2).count() << " microseconds\n\n";


    auto start3 = chrono::steady_clock::now();
    std::vector<int> v3;
    for (int i = 0; i < 1000000; i++)
    {
        v3.emplace_back(i);

    }
    auto end3 = chrono::steady_clock::now();

    std::cout << "Time of vector on stack with emplace_back: " << chrono::duration_cast<chrono::microseconds>(end3 - start3).count() << " microseconds\n\n";


    auto start4 = chrono::steady_clock::now();
    std::vector<int> v4;
    v4.reserve(1000000);
    for (int i = 0; i < 1000000; i++)
    {
        v4.emplace_back(i);

    }
    auto end4 = chrono::steady_clock::now();

    std::cout << "Time of vector on stack with emplace_back and with reserved memory: " << chrono::duration_cast<chrono::microseconds>(end4 - start4).count() << " microseconds\n\n";


    auto start5 = chrono::steady_clock::now();
    std::list<int> v5;
    for (int i = 0; i < 1000000; i++)
    {
        v5.emplace_back(i);

    }
    auto end5 = chrono::steady_clock::now();

    std::cout << "Time of list on stack with emplace_back: " << chrono::duration_cast<chrono::microseconds>(end5 - start5).count() << " microseconds\n\n";
    
    auto start6 = chrono::steady_clock::now();
    std::list<int> v6;
    for (int i = 0; i < 1000000; i++)
    {
        v6.push_back(i);

    }
    auto end6 = chrono::steady_clock::now();

    std::cout << "Time of list on stack with push_back: " << chrono::duration_cast<chrono::microseconds>(end6 - start6).count() << " microseconds\n\n";



    auto start8 = chrono::steady_clock::now();

    std::vector<int>* v8 = new vector<int>;
    for (int i = 0; i < 1000000; i++)
    {
        v8->push_back(i);

    }
    auto end8 = chrono::steady_clock::now();

    std::cout << "Time of vector on heap with push_back: " << chrono::duration_cast<chrono::microseconds>(end8 - start8).count() << " microseconds\n\n";


    auto start9 = chrono::steady_clock::now();
    std::vector<int>* v9 = new vector<int>;
    v9->reserve(1000000);
    for (int i = 0; i < 1000000; i++)
    {
        v9->push_back(i);

    }
    auto end9 = chrono::steady_clock::now();

    std::cout << "Time of vector on heap with push_back and reserved memory: " << chrono::duration_cast<chrono::microseconds>(end9 - start9).count() << " microseconds\n\n";


    auto start10 = chrono::steady_clock::now();
    std::vector<int>* v10 = new vector<int>;
    for (int i = 0; i < 1000000; i++)
    {
        v10->emplace_back(i);

    }
    auto end10 = chrono::steady_clock::now();

    std::cout << "Time of vector on heap with emplace_back: " << chrono::duration_cast<chrono::microseconds>(end10 - start10).count() << " microseconds\n\n";


    auto start11 = chrono::steady_clock::now();
    std::vector<int>* v11 = new vector<int>;
    v11->reserve(1000000);
    for (int i = 0; i < 1000000; i++)
    {
        v11->emplace_back(i);

    }
    auto end11 = chrono::steady_clock::now();

    std::cout << "Time of vector on heap with emplace_back and reserved memory: " << chrono::duration_cast<chrono::microseconds>(end11 - start11).count() << " microseconds\n\n";


    auto start12 = chrono::steady_clock::now();
    std::list<int>* v12 = new list<int>;
    for (int i = 0; i < 1000000; i++)
    {
        v12->emplace_back(i);

    }
    auto end12 = chrono::steady_clock::now();

    std::cout << "Time of list on heap with emplace_back: " << chrono::duration_cast<chrono::microseconds>(end12 - start12).count() << " microseconds\n\n";
    
    auto start13 = chrono::steady_clock::now();
    std::list<int>* v13 = new list<int>;
    for (int i = 0; i < 1000000; i++)
    {
        v13->push_back(i);

    }
    auto end13 = chrono::steady_clock::now();

    std::cout << "Time of list on heap with push_back: " << chrono::duration_cast<chrono::microseconds>(end13 - start13).count() << " microseconds\n\n";


}
