#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>

using namespace std;

bool IsOdd (int i) {
    return ((i%2)==1);
}

int main() {
    vector<string> colours{"red", "green", "blue", "orange", "green", "orange", "black", "purple"};
    // gebruik functies uit <algorithm> en <functional> om (steeds vanuit een NIEUWE copie van deze vector)
    
    
    // - de vector in 1 nieuwe vectoren te splitsen, 1 met alles voor 'purple', 1 met alles er na
    //int pos = find(colours.begin(), colours.end(), "purple") - colours.begin();
    
    
    
    // - alle dubbele te verwijderen
    sort(colours.begin(), colours.end());
    auto dubbele = unique(colours.begin(), colours.end());
    colours.erase(dubbele, colours.end());
    
    
     // - alle elementen UPPERCASE te maken.
    for (auto &s : colours) {
        for (auto &c : s) c = toupper(c);
    }

    
    //doorloopt de vector
    cout << "Alles na purple" << endl;
    for (int i = 0; i < colours.size(); i++) {
        cout << colours[i] << endl;
    }
    
    vector<double> numbers{10, 324422, 6, -23, 234.5, 654.1, 3.1242, -9.23, 635, -53};
    // gebruik functies uit <algorithm> en <functional> om (steeds vanuit een NIEUWE copie van deze vector)
    // - alle negatieve elementen te verwijderen
    
    
    // - voor alle elementen te bepalen of ze even of oneven zijn
    std::vector<double>::iterator it = std::find_if (numbers.begin(), numbers.end(), IsOdd);
    std::cout << "Alle oneven getallen zijn " << *it << '\n';
    
    //sort(numbers.begin(), numbers.end());
    //vector<int>::iterator low,up;
    //low=std::lower_bound(numbers.begin(), numbers.end(), 0);
    //up=upper_bound(numbers.begin(), numbers.end(), 0);
    
    // - de som, het gemiddelde, en het product van alle getallen te berekenen
    int sum_of_elems = 0;
    
    std::for_each(numbers.begin(), numbers.end(), [&] (double n) {
        sum_of_elems += n;
    });
    
    cout << "Sum " << sum_of_elems <<endl;

    
    cout << "Numbers" << endl;
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << endl;
    }
    
    
    
    
    
    
    return 0;
}
