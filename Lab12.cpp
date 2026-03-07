#include <stdio.h>

int *Dijkstra( int *L, int n );

int main() {

    int n = 5, i = 0, j = 0, *d, *g;

    g = new int[n * n];

    for( i = 0 ; i < n ; i++ )
        for( j = 0 ; j < n ; j++ )
            g[ i * n + j ] = -1;

    g[ 0 * n + 1 ] = 100 ; 
    g[ 0 * n + 2 ] = 80 ;
    g[ 0 * n + 3 ] = 30 ; 
    g[ 0 * n + 4 ] = 10 ;

    g[ 1 * n + 2 ] = 20 ; 
    g[ 3 * n + 1 ] = 20 ;

    g[ 3 * n + 2 ] = 20 ; 
    g[ 4 * n + 3 ] = 10 ;

    d = Dijkstra( g , n );

    for( i = 0 ; i < n - 1 ; i++ )
        printf( "%d ", d[ i ] );

    return 0;
}

int *Dijkstra( int *L, int n ) {

    static int dist[100];
    int visited[100];

    for( int i = 0 ; i < n ; i++ ) {
        dist[i] = L[0 * n + i];
        visited[i] = 0;
    }

    dist[0] = 0;
    visited[0] = 1;

    for( int k = 1 ; k < n ; k++ ) {

        int min = -1;
        int u = -1;

        for( int i = 0 ; i < n ; i++ ) {
            if( !visited[i] && dist[i] != -1 ) {
                if( min == -1 || dist[i] < min ) {
                    min = dist[i];
                    u = i;
                }
            }
        }

        if( u == -1 ) break;

        visited[u] = 1;

        for( int v = 0 ; v < n ; v++ ) {

            int w = L[ u * n + v ];

            if( w != -1 && !visited[v] ) {

                int newdist = dist[u] + w;

                if( dist[v] == -1 || newdist < dist[v] )
                    dist[v] = newdist;
            }
        }
    }

    return dist + 1;
}