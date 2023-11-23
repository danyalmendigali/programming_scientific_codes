#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

unordered_map <string, string> cache;

string getDataFromServer(const string& url)
{
    return "Данные с сервера для URL: " + url;
}

string get_page(const string& url)
{
    // Проверяем, содержится ли URL в кэше
    if (cache.find(url) != cache.end())
    {
        // Если URL уже есть в кэше, возвращаем данные (страницу) из кэша
        return cache[url];
    }
    else
    {
        // Если URL нет в кэше, запрашиваем данные с сервера
        string data = getDataFromServer(url);

        // Добавляем данные в кэш для дальнейшего использования
        cache[url] = data;

        // Возвращаем полученные данные (страницу)
        return data;
    }
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string url1 = "https://example.com/page1";
    string url2 = "https://example.com/page1";


    cout << "Страница 1: " << get_page(url1) << endl; // Данные будут получены с сервера и добавлены в кэш
    cout << "Страница 2: " << get_page(url2) << endl; // Данные будут получены с сервера и добавлены в кэш
    cout << "Страница 1 (из кеша): " << get_page(url1) << endl; // Данные будут взяты из кэша
    cout << "Страница 2 (из кеша): " << get_page(url2) << endl; // Данные будут взяты из кэша




    return 0;
}


