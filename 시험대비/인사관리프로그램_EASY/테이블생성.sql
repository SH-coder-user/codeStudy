create table personnel(
id char(2) not null,
name varchar2(30) not null,
dept varchar2(20) not null,
position char(1),
duty varchar2(20),
phone varchar2(14),
primary key(id))
--����ũ�� �����̸Ӹ�Ű�� �ߺ� �Ұ�.--

commit;
insert into personnel values('95','�ڹο�', '�λ��','1','��','010-1234-5678');
insert into personnel values('96','ȫ�浿', '�渮��','2','����','010-3333-4444');
insert into personnel values('99','ddd', '�渮��','2','����','010-3333-4444');


select * from personnel where id ='95';
select * from personnel where dept ='�渮��';

select max(id) from personnel;
delete personnel where id='99' and name='edd';
select * from personnel where id='99' and name='edd';