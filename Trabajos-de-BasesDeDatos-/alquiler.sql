PRAGMA foreign_keys=OFF;
BEGIN TRANSACTION;
CREATE TABLE VEHICULO(
    id INTEGER PRIMARY KEY,
    nom VARCHAR(20),
    tipo VARCHAR(10),
    prec float,
    matric VARCHAR(7),
    cap INT
);
INSERT INTO VEHICULO VALUES(1,'siuu','furgon',35.45,'eda1234',10);
INSERT INTO VEHICULO VALUES(2,'kwid','sedan',56.78,'res345',9);
INSERT INTO VEHICULO VALUES(3,'corsa','camioneta',78.9,'ttt678',4);
CREATE TABLE CONDUCTOR(
    id_cond INTEGER PRIMARY KEY,
    id_veh INTEGER,
    ci_cond NUMERIC(7),
    nom VARCHAR(20),
    apll VARCHAR(30),
    tel NUMERIC,
    gmail VARCHAR,
    direc VARCHAR,
    FOREIGN KEY(id_veh) REFERENCES VEHICULO(id)
    );
INSERT INTO CONDUCTOR VALUES(1,1,6389457,'Rombulo','Martinez',991234234,'@gydhhuhdhyh.com','calle 7');
INSERT INTO CONDUCTOR VALUES(2,3,5678000,'sergio','Ramirez',926784,'@gjneuj.com','acista ñu');
INSERT INTO CONDUCTOR VALUES(3,2,572872,'erase','Sixseven',98572,'@hygty.com','cerro leon');
CREATE TABLE CLIENTE(
    id_clnt INTEGER PRIMARY KEY,
    id_veh INTEGER,
    ci_clnt NUMERIC(7),
    nom VARCHAR(20),
    apell VARCHAR(30),
    direc VARCHAR,
    tel NUMERIC,
    FOREIGN KEY(id_veh) REFERENCES VEHICULO(id_veh)
    );
INSERT INTO CLIENTE VALUES(1,1,7654890,'Daniel','xd','tt56',987456789);
COMMIT;
