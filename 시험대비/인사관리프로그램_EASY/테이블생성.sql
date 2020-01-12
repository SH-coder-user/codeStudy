create table personnel(
id char(2) not null,
name varchar2(30) not null,
dept varchar2(20) not null,
position char(1),
duty varchar2(20),
phone varchar2(14),
primary key(id))
--유니크나 프라이머리키는 중복 불가.--

commit;
insert into personnel values('95','박민우', '인사부','1','상무','010-1234-5678');
insert into personnel values('96','홍길동', '경리부','2','과장','010-3333-4444');
insert into personnel values('99','ddd', '경리부','2','과장','010-3333-4444');


select * from personnel where id ='95';
select * from personnel where dept ='경리부';

select max(id) from personnel;
delete personnel where id='99' and name='edd';
select * from personnel where id='99' and name='edd';