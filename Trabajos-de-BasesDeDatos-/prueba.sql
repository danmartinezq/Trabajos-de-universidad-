DROP TABLE IF EXISTS VEHICULO;
DROP TABLE IF EXISTS CONDUCTOR;
DROP TABLE IF EXISTS CLIENTE;

CREATE TABLE IF NOT EXISTS VEHICULO(
    id INTEGER PRIMARY KEY,
    nom VARCHAR(20),
    tipo VARCHAR(10),
    prec float,
    matric VARCHAR(7),
    cap INT
);
CREATE TABLE IF NOT EXISTS CONDUCTOR(
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
CREATE TABLE IF NOT EXISTS CLIENTE(
    id_clnt INTEGER PRIMARY KEY,
    id_veh INTEGER,
    ci_clnt NUMERIC(7),
    nom VARCHAR(20),
    apell VARCHAR(30),
    direc VARCHAR,
    tel NUMERIC,
    FOREIGN KEY(id_veh) REFERENCES VEHICULO(id_veh)
    );

INSERT INTO VEHICULO (
    nom, tipo, prec, matric, cap
) VALUES ( 'siuu', 'furgon', 35.45, 'eda1234', 10 );
INSERT INTO CONDUCTOR (
    ci_cond, nom, apll, tel, gmail, direc, id_veh
) VALUES ( 6389457, 'Rombulo', 'Sixseven', 0991234234, '@gydhhuhdhyh.com', 'calle 7', 1);

INSERT INTO CLIENTE (
    ci_clnt, nom, apell, direc, tel, id_veh
) VALUES ( 7654890, 'Erasio', 'xd', 'tt56', 0987456789, 1 );

INSERT INTO VEHICULO(
    nom, tipo, prec, matric, cap
    ) VALUES 
    ( 'kwid', 'sedan', 56.78, 'res345', 9),
    ( 'corsa', 'camioneta', 78.90, 'ttt678', 4),
    ('ggshh', 'g', 56.8, 'ttt888', 1);
    
INSERT INTO CONDUCTOR (
    ci_cond, nom, apll, tel, gmail, direc, id_veh
) VALUES 
    ( 5678000, 'sergio', 'Ramirez', 0926784, '@gjneuj.com', 'acista ñu',3 ),
    ( 572872, 'erase', 'Sixseven', 098572, '@hygty.com', 'cerro leon', 2);

UPDATE CONDUCTOR
SET apll = 'Martinez'
WHERE id_cond = 1;

UPDATE CLIENTE
SET nom = 'Daniel'
where id_clnt = 1;

DELETE FROM VEHICULO
WHERE id =4;

--SELECT * FROM VEHICULO WHERE nom= 'kwid';
--SELECT nom, id_veh FROM CONDUCTOR;
SELECT * FROM CONDUCTOR;
SELECT * FROM VEHICULO;
SELECT * FROM CLIENTE;
