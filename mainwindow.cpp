#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "produits.h"
#include <QSqlQuery>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    produits p;
    ui->tableproduct->setModel(p.afficherProduits());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_bouttonajouter_clicked()
{
    produits p;

    QString nomproduit = ui->ajouternom->text();
    QDate dateExpiration = ui->ajouterexpiration->date();
    int quantiteDisponible = ui->ajouterquantitedisponible->text().toInt();
    QDate dateDebut = ui->ajouterdatedebut->date();  // QDate input
    int humidite = ui->ajouterhumidite->text().toInt();
    int temperature = ui->ajoutertemperature->text().toInt();

    p.setNomProduit(nomproduit);
    p.setDateExpiration(dateExpiration);  // Set QDate directly
    p.setQuantiteDisponible(quantiteDisponible);
    p.setHumidite(humidite);
    p.setTemperature(temperature);
    p.setDateDebut(dateDebut);  // Set QDate directly

    if (p.ajouterProduit(p)) {
        QMessageBox::information(this, "Succès", "Produit ajouté avec succès!");

        ui->ajouternom->clear();
        ui->ajouterexpiration->setDate(QDate::currentDate());
        ui->ajouterquantitedisponible->clear();
        ui->ajouterdatedebut->setDate(QDate::currentDate());
        ui->ajouterhumidite->clear();
        ui->ajoutertemperature->clear();

        ui->tableproduct->setModel(p.afficherProduits());

        qDebug() << "Produit ajouté avec succès!";
    } else {
        QMessageBox::critical(this, "Erreur", "Échec de l'ajout du produit.");
        qDebug() << "Échec de l'ajout dans la base";
    }
}

void MainWindow::on_pushButton_clicked()
{
    produits p;
    int idproduit = ui->idproduitmodif->text().toInt();

    QString nomproduit = ui->ajouternom_2->text();
    QDate dateExpiration = ui->ajouterexpiration_2->date();
    int quantiteDisponible = ui->ajouterquantitedisponible_2->text().toInt();
    QDate dateDebut = ui->ajouterdatedebut_2->date();
    int humidite = ui->ajouterhumidite_2->text().toInt();
    int temperature = ui->ajoutertemperature_2->text().toInt();

    if (p.modifierProduits(idproduit, nomproduit, dateExpiration, quantiteDisponible, humidite, temperature, dateDebut)) {
        qDebug() << "Produit modifié avec succès!";
        QMessageBox::information(this, "Succès", "Produit modifié avec succès!");

        ui->ajouternom_2->clear();
        ui->ajouterexpiration_2->setDate(QDate::currentDate());  // Reset date field
        ui->ajouterquantitedisponible_2->clear();
        ui->ajouterdatedebut_2->setDate(QDate::currentDate());  // Reset date field
        ui->ajouterhumidite_2->clear();
        ui->ajoutertemperature_2->clear();

        ui->tableproduct->setModel(p.afficherProduits());
    } else {
        QMessageBox::critical(this, "Erreur", "Échec de la modification.");
    }
}

void MainWindow::on_button_supprimer_clicked()
{
    produits p;
    int idproduit = ui->idsupprimer->text().toInt();

    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT COUNT(*) FROM Produits WHERE idproduit = :idproduit");
    checkQuery.bindValue(":idproduit", idproduit);

    if (!checkQuery.exec() || !checkQuery.next() || checkQuery.value(0).toInt() == 0) {
        QMessageBox::warning(this, "Produit introuvable", "Aucun produit trouvé avec cet ID.");
        return;
    }

    if (p.supprimerProduits(idproduit)) {
        qDebug() << "Produit supprimé avec succès!";
        QMessageBox::information(this, "Succès", "Produit supprimé avec succès!");

        ui->idsupprimer->clear();
        ui->tableproduct->setModel(p.afficherProduits());
    } else {
        QMessageBox::critical(this, "Erreur", "Échec de la suppression");
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    int idproduitmodif = ui->idproduitmodif->text().toInt();

    if (idproduitmodif <= 0) {
        QMessageBox::warning(this, "Erreur", "Veuillez entrer un ID produit valide.");
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT nomproduit, dateExpiration, quantiteDisponible, humidite, temperature, dateDebut "
                  "FROM Produits WHERE idproduit = :idproduit");
    query.bindValue(":idproduit", idproduitmodif);

    if (query.exec() && query.next()) {
        QString nomproduit = query.value("nomproduit").toString();
        QDate dateExpiration = QDate::fromString(query.value("dateExpiration").toString(), "yyyy-MM-dd");
        int quantiteDisponible = query.value("quantiteDisponible").toInt();
        int humidite = query.value("humidite").toInt();
        int temperature = query.value("temperature").toInt();
        QDate dateDebut = QDate::fromString(query.value("dateDebut").toString(), "yyyy-MM-dd");

        ui->ajouternom_2->setText(nomproduit);
        ui->ajouterexpiration_2->setDate(dateExpiration);  // Set QDate
        ui->ajouterquantitedisponible_2->setText(QString::number(quantiteDisponible));
        ui->ajouterhumidite_2->setText(QString::number(humidite));
        ui->ajoutertemperature_2->setText(QString::number(temperature));
        ui->ajouterdatedebut_2->setDate(dateDebut);  // Set QDate

    } else {
        QMessageBox::warning(this, "Produit introuvable", "Aucun produit trouvé avec cet ID.");
    }
}
