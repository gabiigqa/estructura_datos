#include <stack>
#include <string>

using namespace std;  // Esto permite el uso directo de std::string, std::stack, etc.

class Editor {
public:
    // Constructor
    Editor();

    // M�todos para realizar las operaciones
    void realizarCambio(const string& cambio);
    void deshacer();
    void rehacer();
    string verUltimoCambio() const;
    bool estaVacia() const;

private:
    // Pilas para gestionar los cambios y rehacer
    stack<string> pilaCambios;
    stack<string> pilaRehacer;
};

