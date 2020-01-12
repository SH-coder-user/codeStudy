package servlet;

import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import DB.DAO;
import DB.DTO;

@WebServlet("/insachk")
public class insachk extends HttpServlet {
	private static final long serialVersionUID = 1L;
     
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		
				request.setCharacterEncoding("utf-8");  
			
				String chk = request.getParameter("chk");//사번, 부서명 확인
				String id= request.getParameter("id");//사번 벨류
				String dept= request.getParameter("dept");//부서명 벨류
			
				System.out.print("chk = " +chk+", id="+ id +"dept = "+dept);
				{
				System.out.print(dept);
				
				List<DTO> list = new ArrayList<DTO>();
					//아이디, 부서로 검색
				
					if(chk.equals("id")) {		
							//체크 벨류값이 id일때
							list = DAO.insachk(chk, id);
						
						}
					
						else if(chk.equals("dept")) {		
							//체크 벨류값이 dept일때
							list = DAO.insachk(chk,dept);
						}
					
					request.setAttribute("result", list);
					request.setAttribute("target", "rsinsa");
					RequestDispatcher d = request.getRequestDispatcher("template.jsp");
					d.forward(request, response);
			
	}
	}


	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
