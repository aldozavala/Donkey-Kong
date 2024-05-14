#include<iostream>
#include<ftxui/screen/screen.hpp>
#include<thread>
using namespace std;
using namespace ftxui;
int main(int argc, char const *argv[])
{
    Screen pantalla = Screen::Create(
        Dimension::Full(),
        Dimension::Full()
    );
    int x=0;
    while (true)
    {
        x++;
        pantalla.Clear();
        this_thread::sleep_for(0.1s);

        pantalla.PixelAt(x,1).character = "   ⠀⠀⠀⠀⠀⠀⠀⠀⣀⡴⠒⠛⠛⠓⢦⡀⠀⢀⣀⡀";
        pantalla.PixelAt(x,2).character = "       ⢀⡾⠁⠀⠀⠀⣤⢦⢡⣷⣴⣛⠩⡙⠓⢦⡀";
        pantalla.PixelAt(x,3).character = "⠀⠀⠀⠀⠀⢠⡟⠀⠀⠀⢀⠤⠑⠈⠉⣀⣤⣤⣭⢷⣀⠀⡇";
        pantalla.PixelAt(x,4).character = "⠀⠀⠀⠀⣀⡟⠀⠀⡠⠊⠁⣀⠤⠂⠁⣬⣟⣉⠀⠀⢀⡼⠃";
        pantalla.PixelAt(x,5).character = "⠀⠀⠀⡞⠉⠃⠀⣼⣇⠈⠁⠀⢿⠀⠀⠉⠉⠉⠙⣦⠾⠁";
        pantalla.PixelAt(x,6).character = "⠀⠀⠀⢧⡔⠈⡉⠻⣿⡷⠀⣤⣄⣀⡀⠀⠀⠀⢀⡾";
        pantalla.PixelAt(x,7).character = "⠀⠀⠀⠸⡄⠀⠈⠀⠈⠁⠀⠙⢿⣿⣿⣷⣶⣶⠟⠁";
        pantalla.PixelAt(x,8).character = "⠀⠀⠀⠀⠙⠲⣶⣶⣦⣀⠀⠀⢈⠉⡹⡻⣩⠏";
        pantalla.PixelAt(x,9).character = "⠀⠀⣠⡤⠶⡋⠁⢀⡠⠜⢹⠒⠲⡓⢫⠻⣅⣀⡴⠶⠶⣤⡀";
        pantalla.PixelAt(x,10).character = "⠀⡴⠋⠀⠀⠀⢑⡏⠀⠀⡰⢠⠂⠈⠄⠀⠏⢻⠁⠀⠀⢸⢻⡆";
        pantalla.PixelAt(x,11).character = "⢸⡃⠊⠰⠀⠀⠀⣏⠐⠈⠀⠈⠢⠤⠂⠀⠈⡟⠀⠀⢀⢢⡟⠀";
        pantalla.PixelAt(x,12).character = "⠀⠳⣄⡀⠀⣲⠞⠉⠹⢦⡀⠀⠀⠀⠀⢀⣼⣇⡀⢀⢨⡟⠀";
        pantalla.PixelAt(x,13).character = "⠀⠀⠀⢹⠏⠇⠀⠀⠀⢸⠧⠤⠤⠶⠚⠋⠀⠈⠉⠙⠛⠁";
        pantalla.PixelAt(x,19).character = "⠀⠀⠀⢼⢰⠀⠀⠀⢰⡟";
        pantalla.PixelAt(x,20).character = "    ⠈⠛⠦⣤⡤⠞⠁";
        pantalla.PixelAt(x,21).character ="______________________________________________________________";
        pantalla.Print();
        cout<<pantalla.ResetPosition();
    }
    
    return 0;
}
