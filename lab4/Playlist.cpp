#include "Playlist.h"
#include <iostream>

Playlist::Playlist(const std::string& title, int numTracks, int numAlbums)
    : title(title), numTracks(numTracks), numAlbums(numAlbums) {}

Playlist::Playlist(const Playlist& other) {
    numTracks = other.numTracks;
    numAlbums = other.numAlbums;
    tracks = other.tracks;
    albums = other.albums;
}

Playlist::Playlist() {};

void Playlist::AddTrack(Track& track) {
    tracks.push_back(track);
}
void Playlist::operator+(Track& track) {
    this->tracks.push_back(track);
}

void Playlist::SetTracks(const std::vector<Track>& newTracks) {
    tracks = newTracks;
}

void Playlist::PrintTracks() const {
    for (const Track& track : tracks) {
        track.OutputTrack();
        std::cout << std::endl;
    }
}

void Playlist::DeleteTrack() {
    int number;
    std::cout << "������� ����� �����, ������� ������ �������:" << std::endl;
    std::cin >> number;
    std::cin.ignore();
    tracks.erase(tracks.begin() + number - 1);
}

void Playlist::AddAlbum(Album& album) {
    albums.push_back(album);
}

void Playlist::SetAlbums(const std::vector<Album>& newAlbums) {
    albums = newAlbums;
}

void Playlist::PrintAlbums() const {
    for (const Album& album : albums) {
        album.OutputAlbum();
        std::cout << std::endl;
    }
}

void Playlist::DeleteAlbum() {
    int number;
    std::cout << "������� ����� �������, ������� ������ �������: " << std::endl;
    std::cin >> number;
    std::cin.ignore();
    albums.erase(albums.begin() + number - 1);
}