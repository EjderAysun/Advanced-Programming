#include <iostream>
using namespace std;

int main() {
// Single-line comments (informally, C++ style), start with // and continue until the end of the line.
// If the last character in a comment line is a \
the comment will continue in the next line.

    cout<<"Hello Universe"<<endl;  // This is also a comment line.

/*
Multi-line comments (informally, C style),
start with '/*' and end with '* /'.
*/

// How will my system of using comment lines be? //

// - I will use the '//' sign to indicate items/comments.
// - I will use the '-' sign to indicate items.
// - If comment is not an item, there will be ' '(one space) sign at the beginning. \
Paragraph, carriage return, etc. the number of spaces may vary according to other grammatical \
features such as \
(If it is the beginning of a paragraph, 4 spaces if it is a sub-item, 4 spaces + '-' sign, etc.)
// - When my item/comment is too long for a single line, \
I will use the '\' sign at the end of the item/comment \
to indicate the rest of the item/comment.
// - If an item/comment refers to a short line of code; \
I will write the line of code as a continuation of the item/comment, that is, I will use '\' sign.
// - If the code is long or short but independent of any clauses, \
I will use the '/**/' sign to denote the code.
// - Titles will be specified as '// Title //'.
// - For very long texts, tables, drawings at the command prompt, \
and some other special operations that may happen, \
I will use the '/**/' sign to avoid confusion.


// A usage example describing the whole system: //

// Mottos //
// Mens, ratio et intelligentia nostra agendi principia sunt. \
Omnia facta quae vitam nostram complent huius veritatis testimonia sunt.
// Haec ego non multis (scribo), sed tibi: \
    cout<<"satis enim magnum alter alteri theatrum sumus."<<endl;
/*
    while(true): {
        cout<<"Flectere si nequeo superos, Acheronta movebo."<<endl;
    }
*/
// - Pulvis et umbra sumus.
// - In soluto problema vivere stultis est proprium.
}