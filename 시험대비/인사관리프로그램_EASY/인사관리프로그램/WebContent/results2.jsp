<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" import="java.util.*,DB.DTO"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>Insert title here</title>
</head>
<body>
	<%String result= (String)request.getAttribute("result");
		if(result.equals("false")){
	%>
		<script type="text/javascript">
			alert("일치하는 사원번호가 없거나 입력오류입니다.")
			history.go(-1);
		</script>
		
<%		} else if(result.equals("true")) { %>
			
		<script type="text/javascript">
			alert("정보삭제 완료.")
			location.href("index.jsp");
		</script>
			
<%		} %>
</body>
</html>