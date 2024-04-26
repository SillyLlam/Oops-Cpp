#include <iostream>
using namespace std;
class Rashmika
{
    string songs;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the song name: " << endl;
        cin >> songs;
        count++;
    }
    void getData(void)
    {
        cout << "The song name is: " << songs << " this is the song id: " << count << endl;
    }
    void displaySongs(void)
    {
        for (int i = 0; i < count; i++)
        {
            cout << "The song name is: " << songs << " this is the song id: " << count << endl;
            break;
        }
    }
};
int Rashmika::count; // Default value is 0
int main()
{
    Rashmika porche, lamborgini, bmw, volkswagen;
    porche.setData();
    porche.getData();

    lamborgini.setData();
    lamborgini.getData();

    bmw.setData();
    bmw.getData();

    volkswagen.setData();
    volkswagen.getData();
    cout << endl;
    porche.displaySongs();
    volkswagen.displaySongs();
    bmw.displaySongs();
    lamborgini.displaySongs();
    return 0;
}