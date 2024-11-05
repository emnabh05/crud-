#include "produits.h"
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDebug>
#include <QtSql>
#include <QMessageBox>

// Updated constructor to use QDate for dateDebut
produits::produits(const QString& nomproduit, const QDate& dateExpiration, int quantiteDisponible, int humidite, int temperature, const QDate& dateDebut)
    : nomproduit(nomproduit), dateExpiration(dateExpiration), quantiteDisponible(quantiteDisponible), humidite(humidite), temperature(temperature), dateDebut(dateDebut)
{
}

produits::produits() {}

QSqlQueryModel* produits::afficherProduits() {
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM Produits");
    if (model->lastError().isValid()) {
        qDebug() << "Erreur requête:" << model->lastError().text();
    } else {
        qDebug() << model->rowCount() << " enregistrements trouvés";
    }

    return model;
}

// Supprimer produit
bool produits::supprimerProduits(int idproduit) {
    QSqlQuery query;
    query.prepare("DELETE FROM Produits WHERE idproduit = :idproduit");
    query.bindValue(":idproduit", idproduit);

    if (!query.exec()) {
        qDebug() << "Erreur lors de la suppression:" << query.lastError().text();
        return false;
    }
    return true;
}

// Modifier produit
bool produits::modifierProduits(int idproduit, const QString& nomproduit, const QDate& dateExpiration, int quantiteDisponible, int humidite, int temperature, const QDate& dateDebut) {
    QSqlQuery query;
    query.prepare("UPDATE Produits SET nomproduit = :nomproduit, dateExpiration = :dateExpiration, quantiteDisponible = :quantiteDisponible, "
                  "humidite = :humidite, temperature = :temperature, dateDebut = :dateDebut WHERE idproduit = :idproduit");

    query.bindValue(":idproduit", idproduit);
    query.bindValue(":nomproduit", nomproduit);
    query.bindValue(":dateExpiration", dateExpiration);
    query.bindValue(":quantiteDisponible", quantiteDisponible);
    query.bindValue(":humidite", humidite);
    query.bindValue(":temperature", temperature);
    query.bindValue(":dateDebut", dateDebut.toString("yyyy-MM-dd"));

    if (!query.exec()) {
        qDebug() << "Erreur lors de la mise à jour:" << query.lastError().text();
        return false;
    }
    return true;
}

// Retrouver liste de produits
QList<produits> produits::retrouverListProduits() {
    QList<produits> listeProduits;
    QSqlQuery query;

    if (query.exec("SELECT nomproduit, dateExpiration, quantiteDisponible, humidite, temperature, dateDebut FROM Produits")) {
        while (query.next()) {
            QString nomproduit = query.value(0).toString();
            QDate dateExpiration = QDate::fromString(query.value(1).toString(), "yyyy-MM-dd");
            int quantiteDisponible = query.value(2).toInt();
            int humidite = query.value(3).toInt();
            int temperature = query.value(4).toInt();
            QDate dateDebut = QDate::fromString(query.value(5).toString(), "yyyy-MM-dd"); // Convert QString to QDate

            listeProduits.append(produits(nomproduit, dateExpiration, quantiteDisponible, humidite, temperature, dateDebut));
        }
    } else {
        qDebug() << "Impossible de retrouver la liste des produits: " << query.lastError().text();
    }

    return listeProduits;
}

// Ajouter produit
bool produits::ajouterProduit(produits p) {
    QSqlQuery query;
    query.prepare("INSERT INTO Produits (nomproduit, dateDebut, dateExpiration, quantiteDisponible, humidite, temperature) "
                  "VALUES (:nomproduit, :dateDebut, :dateExpiration, :quantiteDisponible, :humidite, :temperature)");

    query.bindValue(":nomproduit", p.nomproduit);
    query.bindValue(":dateExpiration", p.dateExpiration);
    query.bindValue(":quantiteDisponible", p.quantiteDisponible);
    query.bindValue(":humidite", p.humidite);
    query.bindValue(":temperature", p.temperature);
    query.bindValue(":dateDebut", p.dateDebut.toString("yyyy-MM-dd"));

    if (!query.exec()) {
        qDebug() << "Erreur lors de l'insertion:" << query.lastError().text();
        return false;
    }
    return true;
}
