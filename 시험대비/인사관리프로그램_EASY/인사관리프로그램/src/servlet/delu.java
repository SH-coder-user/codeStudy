package servlet;

import java.io.IOException;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import DB.DAO;

@WebServlet("/delu")
public class delu extends HttpServlet {

	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
				String name= request.getParameter("name");
				String id= request.getParameter("id");
				System.out.print("\n name = "+name+" id ="+id);
				int rs= DAO.delu(id,name);//삭제
				/*int rr = DAO.chk2(name,id);*///id,name체크
				System.out.print(rs);
				
				
				if(rs>0) {
					request.setAttribute("result", "true");
				}else {
					request.setAttribute("result", "false");
				}
				request.setAttribute("target", "results2");
				RequestDispatcher d = request.getRequestDispatcher("template.jsp");
				d.forward(request, response);
	}

	
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
