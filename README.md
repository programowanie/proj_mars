# Czesak Bartłomiej Artur
## Baza na Marsie

Symulacja przedstawiać będzie życie astronautów, którzy zgodzili się na wzięcie udziału w projekcie stałej kolonizacji Marsa.

Na początku Imiona i nazwiska astronautów zostają wylosowane z puli w pliku tekstowym. (Tutaj nie wiem czy będzie jakiś górny próg ilości astronautów, chociaż na pewno będzie ich minimalny próg).

Po wylosowaniu, każdemu z astronautów przypisuje się umiejętności, które przydadzą się do zdeterminowania ich profesji (poziomy umiejętności będą się różnić, ja zaplanowałem, że będą od 0 - astronauta nie nadaje się do tej pracy aż do 3 - astronauta doskonale się na tym zna).

Baza będzie podzielona na kilka modułów, przy czym niektóre będą ze sobą powiązane (na przykład kontrola otoczenia produkująca tlen oraz wodę będzie _przekazywać_ tlen do wszystkich pozostałych modułów oraz wodę do modułu hydroponicznego, który to będzie połączony z mesą (stołówką)). 
	
Każdy astronauta oprócz umiejętności będzie posiadał punkty zdrowia, na które ujemnie będą wpływały czynniki takie jak na przykład zmęczenie czy głód, a także różne choroby).

Zatem jeżeli zdrowie spadnie do 0 to dany astronauta umiera, co przy minimalnej ilości osób do obsługi bazy oznacza pewnie śmierć całej reszty. Myślę, że dobrze będzie jak również podam profesje oraz moduły.

I tak na koniec chciałym, żeby wszystko to działo się mniej więcej w czasie rzeczywistym lub przyspieszonym, jednak szczerze nie wiem jak to można zrealizować.

~~wydarzenia~~

## Profesje:

- Konserwator (wykonuje drobne naprawy i czyści)
- Medyk/Sanitariusz (Leczy chorych astronautów)
- Farmer (zajmuje się hyrdoponiką)
- Ochroniarz (ale myślę, że ta profesja nie ma za dużego sensu, ponieważ zakładam względny pokój w bazie)
- Kucharz (Obsługa mesy)
- Pracownik kontroli środowiska (Pilnuje, żeby w bazie było odpowiednio dużo powietrza i wody)

# Moduły:

- Sypialnia
- Mesa (_połączona_ z hydroponiką oraz kontrolą środowiska(woda))
- Kontrola środowiska (_połączona_ ze wszystkimi modułami)
- Hydroponika (_połączona_ z kontrolą środowiska oraz mesą)
- Zatoka Medyczna 
- Kanciapa konserwatora.
