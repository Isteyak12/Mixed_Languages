#include <stdio.h>
#include <stdlib.h>

int main() {
    // Use system() function to run the Python script
    int status = system("python3 app.py");

    // Check if the execution was successful
    if (status != 0) {
        printf("Failed to execute the Python script.\n");
        return 1;
    } else {
        printf("Python script executed successfully.\n");
        return 0;
    }
}
