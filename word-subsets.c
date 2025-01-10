void computeMaxFrequency(char **words2, int words2Size, int *maxFreq) {
    for (int i = 0; i < words2Size; i++) {
        int tempFreq[26] = {0};
        for (int j = 0; words2[i][j]; j++) {
            tempFreq[words2[i][j] - 'a']++;
        }
        for (int k = 0; k < 26; k++) {
            if (tempFreq[k] > maxFreq[k]) {
                maxFreq[k] = tempFreq[k];
            }
        }
    }
}

int isUniversal(char *word, int *maxFreq) {
    int freq[26] = {0};
    for (int i = 0; word[i]; i++) {
        freq[word[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (freq[i] < maxFreq[i]) {
            return 0;
        }
    }
    return 1;
}

char** wordSubsets(char** words1, int words1Size, char** words2, int words2Size, int* returnSize) {
    int maxFreq[26] = {0};
    computeMaxFrequency(words2, words2Size, maxFreq);

    char **result = (char **)malloc(words1Size * sizeof(char *));
    int count = 0;

    for (int i = 0; i < words1Size; i++) {
        if (isUniversal(words1[i], maxFreq)) {
            result[count++] = strdup(words1[i]);
        }
    }

    *returnSize = count;
    return result;
}
