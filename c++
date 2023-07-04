int Classe Artigo:
cpp
class Artigo {
private:
    string titulo;
    string autor;
public:
    Artigo(string t, string a) : titulo(t), autor(a) {}
};

Classe Edicao:
cpp
class Edicao {
private:
    int numero;
    int volume;
    string data;
    vector<Artigo*> artigos;
    RevistaCient* revistaCient;
public:
    Edicao(int n, int v, string d, RevistaCient* r) 
        : numero(n), volume(v), data(d), revistaCient(r) {};
    void addArtigo(Artigo* a) {
        artigos.push_back(a);
    }
};

Classe RevistaCient:
cpp
class RevistaCient {
private:
    string titulo;
    int issn;
    string periodicidade;
    vector<Edicao*> edicoes;
public:
    RevistaCient(string t, int i, string p) 
        : titulo(t), issn(i), periodicidade(p) {};
    void addEdicao(Edicao* e) {
        edicoes.push_back(e);
    }
};

Funcao Principal:
cpp
int main() {
    RevistaCient* revista = new RevistaCient("Revista Científica", 1234, "Mensal");

Edicao* edicao = new Edicao(1, 2, "01/01/2021", revista);
Artigo* artigo1 = new Artigo("Artigo 1", "Autor 1");
Artigo* artigo2 = new Artigo("Artigo 2", "Autor 2");
edicao->addArtigo(artigo1);
edicao->addArtigo(artigo2);
revista->addEdicao(edicao);

return 0;
}
