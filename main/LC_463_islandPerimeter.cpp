int islandPerimeter(vector<vector<int>>& grid) {
    int rows = grid.size();          // number of rows
    int cols = grid[0].size();          // number of column
    int pm = 0;              // perimeter
    for (int i = 0; i < rows; i++){
        // in ith row
        for (int j = 0; j < cols; j++){
            // jth col
            if (grid[i][j] == 1){    // if island found
                pm += 4;
                if (j > 0 && grid[i][j-1] == 1){         // if prev in same row is island
                    pm -= 2;
                }
                if (i > 0 && grid[i-1][j] == 1){         // if prev in same col is island
                    pm -= 2;
                }
            }
            
        }
    }
    return pm;
}