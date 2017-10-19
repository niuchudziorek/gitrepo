CREATE TABLE premia (
    id VARCHAR(20) PRIMARY KEY,
    PREMIA NUMERIC
);

CREATE TABLE dzial (
    id INTEGER PRIMARY KEY,
    nazwa VARCHAR(20),
    siedziba VARCHAR(20)
);

CREATE TABLE pracownicy (
    id VARCHAR(20) PRIMARY KEY,
    nazwisko VARCHAR(20),
    imie VARCHAR(20),
    stanowisko VARCHAR(20),
    data_zatrudnienia VARCHAR(23),
    placa NUMERIC,
    premia NUMERIC,
    id_dzial INTEGER,
    FOREIGN KEY(stanowisko) REFERENCES premia(id),
    FOREIGN KEY(id_dzial) REFERENCES dzial(id)
);
