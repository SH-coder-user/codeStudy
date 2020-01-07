create table cst(
cid varchar2(10) not null,
cpw varchar2(10),
cname varchar2(20),
cemail varchar2(20),
ctel varchar2(14),
primary key (cid))

insert into cst values('eee','1234','ÃÖÈ¸¿ø','eee@korea.com','010-1111-1115');

create table tran(
tcd varchar2(10) not null,
cid varchar2(10) not null,
pcd varchar2(20) not null,
tdate date,
primary key(tcd))

insert into tran values('T01','aaa','P101','19/12/12');
insert into tran values('T02','ccc','P103','19/12/10');
insert into tran values('T03','eee','P101','');
insert into tran values('T04','bbb','P101','');
insert into tran values('T05','aaa','P102','');
insert into tran values('T06','aaa','P103','');

create table prd(
pcd varchar2(10) not null,
pname varchar2(20),
pcom varchar2(20),
primary key (pcd)
)

insert into prd values('P01','TV','»ï¼ºÀüÀÚ');
insert into prd values('P02','³ëÆ®ºÏ','¿¤ÁöÀüÀÚ');
insert into prd values('P03','ÅÂºí¸´','»ï¼ºÀüÀÚ');


commit;


select cname,tcd,pname,tdate from cst natural join tran natural join prd where pcd='P101';

update tran set tdate=sysdate where tcd='T01';

















