<%@page import="java.util.*,DB.DTO" %>
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>회원정보관리</title>
	<script type="text/javascript">
		function chk(){
			if(!ch.cid.value){
				alert("체크1");
				ch.cid.focus();
				return false;
			}
			if(!ch.cpw.value){
				alert("체크2");
				ch.cpw.focus();
				return false;
			}
			if(!ch.cname.value){
				alert("체크3");
				ch.cname.focus();
				return false;
			}
			if(!ch.cemail.value){
				alert("체크4");
				ch.cemail.focus();
				return false;
			}
			if(!ch.ctel.value){
				alert("체크5");
				ch.ctel.focus();
				return false;
			}
			return true;
		}
		
	
	
	</script>
		
		<%String rs = (String)request.getAttribute("rs");
			if(rs!=null){
				if(rs.equals("true")){%>
				<script>
					alert("등록이 완료 되었습니다.");
					location.href("gomain");
				</script>
				<%}else{%>
				<script>	
					alert("등록에 실패했습니다.");
					location.href("gomain");
				</script>
				<%}%>
		<%} else{%>
			<script>	
				location.href("goinput");
			</script>
		<%}%>
</head>
<body>
	<form action=inputc method="post" name=ch onsubmit='return chk()'>
		<table>
			<tr>
				<td><h3>회원 등록</h3></td>
			</tr>
			<tr>
				<td>아이디</td>
				<td><input type=text name=cid></td>
			</tr>
			<tr>
				<td>비밀번호</td>
				<td><input type=password name=cpw></td>
			</tr>
			<tr>
				<td>성명</td>
				<td><input type=text name=cname></td>
			</tr>
			<tr>
				<td>이메일</td>
				<td><input type=text name=cemail></td>
			</tr>
			<tr>
				<td>연락처</td>
				<td><input type=text name=ctel></td>
			</tr>
			<tr>
				<td><input type=submit value='등록'>
				<input type=button value='조회' onclick='location.href="viewall"'></td>
			</tr>
		</table>
	</form>
</body>
</html>