#include <stdio.h>
#include <stdlib.h>
#include <string.h>

system("title Fast-Down - by Unknown Destroyer - tiktok.com/@unknown_napim")
// Function to display "Fast-Down"
void print_fast_down() {
    printf("\n");
    printf(" ________                      __                          _______                                     \n");
    printf("|        \\                    |  \\                        |       \\                                    \n");
    printf("| $$$$$$$$______    _______  _| $$_                       | $$$$$$$\\  ______   __   __   __  _______  \n");
    printf("| $$__   |      \\  /       \\|   $$ \\         ______       | $$  | $$ /      \\ |  \\ |  \\ |  \\|       \\ \n");
    printf("| $$  \\   \\$$$$$$\\|  $$$$$$$ \\$$$$$$        |      \\      | $$  | $$|  $$$$$$\\| $$ | $$ | $$| $$$$$$$$\\\n");
    printf("| $$$$$  /      $$ \\$$    \\   | $$ __        \\$$$$$$      | $$  | $$| $$  | $$| $$ | $$ | $$| $$  | $$\n");
    printf("| $$    |  $$$$$$$ _\\$$$$$$\\  | $$|  \\                    | $$__/ $$| $$__/ $$| $$_/ $$_/ $$| $$  | $$\n");
    printf("| $$     \\$$    $$|       $$   \\$$  $$                    | $$    $$ \\$$    $$ \\$$   $$   $$| $$  | $$\n");
    printf(" \\$$      \\$$$$$$$ \\$$$$$$$     \\$$$$                      \\$$$$$$$   \\$$$$$$   \\$$$$$\\$$$$  \\$$   \\$$\n");
    printf("                                                                                                       \n");
    printf("                                                                                                       \n");
}

void print_program_info() {
    printf("\n");
    printf("Program Owner / Founder / Creator: Unknown Destroyer\n");
    printf("Tiktok: tiktok.com/@unknown_napim\n");
    printf("Discord: anonymous_destroyer01\n");
    printf("Youtube: youtube.com/@unknown_destroyer\n");
    printf("Youtube 2: youtube.com/@samhordesongs\n");
    printf("\n");
}

// Function for download process
void start_download(const char *url) {
    print_fast_down();
system("title Fast-Down - Installing on Progress... - tiktok.com/@unknown_napim")
    printf("Downloading from '%s'...\n", url);
    
    // Prepare the curl command for the URL
    char command[1024];
    snprintf(command, sizeof(command), "curl -L -O \"%s\"", url);
    
    // Start the download process
    int result = system(command);
    
    if (result == 0) {
        printf("Download completed!\n");
    } else {
        printf("An error occurred during the download!\n");
    }
}

int main() {
    char download_link[512];

    // Clear the screen
    system("clear || cls");  
    
    // Print the "Fast-Down" title
    print_fast_down();
    
    // Print program information
    print_program_info();
    
    // Ask for the download link
    printf("Please input the installation link: ");
    scanf("%s", download_link);
    
    // Start the download process
    start_download(download_link);

    return 0;
}
