PRAGMA foreign_keys=OFF;
BEGIN TRANSACTION;
CREATE TABLE estudiantes (id INTEGER PRIMARY KEY, nombre TEXT, materia TEXT);
INSERT INTO estudiantes VALUES(1,'Dani','Ingeniería Informática');
COMMIT;
