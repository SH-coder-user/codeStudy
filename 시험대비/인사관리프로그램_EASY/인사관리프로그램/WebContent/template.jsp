<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>Insert title here</title>

	<style>
		button{
			width:150px;height:50px;font-size:15px;		
		}
	</style>
	<script>
		function exit(){
			self.close();
		}
	</script>
</head>
<body>
	<h1>인사관리 시스템</h1>
		<table>
			<tr>
				<td>
					인사관리 메인메뉴
				</td>	
			</tr>
			<tr>
				<td>
					<a href='goinsa'>
						<button>조회</button>
					</a>
					<a href='goinput'>
						<button>사원등록</button>
					</a>
					<a href='gochange'>
						<button>정보변경</button>
					</a>
				</td>
			</tr>
			<tr>
				<td>
					<a href='godel'>
						<button>퇴사처리</button>
					</a>
					
					<button onclick= 'exit()'>종료</button>
					
				</td>
			</tr>
						
		</table>
		
		<div>
				<jsp:include page="${target}.jsp"/>
		</div>
</body>
</html>