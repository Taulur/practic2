// ВАРИАНТ 23

// 1

//int main()
//{
//    setlocale(LC_ALL, "RU");
//    srand(time(NULL));
//
//    int answer = 0;
//    cout << "starting array :" << endl;
//
//    int massiv[10];
//
//    for (int i = 0; i < 9; i++)
//    {
//     
//        massiv[i] = rand() % 10;
//        cout << massiv[i] << endl;
//    }
//
//    cout << "answer :" << endl;
//
//    for (int i = 0; i < 9; i++)
//    {
//        if (massiv[i] % 3 == 0)
//        {
//            answer += massiv[i];
//        }
//    }
//    cout << answer << endl;
//}


// 2

//int main()
//{
//    setlocale(LC_ALL, "RU");
//    srand(time(NULL));
//
//    int answer = 0;
//    cout << "starting array :" << endl;
//
//    int size = 5;
//
//    int massiv[5][5][5];
//
//    for (int i = 0; i < size - 1; i++)
//    {
//
//        for (int j = 0; j < size - 1; j++)
//        {
//            for (int k = 0; k < size - 1; k++)
//            {
//                massiv[i][j][k] = rand() % 10;
//                cout << massiv[i][j][k] << " ";
//            }
//            cout << "\n";
//            
//        }
//        cout << "\n";
//     
//    }
//
//    for (int i = 0; i < size - 1; i++)
//    {
//        int answer = 0;
//
//        for (int j = 0; j < size - 1; j++)
//        {
//            for (int k = 0; k < size - 1; k++)
//            {
//                if (massiv[i][j][k] % 4 == 0)
//                {
//                    answer += massiv[i][j][k];
//                }
//               
//            }
//           
//        }
//        cout << "answer is " << answer << endl;
//
//    }
//}

// 3

//int main()
//{
//    setlocale(LC_ALL, "RU");
//    srand(time(NULL));
//
//    struct Triangle
//    {
//        double side1;
//        double side2;
//        double side3;
//    };
//
//    int temp;
//    Triangle triangle;
//
//    cout << "enter first side" << endl;
//    cin >> temp;
//    triangle.side1 = temp;
//    cout << "enter second side" << endl;
//    cin >> temp;
//    triangle.side2 = temp;
//    cout << "enter third side" << endl;
//    cin >> temp;
//    triangle.side3 = temp;
//
//    if (triangle.side3 * triangle.side3 == (triangle.side2 * triangle.side2) + (triangle.side1 * triangle.side1))
//    {
//        cout << "triangle is pryamougolni";
//
//    }
//    else
//    {
//        cout << "triangle is not pryamougolni";
//    }
//}

// 4

//int main()
//{
//    setlocale(LC_ALL, "RU");
//    srand(time(NULL));
//
//
//    class BinarySearch
//    {
//        int size = 10;
//        int data[10];
//
//    public:
//
//        void Search(int target)
//        {
//            for (int i = 0; i < 9; i++)
//            {
//
//                data[i] = rand() % 10;
//                cout << data[i] << endl;
//            }
//
//            int i = 1;
//            int j = 2;
//
//            while (i < 9)
//            {
//                if (data[i - 1] < data[i])
//                {
//                    i = j;
//                    j++;
//                }
//                else
//                {
//                    int temp = data[i - 1];
//                    data[i - 1] = data[i];
//                    data[i] = temp;
//                    i--;
//                    if (i == 0)
//                    {
//                        i = j;
//                        j++;
//                    }
//                }
//            }
//
//            cout << "\n";
//
//            for (int i = 0; i < 9; i++)
//            {
//                cout << data[i] << endl;
//            }
//
//
//
//            bool completed = false;
//            int left = 0;
//            int right = size - 1;
//            int mid = 0;
//
//            while (left <= right && completed == false)
//            {
//                mid = (left + right) / 2;
//
//                if (target == data[mid])
//                {
//                    cout << "found!";
//                    completed = true;
//                }
//                if (data[mid] > target)
//                {
//                    right = mid - 1;
//
//                }
//                else
//                {
//                    left = mid + 1;
//
//                }
//                cout << data[mid];
//
//            }
//        }
//    };
//
//
//
//
//    BinarySearch binarySearch;
//
//    binarySearch.Search(5);
//
//
//
//
//}


