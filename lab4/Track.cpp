#include "Track.h"
#include <iostream>
#include <iomanip>

Track::Track(const std::string& title, const std::string& artist, int duration, int year, const std::string& genre)
    :title(title), artist(artist), duration(duration), year(year), genre(genre) {}

Track::Track(const Track& other) {
    title = other.title;
    artist = other.artist;
    duration = other.duration;
    year = other.year;
    genre = other.genre;
}

Track::Track() {};

Track Track::InputTrack() {
    std::string title, artist, genre;
    int duration, year;

    std::cout << "\n�������� �����: ";
    std::getline(std::cin, title);

    std::cout << "��� �����������: ";
    std::getline(std::cin, artist);

    std::cout << "���� �����: ";
    std::getline(std::cin, genre);

    std::cout << "������������ �����: ";
    std::cin >> duration;

    std::cout << "��� ������ �����: ";
    std::cin >> year;


    return Track(title, artist, duration, year, genre);
}

Track Track::InputShortTrack() {
    std::string title, artist, genre;
    int duration;

    std::cout << "\n�������� �����: ";
    std::cin.ignore();
    std::getline(std::cin, title);

    std::cout << "���� �����: ";
    std::getline(std::cin, genre);

    std::cout << "������������ �����: ";
    std::cin >> duration;

    return Track(title, "", duration, 0, genre);
}

void Track::OutputTrack() const {
    std::cout << "\n��������: " << title << std::endl;
    std::cout << "�����������: " << artist << std::endl;
    std::cout << "������������: " << duration << " seconds" << std::endl;
    std::cout << "��� ������: " << year << std::endl;
    std::cout << "����: " << genre << std::endl;
}

void Track::OutputShortTrack() const {
    std::cout << std::left << "��������: " << std::setw(25) << title;
    std::cout << std::left << "������������: " << duration << std::setw(10) << " ���";
    std::cout << "����: " << genre << std::endl;
}