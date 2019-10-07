//Beatriz Cruz   RA: 1840481813037
//Marcelo Maciel RA: 1840481823004
//ADS 3° semestre noturno 
//Prof Wakim
#include <iostream>
using namespace std;

void questaoUm();
void questaoDois();
void questaoTres();
void questaoQuatro();
void questaoCinco();
void questaoSeis();
void questaoSete();
void questaoOito();
void questaoNove();
void questaoDez();

int main()
{
    int opcao = 0, qualquerCoisa = 0;
    cout << "Informe qual programa voce deseja executar: \n";
    cin >> opcao;
    switch (opcao){
        case 1:
        questaoUm();
        break;

        case 2:
        questaoDois();
        break;

        case 3:
        questaoTres();
        break;
        
        case 4:
        questaoQuatro();
        break;
        
        case 5:
        questaoCinco();
        break;
        
        case 6:
        questaoSeis();
        break;
        
        case 7:
        questaoSete();
        break;
        
        case 8:
        questaoOito();
        break;
        
        case 9:
        questaoNove();
        break;
        
        case 10:
        questaoDez();
        
        default:
        cout << "Nenhuma opcao valida, digite 1 para iniciar o programa ou qualquer coisa para encerrar \n";
        cin >> qualquerCoisa;
        if (qualquerCoisa == 1){
           main();
        }
       }
    system("PAUSE");
    return 0;
}

void questaoUm(){
    int cont = 1000, testaResto = 0;
    cout << "Faca um programa que verifique e mostre os numeros entre 1000 e 2000 (inclusive)"
    "que, quando divididos por 11, produzam resto igual a 5." << endl;
    while (cont <= 2000){
        testaResto = cont % 11;
        if (testaResto == 5){
            cout << cont << " possui resto 5 quando dividido por 11. \n";
        }
        cont ++;
    }
}
void questaoDois(){
    int numero = 0;
    float total = 0, resultado = 0;
    cout << "Faca um programa que leia um valor n, inteiro e positivo e mostre a seguinte soma: "
    "s = 1 + 1/2 + 1/3 + 1/4 ... + 1/n \n";
    cout << "Informe um numero: \n";
    cin >> numero;
    total = 1;
    for (int i = 0; i <= numero; i++){
        resultado = (resultado + total) / numero;
        cout << resultado << endl;
        resultado += resultado;
    }
}
void questaoTres(){
    int resto = 0;
    int contresto = 0;
    cout << "Faca um programa que calcule e mostre o produto dos números primos entre 92 e 1478.\n";
    for (int i = 92; i <= 1478; i++){
        cout << i << endl;
        for (int j = 1; j <= i; j++){
            resto = i % j;
            if (resto == 0){
                contresto = contresto + 1;
            }
        }
            if (contresto == 2){
                cout << "Eh primo.\n";
                cout << "E o produto do numero primo por ele mesmo eh: " << i * i << endl;
            }
            contresto = 0;
    }

}
void questaoQuatro(){
		int matriz [4][5]; 
		int linha = 0, coluna = 0;
		cout << "Faca um programa que leia cinco grupos de quatro valores (A,B, C e D) e mostre-os na ordem lida. Em seguida, mostre-os em ordem crescente e decrescente.\n";
		cout << "Insira os valores: \n";
		for (linha = 0; linha <= 3; linha++){
				for (coluna = 0; coluna <= 4; coluna++){
						cin >> matriz [linha][5];
				}
				cin >> matriz [4][coluna];
		}
		cout << "Voce inseriu os valores nessa ordem: \n";
		for (linha = 0; linha <= 3; linha++){
				for (coluna = 0; coluna <=4; coluna++){
						cout << matriz [linha][coluna];
				}
		}
}
void questaoCinco(){
     struct cliente {
            char nome [20];
            float valorGasto;
     } ;
     cliente pessoa;
     cout << "Digite, em sequencia, nome e valor gasto\n";
     for (int i = 1; i <= 15; i++){
         cin >> pessoa.nome;
         cin >> pessoa.valorGasto;
         if (pessoa.valorGasto < 1000){
            pessoa.valorGasto -= pessoa.valorGasto * 0.10;
         }
         else {
              pessoa.valorGasto -= pessoa.valorGasto * 0.15;
         }
     cout << "O valor com desconto do " << pessoa.nome << " eh " << pessoa.valorGasto << endl;
     }
}
void questaoSeis(){
     float ingresso = 5, despesa = 200, vendas = 120;
     cout << "ingresso  | despesa  | vendas | "<<endl;
     while(ingresso >= 1){
                    cout << " | " <<ingresso  << "  |  " << despesa << "  |  " <<vendas << " | " <<endl;
                    ingresso -= 0.50;
                    vendas += 26;
                    despesa += 40;
      }
}
void questaoSete(){
     int idade, maior = 0, menor = 0;
     for(int i = 0; i < 10; i++){
             cin >> idade;
             if(idade >= 18){
                      maior++;
             }
             else{
                      menor++;
             }
     }
     cout << "A quantidade de pessoas maiores de 18 eh : " <<maior <<endl;
     cout << "A quantidade de pessoas menores de 18 eh: " <<menor <<endl;
}
void questaoOito(){
     int  idade;
     int faixaUm = 0, faixaDois = 0, faixaTres = 0, faixaQuatro = 0, faixaCinco = 0;
     for(int i = 0; i < 15; i++){
             cin >> idade;
             if(idade <= 15){
                      faixaUm++;
             }
             if(idade >= 16 && idade <= 30){
                      faixaDois++;
             }
             if(idade >= 31 && idade <= 45){
                      faixaTres++;
             }
             if(idade >= 46 && idade <= 60){
                      faixaQuatro++;
             }
             if(idade >= 61){
                      faixaCinco++;
             }
     }
     cout << faixaUm << " pessoas na 1a faixa etaria (Ate 15 anos)! " <<endl;
     cout << faixaDois << " pessoas na 2a faixa etaria (De 16 a 30 anos)! " <<endl;
     cout << faixaTres << " pessoas na 3a faixa etaria (De 31 a 45 anos)! " <<endl;
     cout << faixaQuatro << " pessoas na 4a faixa etaria (De 46 a 60 anos)! " <<endl;
     cout << faixaCinco << " pessoas na 5a faixa etaria (Acima de 61 anos)! " <<endl;         
}
void questaoNove(){
     int numero;
     cout << "Insira um numero: "<<endl;
     cin >> numero;
     for(int i = 1; i <=10; i++){
             cout << numero << "x" <<i << "=" <<numero * i <<endl;
     }
}
void questaoDez(){
     for(int i = 1; i <=10; i++){
             for(int j = 1; j <= 10; j++){
                     cout << i << "x" <<j << "=" <<j * i <<endl;
             }
     }

}
