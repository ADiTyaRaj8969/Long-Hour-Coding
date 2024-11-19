#include<bits/stdc++.h>
using namespace std;
vector<int> extractLayer(const vector<vector<int>>& matrix, int layer, int M, int N) {
    vector<int> layerElements;
    int topRow = layer, leftCol = layer;
    int bottomRow = M - layer - 1, rightCol = N - layer - 1;
    for (int j = leftCol; j <= rightCol; j++) {
        layerElements.push_back(matrix[topRow][j]);
    }
    for (int i = topRow + 1; i <= bottomRow; i++) {
        layerElements.push_back(matrix[i][rightCol]);
    }
    if (bottomRow > topRow) { 
        for (int j = rightCol - 1; j >= leftCol; j--) {
            layerElements.push_back(matrix[bottomRow][j]);
        }
    }
    if (leftCol < rightCol) { 
        for (int i = bottomRow - 1; i > topRow; i--) {
            layerElements.push_back(matrix[i][leftCol]);
        }
    }
    return layerElements;
}
void insertLayer(vector<vector<int>>& matrix, int layer, const vector<int>& layerElements, int M, int N) {
    int topRow = layer, leftCol = layer;
    int bottomRow = M - layer - 1, rightCol = N - layer - 1;
    int index = 0;
    for (int j = leftCol; j <= rightCol; j++) {
        matrix[topRow][j] = layerElements[index++];
    }
    for (int i = topRow + 1; i <= bottomRow; i++) {
        matrix[i][rightCol] = layerElements[index++];
    }
    if (bottomRow > topRow) { 
        for (int j = rightCol - 1; j >= leftCol; j--) {
            matrix[bottomRow][j] = layerElements[index++];
        }
    }
    if (leftCol < rightCol) { 
        for (int i = bottomRow - 1; i > topRow; i--) {
            matrix[i][leftCol] = layerElements[index++];
        }
    }
}
void rotateMatrix(int M, int N, int R, vector<vector<int>>& matrix) {
    int numLayers = min(M, N) / 2;
    for (int layer = 0; layer < numLayers; layer++) {
        vector<int> layerElements = extractLayer(matrix, layer, M, N);
        int lengthOfLayer = layerElements.size();
        int effectiveRotations = R % lengthOfLayer;
        vector<int> rotatedLayer(lengthOfLayer);
        for (int i = 0; i < lengthOfLayer; i++) {
            rotatedLayer[i] = layerElements[(i + effectiveRotations) % lengthOfLayer];
        }
        insertLayer(matrix, layer, rotatedLayer, M, N);
    }
}
int main() {
    int M, N, R;
    cin >> M >> N >> R;
    vector<vector<int>> matrix(M, vector<int>(N));
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }
    rotateMatrix(M, N, R, matrix);
    for (const auto& row : matrix) {
        for (const auto& element : row) {
            cout << element << " ";
        }
        cout << endl;
    }

    return 0;
}