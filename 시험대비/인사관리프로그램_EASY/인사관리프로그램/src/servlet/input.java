package servlet;

import java.io.IOException;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import DB.DAO;
import DB.DTO;

@WebServlet("/input")
public class input extends HttpServlet {

	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
				DTO user =new DTO();
					user.setId(request.getParameter("id"));
					user.setName(request.getParameter("name"));
					user.setDept(request.getParameter("dept"));
					
					
					
					/*입력값 확인용.
					 * System.out.print(request.getParameter("dept"));
					System.out.print(request.getParameter("position"));*/
					
					String pos= request.getParameter("position");
					if(pos.equals("1급")) {
						
						user.setPosition("1");
					}else if(pos.equals("2급")){
						
						user.setPosition("2");
					}
					user.setDuty(request.getParameter("duty"));
					user.setPhone(request.getParameter("phone"));
				
				int rs = 0;
				rs= DAO.input(user);
				System.out.print("\n 결과값"+rs+"\n");
				if(rs<0) {
					request.setAttribute("result", "false");
				}else {
					request.setAttribute("result", "true");
				}
				request.setAttribute("target", "inputu");
				RequestDispatcher d = request.getRequestDispatcher("template.jsp");
				d.forward(request, response);
			
	}

	
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
