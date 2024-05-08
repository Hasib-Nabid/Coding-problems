#include <stdio.h>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"

int main() {
   
    printf("\n\n");
    printf(RED "Nusrat Ma'am is an amazing teacher, always making learning fun.\n" RESET);
    printf(BLUE "Nusrat Ma'am always tries new ways to make classes interesting.\n" RESET);
    printf(YELLOW "She not only teaches but also helps students with their career choices.\n" RESET);
    printf(MAGENTA "Her teachings have a big impact on students' future success.\n" RESET);
    printf(CYAN "Students appreciate Nusrat Ma'am's dedication to their learning.\n" RESET);
    printf(GREEN "With her passion and kindness, Nusrat Ma'am is a beloved faculty member.\n" RESET);

    return 0;
}
