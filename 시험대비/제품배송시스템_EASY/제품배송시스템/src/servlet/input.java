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

@WebServlet("/inputc")
public class input extends HttpServlet {
	private static final long serialVersionUID = 1L;
  
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
	
		DTO user =new DTO();
		user.setCid(request.getParameter("cid"));
		System.out.print(request.getParameter("cid"));
		user.setCpw(request.getParameter("cpw"));
		user.setCname(request.getParameter("cname"));
		user.setCemail(request.getParameter("cemail"));
		user.setCtel(request.getParameter("ctel"));
		
		int rs= DAO.inputC(user);
			if(rs<0) {
				request.setAttribute("rs", "false");
				request.setAttribute("target", "input");
				RequestDispatcher d= request.getRequestDispatcher("template.jsp");
				d.forward(request, response);

			}else {
				request.setAttribute("rs", "true");
				request.setAttribute("target", "input");
				RequestDispatcher d= request.getRequestDispatcher("template.jsp");
				d.forward(request, response);

			}
	}

	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		doGet(request, response);
	}

}
