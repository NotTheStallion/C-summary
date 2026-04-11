/*
 * EXERCISE 1: Music Playlist
 * 
 * Create an enum Genre with: ROCK, POP, JAZZ, CLASSICAL
 * 
 * Create a struct Song with:
 *   - title (char[50])
 *   - artist (char[50])
 *   - genre (Genre)
 *   - duration (int, in seconds)
 * 
 * Write functions:
 *   - create_song(title, artist, genre, duration) -> Song* (malloc)
 *   - print_song(Song*)
 *   - playlist_total_duration(Song* array[], int count) -> int
 *   - free_playlist(Song* array[], int count)
 * 
 * In main():
 *   - Create a dynamic array of 4 songs (malloc)
 *   - Add different genres
 *   - Print each song and total duration
 *   - Free everything
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {
    // TODO: define ROCK, POP, JAZZ, CLASSICAL
} Genre;

typedef struct {
    // TODO: add fields
} Song;

char* genre_to_string(Genre g) {
    // TODO: switch on g, return string
    return NULL;
}

Song* create_song(char* title, char* artist, Genre g, int duration) {
    // TODO: malloc Song, copy fields, return
    return NULL;
}

void print_song(Song* s) {
    // TODO: print song info
}

int playlist_duration(Song* songs[], int count) {
    // TODO: sum all durations, return total
    return 0;
}

void free_playlist(Song* songs[], int count) {
    // TODO: free each song, then free the array
}

int main(void) {
    Song** playlist = malloc(sizeof(Song*) * 4);
    playlist[0] = create_song("Stairway to Heaven", "Led Zeppelin", ROCK, 482);
    playlist[1] = create_song("Thriller", "Michael Jackson", POP, 358);
    playlist[2] = create_song("Take Five", "Dave Brubeck", JAZZ, 324);
    playlist[3] = create_song("Clair de Lune", "Debussy", CLASSICAL, 300);
    
    printf("=== Playlist ===\n");
    for (int i = 0; i < 4; i++) {
        print_song(playlist[i]);
    }
    
    int total = playlist_duration(playlist, 4);
    printf("\nTotal duration: %d:%02d\n", total / 60, total % 60);
    
    free_playlist(playlist, 4);
    
    return 0;
}