CREATE TABLE NHACUNGCAP(
MANHA VARCHAR(20) ,-- NOT NULL PRIMARY KEY,--REFERENCES DANGKYCUNGCAP(MANHA),
TENNHA NVARCHAR(50),
DIACHI NVARCHAR(30),
SODT int not null,
MASOTHUE INT
);
 
 CREATE TABLE LOAIDICHVU(
 MALOAIDV VARCHAR(30) ,-- NOT NULL PRIMARY KEY ,--PRIMARY KEY REFERENCES DANGKYCUNGCAP(MALOAIDV),
 TENLOAIDV NVARCHAR(30),
 );

  CREATE TABLE DANGKYCUNGCAP(
  MADK VARCHAR(10),
  MANHA VARCHAR(20) ,--PRIMARY KEY,
  MALOAIDV NVARCHAR(30) ,--PRIMARY KEY,
  DONGXE VARCHAR(20) ,--PRIMARY KEY,
  MAMP VARCHAR(20),--PRIMARY KEY,
  NGAYBATDAUCUNGCAP DATE,
  NGAYKETTHUCCUNGCAP DATE,
  SOLUONGXEDANGKY INT
  );
   
  CREATE TABLE MUCPHI(
  MAMP VARCHAR(20) ,-- NOT NULL PRIMARY KEY,
  DONGIA FLOAT,
  MOTA NVARCHAR(30)
  );

  CREATE TABLE DONGXE(
  DONGXE VARCHAR(20) ,-- NOT NULL PRIMARY KEY,
  HANGXE NVARCHAR(30),
  SOCHONGOI INT
  );

DROP TABLE NHACUNGCAP;
DROP TABLE LOAIDICHVU;
DROP TABLE DANGKYCUNGCAP;
DROP TABLE MUCPHI;
DROP TABLE DONGXE;