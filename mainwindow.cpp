#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QRandomGenerator>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    ,score(0), tries(3)
{
    ui->setupUi(this);
    initializeGame();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initializeGame()
{
    //mapping city buttons
    cityButtons["Skardu"] = ui->skardu;
    cityButtons["Gilgit"] = ui->gilgit;
    cityButtons["Chitral"] = ui->chitral;
    cityButtons["Peshawar"] = ui->peshawar;
    cityButtons["Mardan"] = ui->mardan;
    cityButtons["Abbottabad"] = ui->abbottabad;
    cityButtons["Islamabad"] = ui->islamabad;
    cityButtons["Rawalpindi"] = ui->rawalpindi;
    cityButtons["Murree"] = ui->murree;
    cityButtons["Gujranwala"] = ui->gujranwala;
    cityButtons["Sialkot"] = ui->sialkot;
    cityButtons["Lahore"] = ui->lahore;
    cityButtons["Faisalabad"] = ui->faisalabad;
    cityButtons["Sargodha"] = ui->sargodha;
    cityButtons["Jhang"] = ui->jhang;
    cityButtons["Sahiwal"] = ui->sahiwal;
    cityButtons["Multan"] = ui->multan;
    cityButtons["Dera Ghazi Khan"] = ui->dgkhan;
    cityButtons["Dera Ismail Khan"] = ui->dikhan;
    cityButtons["Khushab"] = ui->khushab;
    cityButtons["Bahawalpur"] = ui->bahawalpur;
    cityButtons["Bahawalnagar"] = ui->bahawalnagar;
    cityButtons["Rahim Yar Khan"] = ui->rahimyarkhan;
    cityButtons["Sukkur"] = ui->sukkur;
    cityButtons["Larkana"] = ui->larkana;
    cityButtons["Nawabshah"] = ui->nawabshah;
    cityButtons["Hyderabad"] = ui->hyderabad;
    cityButtons["Karachi"] = ui->karachi;
    cityButtons["Gwadar"] = ui->gwadar;
    cityButtons["Quetta"] = ui->quetta;
    cityButtons["Chaghai"] = ui->chaghai;
    cityButtons["Loralai"] = ui->loralai;
    cityButtons["Attock"] = ui->attock;
    cityButtons["Bannu"] = ui->bannu;
    cityButtons["Jhelum"] = ui->jhelum;
    cityButtons["Mandi Bahauddin"] = ui->mandibahauddin;
    cityButtons["Muzaffarabad"] = ui->muzaffarabad;

    //mapping city infos
    cityInfo["Skardu"] = "Skardu, the Gateway to the Himalayas, is renowned for its stunning landscapes and proximity to K2.";
    cityInfo["Gilgit"] = "Gilgit is a scenic mountain town, often called the heart of the Karakoram Range.";
    cityInfo["Chitral"] = "Chitral is famous for its unique Kalash culture and stunning valleys.";
    cityInfo["Peshawar"] = "Peshawar, one of South Asia's oldest cities, is known for its historic Qissa Khwani Bazaar.";
    cityInfo["Mardan"] = "Mardan is home to Takht-i-Bahi, a UNESCO World Heritage Site of Buddhist ruins.";
    cityInfo["Abbottabad"] = "Abbottabad is a picturesque city known for its lush greenery and pleasant weather.";
    cityInfo["Islamabad"] = "Islamabad, Pakistan's capital, is famous for its modern architecture and the Faisal Mosque.";
    cityInfo["Rawalpindi"] = "Rawalpindi, or 'Pindi,' serves as the twin city of Islamabad with rich colonial history.";
    cityInfo["Murree"] = "Murree is a popular hill station known for its cool climate and pine forests.";
    cityInfo["Gujranwala"] = "Gujranwala is renowned as the 'City of Wrestlers' and for its vibrant food culture.";
    cityInfo["Sialkot"] = "Sialkot is known globally for its production of high-quality sports goods.";
    cityInfo["Lahore"] = "Lahore, the cultural capital of Pakistan, is famed for its historical sites and lively bazaars.";
    cityInfo["Faisalabad"] = "Faisalabad, Pakistan's textile hub, is often called the 'Manchester of Pakistan.'";
    cityInfo["Sargodha"] = "Sargodha is celebrated for its sweet and juicy kinnow oranges.";
    cityInfo["Jhang"] = "Jhang is known for its Sufi heritage and the famous Heer-Ranjha love story.";
    cityInfo["Sahiwal"] = "Sahiwal is home to Harappa, an ancient Indus Valley Civilization site.";
    cityInfo["Multan"] = "Multan, the 'City of Saints,' is famed for its shrines and vibrant blue pottery.";
    cityInfo["Dera Ghazi Khan"] = "Dera Ghazi Khan is known for its unique tribal culture and diverse landscapes.";
    cityInfo["Dera Ismail Khan"] = "Dera Ismail Khan is famous for its delicious Sohan Halwa and historic bazaars.";
    cityInfo["Khushab"] = "Khushab is known for its natural salt mines and scenic lakes.";
    cityInfo["Bahawalpur"] = "Bahawalpur is home to the majestic Noor Mahal and the Cholistan Desert.";
    cityInfo["Bahawalnagar"] = "Bahawalnagar is known for its historical forts and rich agricultural lands.";
    cityInfo["Rahim Yar Khan"] = "Rahim Yar Khan is a key gateway to the Cholistan Desert and Sindh.";
    cityInfo["Sukkur"] = "Sukkur is known for its iconic Lansdowne Bridge and the Indus River.";
    cityInfo["Larkana"] = "Larkana is home to Mohenjo-Daro, an ancient Indus Valley Civilization city.";
    cityInfo["Nawabshah"] = "Nawabshah is recognized for its vibrant agriculture and date palms.";
    cityInfo["Hyderabad"] = "Hyderabad is known for its traditional bangles and cultural heritage.";
    cityInfo["Karachi"] = "Karachi, Pakistan's largest city, is famed for its beaches and diverse culture.";
    cityInfo["Gwadar"] = "Gwadar, a port city, is known for its strategic location and pristine coastline.";
    cityInfo["Quetta"] = "Quetta, the 'Fruit Garden of Pakistan,' is renowned for its dry fruits and orchards.";
    cityInfo["Chaghai"] = "Chaghai is notable for its vast deserts and being the site of Pakistan's nuclear tests.";
    cityInfo["Loralai"] = "Loralai is known for its high-quality coal and serene mountainous landscapes.";
    cityInfo["Attock"] = "Attock is famous for its historic fort and its strategic location by the Indus River.";
    cityInfo["Bannu"] = "Bannu is known for its distinct Pashtun culture and traditional weaving.";
    cityInfo["Jhelum"] = "Jhelum is famous for its historic Rohtas Fort, a UNESCO World Heritage Site.";
    cityInfo["Mandi Bahauddin"] = "Mandi Bahauddin is known for its fertile lands and vibrant agriculture.";
    cityInfo["Muzaffarabad"] = "Muzaffarabad, the capital of Azad Kashmir, is surrounded by scenic rivers and valleys.";

    //list for remaining cities
    remainingCities = cityButtons.keys();

    // connects all city buttons to the checkAnswer function
    // ie. whenever a cityButton is clicked, checkAnswer function is called
    for (const QString &city : cityButtons.keys()/* loops for all cities */)
    {   //connect(sender, signal, reciever, slot)
        connect(cityButtons[city], &QPushButton::clicked, this, [this, city]() {checkAnswer(city);} );
    }

    selectRandomCity(); //satrts the game off by selecting first city to guess
}

void MainWindow::checkAnswer(QString cityName)
{
    if (cityName == currentCity)
    {
        score++; //increases score

        ui->feedback->setText("Your guess was Correct!");
        ui->feedback->setStyleSheet("QLabel{\ncolor: rgb(0, 255, 0); \n}");

        ui->score->setText("Score: " + QString::number(score)); //updates score label
        if(easy)
        {//changes colour of city dot and disables it
        cityButtons[cityName]->setStyleSheet("QPushButton "
                                             "{background-color: green; "
                                             "border: 1px solid green;"
                                             "border-radius: 5px;}");
        cityButtons[cityName]->setEnabled(false);
        }
        //if all cities have been guessed
        if(score >= cityButtons.size())
        {
        QMessageBox::information(this, "Game Over", "You found all cities! Final score: " + QString::number(score));
        endGame();
        }

        selectRandomCity(); // selects next city

    }

    else
    {
        tries--;

        ui->feedback->setText("Your guess was Incorrect!");
        ui->feedback->setStyleSheet("QLabel{\ncolor: rgb(255, 0, 0); \n}");

        //updates tries label
        QString tries_left;
        switch(tries)
        {
        case 3: tries_left = "♥ ♥ ♥"; break;
        case 2: tries_left = "♥ ♥"; break;
        case 1: tries_left = "♥"; break;
        default: tries_left = "";

        }
        ui->tries->setText("Tries: " + tries_left);

        if (tries <= 0)
        {
            QMessageBox::information(this, "Game Over", "Game over! Your score: " + QString::number(score));
            endGame();
        }
    }
}

void MainWindow::selectRandomCity()
{
    //error handling
    if (remainingCities.isEmpty())
        return;

    //pick a random city from the remainingCities list
    int randomIndex = QRandomGenerator::global()->bounded(remainingCities.size());
    currentCity = remainingCities.at(randomIndex);

    //remove the selected city from the list
    remainingCities.removeAt(randomIndex);

    //if no city is left in list (ie. last guess has been asked), reset list
    if(remainingCities.size() <= 0)
        remainingCities = cityButtons.keys();

    //update city and info labels to show current city and its info
    ui->city->setText(currentCity);
    ui->info->setText(cityInfo[currentCity]);
}


void MainWindow::endGame()
{
    //resets all city buttons
    for (auto i = cityButtons.begin(); i != cityButtons.end(); ++i) {
        QPushButton *button = i.value();

        button->setStyleSheet("QPushButton {\n    background-color: #d9990f;\n    border: 1px solid #a36b02;\n    border-radius: 5px;\n}\nQPushButton:hover {\n    background-color: #e6c41c; \n  border: 1px solid #a38802;\n}\nQPushButton:pressed {\n    background-color:#c7a20c; \n    border: 1px solid #997603;\n}\n");
        button->setEnabled(true);
    }

    //resets everything else
    score = 0;
    tries = 3;
    ui->score->setText("Score: 0");
    ui->tries->setText("Tries: ♥ ♥ ♥");
    ui->feedback->setText("");
    selectRandomCity(); //resets selection if game ends and all cities have not been guessed

    emit main_to_start();
    close();
}


void MainWindow::on_mainmenu_clicked()
{

    int reply = QMessageBox::question(this, "Quit to Main Menu?", "All of your progress will be lost", QMessageBox::Yes|QMessageBox::No);
    if(reply == QMessageBox::Yes)
        endGame();
}



void MainWindow::on_options_clicked()
{
    emit go_to_options();
}

void MainWindow::easychecked(bool checked)
{
    if(checked)
        easy = 1;
    else
        easy = 0;
}
