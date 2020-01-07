package servlet;

import java.io.IOException;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import DB.DAO;

@WebServlet("/completet")
public class completet extends HttpServlet {
	private static final long serialVersionUID = 1L;
   
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		String tcd= request.getParameter("tcd");
		int res= 0;
		//tcd가 제대로 입력된 값인지 확인DAO
		res= DAO.chktcd(tcd);
		System.out.print(res);
		
		//if문을 이용해 걸러내기
		if(res<0) {
		//입력된값이 가짜일때 
			request.setAttribute("result", "false");
		}else {
		//입력값이 진짜일때
			res= DAO.completeT(tcd);
			request.setAttribute("result", "true");
		}
	
		request.setAttribute("target", "completetran");
		RequestDispatcher d= request.getRequestDispatcher("template.jsp");
		d.forward(request, response);
	
	}

	
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
