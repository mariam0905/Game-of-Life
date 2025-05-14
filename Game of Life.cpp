#include<iostream>
#include<vector>
#include<limits>
using namespace std;
class Universe
{
    static const int rows = 20;
    static const int cols = 20;
    int arr[rows][cols];
    public:
    Universe()
    {
        Universe::initialize();
    }
    void initialize()
    {
        for(int i = 0 ; i < rows ; i++)
        {
            for(int j = 0 ; j < cols ; j++)
            {
                arr[i][j] = 0;
            }
        }
    }
    void reset()
    {
        Universe::initialize();
    }
    void display()
    {
        for(int i = 0 ; i < rows ; i++)
        {
            for(int j = 0 ; j < cols ; j++)
                cout << (arr[i][j] ? "*" : " ") << " ";
            cout << endl;
        }
    }
    int count_neighbors(int x, int y)
    {
        int count = 0;
        for (int i = -1; i <= 1; ++i)
        {
            for (int j = -1; j <= 1; ++j)
            {
                if (i == 0 && j == 0) continue; // Skip the cell itself
                int ni = x + i;
                int nj = y + j;
                if (ni >= 0 && ni < rows && nj >= 0 && nj < cols)
                { // Check boundaries
                    count += arr[ni][nj];
                }
            }
        }
        return count;
    }
    void next_generation()
    {
        int new_arr[rows][cols] = {0}; // Initialize with zeros
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                int live_neighbors = count_neighbors(i, j);
                if (arr[i][j] == 1)
                {
                    if (live_neighbors == 2 || live_neighbors == 3)
                    {
                        new_arr[i][j] = 1;
                    }
                }
                else
                {
                    if (live_neighbors == 3) {
                        new_arr[i][j] = 1;
                    }
                }
            }
        }
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                arr[i][j] = new_arr[i][j];
            }
        }
    }

    void run()
    {
        int m , l ,n;
        cout << "enter how many cells to be alive " << endl;
        while(true)
        {
            cin >> n;
            if(cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input. Please enter a valid number.\n";
            }
            else if(n <= 0)
            {
                cout << "Number must be greater than 0. Please try again.\n";
            }
            else
            {
                cout << "the number of living cells you entered: " << n << "\n";
                break;
            }
        }
        for(int k = 0 ; k < n ; k++)
        {
            while(true)
            {
                cout << "enter the index of cell no. " << k+1 << " to be alive " << endl;
                cin >> m >> l;
                if(cin.fail() || m < 0 || m > 19 || l < 0 || l > 19)
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Index number must be between 0 and 19 included. Please try again.\n";
                }
                else
                {
                    cout << "You entered the cell of index : " << m << " " << l << "\n";
                    break;
                }
            }
            if (m >= 0 && m < rows && l >= 0 && l < cols)
            {
                arr[m][l] = 1;
            }
        }
        int num;
        cout << "please enter the number of generations u want : "<< endl;
        while(true)
        {
            cin >> num;
            if(cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input. Please enter a valid number.\n";
            }
            else if(num <= 0)
            {
                cout << "Number must be greater than 0. Please try again.\n";
            }
            else
            {
                cout << "the number of generation you entered: " << num << "\n";
                break;
            }
        }
        system("cls");
        cout << "the universe after entering the living cells :" << endl;
        Universe::display();
        for(int k = 0 ; k < num ; k++)
        {
            Universe::next_generation();
            cout << "the generaion no. " << k+1 << endl;
            Universe::display();
            cout << endl;
        }
    }
    void menu()
    {
        char answer;
        cout << "welcome to the game of life !" << endl;
        cout << "the boardgame 20x20" << endl;
        cout << "choose one option from the following : \na)start the game\nb)display the cells\nc)reset the cells\nd)exit" <<endl;
        cin >> answer;
        answer = tolower(answer);
        while(answer != 'a' && answer!= 'b' && answer != 'c' && answer != 'd')
        {
            cout << "please enter a valid option" <<endl;
            cin >> answer;
        }
        if(answer == 'd')
            cout << "Thanks for playing the game of life , I hope u enjoyed it :) " << endl;
        while(answer != 'd')
        {
            if(answer == 'a')
            {
                Universe::run();
                cout << "choose one option from the following : \na)start the game\nb)display the cells\nc)reset the cells\nd)exit" <<endl;
                cin >> answer;
                answer = tolower(answer);
                 while(answer != 'a' && answer!= 'b' && answer != 'c' && answer != 'd')
                {
                    cout << "please enter a valid option" <<endl;
                    cin >> answer;
                }
                if(answer == 'd')
                {
                    cout << "Thanks for playing the game of life , I hope u enjoyed it :) " << endl;
                    break;
                }
                else
                    continue;
            }
            else if(answer == 'b')
            {
                system("cls");
                Universe::display();
                cout << "choose one option from the following : \na)start the game\nb)display the cells\nc)reset the cells\nd)exit" <<endl;
                cin >> answer;
                answer = tolower(answer);
                 while(answer != 'a' && answer!= 'b' && answer != 'c' && answer != 'd')
                {
                    cout << "please enter a valid option" <<endl;
                    cin >> answer;
                }
                if(answer == 'd')
                {
                    cout << "Thanks for playing the game of life , I hope u enjoyed it :) " << endl;
                    break;
                }
                else
                    continue;
            }
            else if(answer == 'c')
            {
                system("cls");
                Universe::reset();
                cout << "choose one option from the following : \na)start the game\nb)display the cells\nc)reset the cells\nd)exit" <<endl;
                cin >> answer;
                answer = tolower(answer);
                 while(answer != 'a' && answer!= 'b' && answer != 'c' && answer != 'd')
                {
                    cout << "please enter a valid option" <<endl;
                    cin >> answer;
                }
                if(answer == 'd')
                {
                    cout << "Thanks for playing the game of life , I hope u enjoyed it :) " << endl;
                    break;
                }
                else
                    continue;
            }
        }
    }
};

int main()
{
    Universe u;
    u.menu();
}
