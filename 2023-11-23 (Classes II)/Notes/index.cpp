// Encapsulation

class Movie {
private:
    string title;

public:
    string getTitle();       // accessor
    void setTitle(string t); // mutator
    void watchMovie();
};

// Constructors

class Movie {
public:
    Movie();
};
Movie::Movie() {
    …
}

// Deconstructors

class Movie {
public:
    ~Movie();
};
Movie::~Movie() {
    …
}
