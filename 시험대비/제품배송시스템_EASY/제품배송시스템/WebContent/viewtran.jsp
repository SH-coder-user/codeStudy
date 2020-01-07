<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
     <%@page import='java.util.*,DB.DTO' %>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>Insert title here</title>
</head>
<body>
	
		<table>
			<tr>
				<td colspan=2 align=center><h2>배송조회</h2></td>
			</tr>
			
			<%List<DTO> list= (List)request.getAttribute("result");
				for(int i= 0 ;i<list.size();i++){
				DTO user= list.get(i);
				out.print("<tr><td>배송코드</td><td><input type=text readonly value="+user.getTcd()+"></td></tr>");
				out.print("<tr><td>회원이름</td><td><input type=text readonly value="+user.getCname()+"></td></tr>");
				out.print("<tr><td>제품명</td><td><input type=text readonly value="+user.getPname()+"></td></tr>");
				out.print("<tr><td>배송여부</td><td><input type=text readonly value="+user.getTdate()+"></td></tr>");
				out.print("<tr><td colspan=2 align=center>==================</td></tr>");
				} %>
				
			<tr>
				<td><input type=button onclick='location.href="gomain"'value='홈으로'></td>
			</tr>
		</table>
	
</body>
</html>