package DB;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.util.ArrayList;
import java.util.List;

public class DAO {

	public static List<DTO> insachk(String name, String chk) {
		Connection con =null;
		PreparedStatement ps = null;
		ResultSet rs = null;
		String sql = "select * from personnel where "+name+"='"+chk+"'";
		/*System.out.print(sql+"\n");
		System.out.print("입력값 = "+name+"입력값2= "+chk+"\n");*/
		List<DTO> user = new ArrayList<DTO>();
		try {
			con= DBCon.getCon();
			ps = con.prepareStatement(sql);
			rs= ps.executeQuery();
			
				while(rs.next()) {
					DTO u = new DTO();
					u.setId(rs.getString(1));
					u.setName(rs.getString(2));
					u.setDept(rs.getString(3));
					u.setPosition(rs.getString(4));
					u.setDuty(rs.getString(5));
					u.setPhone(rs.getString(6));
					user.add(u);
				}
		}catch(Exception e) {
			e.printStackTrace();
		}finally {
			DBCon.close(con, ps, rs);
		}
		return user;
	}

	public static int input(DTO user) {
		Connection con =null;
		PreparedStatement ps = null;
		String sql= "insert into personnel values(?,?,?,?,?,?)";
		int rs = -1;
			try {
				con= DBCon.getCon();
				ps = con.prepareStatement(sql);				
				ps.setString(1, user.getId());
				ps.setString(2, user.getName());
				ps.setString(3, user.getDept());
				ps.setString(4, user.getPosition());
				ps.setString(5, user.getDuty());
				ps.setString(6, user.getPhone());
				
				ps.executeQuery();
				rs=1;	
			}catch(Exception e) {
				e.printStackTrace();
			}finally {
				DBCon.close(con, ps, null);
			}
			return rs;
	}

	public static DTO findmax() {
		DTO user= new DTO();
		Connection con =null;
		PreparedStatement ps = null;
		ResultSet rs = null;
		String sql = "select max(id) from personnel";
			try {
				con= DBCon.getCon();
				ps = con.prepareStatement(sql);
				rs =ps.executeQuery();	
					
					if(rs.next()) {						
					
						user.setId(rs.getString(1));
					
					}
				
			}catch(Exception e) {
				e.printStackTrace();
			}finally {
				DBCon.close(con, ps, rs);
			}
			return user;
	}

	public static int updateu(DTO se) {
			
				Connection con =null;
				PreparedStatement ps = null;
				int rs = -1;
				String sql = "update personnel set name=?,dept=?,position=?,duty=?,phone=? where id ='"+se.getId()+"'";
					try {
						con= DBCon.getCon();
						ps = con.prepareStatement(sql);
						ps.setString(1, se.getName());
						ps.setString(2, se.getDept());
						ps.setString(3, se.getPosition());
						ps.setString(4, se.getDuty());
						ps.setString(5, se.getPhone());						
						ps.executeUpdate();
						rs=1;
					}catch(Exception e) {
						e.printStackTrace();
					}finally {
						DBCon.close(con, ps, null);
					}
					return rs;
	}

	public static int delu(String id, String name) {
		int rs= -1;
		Connection con =null;
		PreparedStatement ps = null;	
		String sql = "delete personnel where id='"+id+"' and name='"+name+"'";
			try {
				con= DBCon.getCon();
				ps = con.prepareStatement(sql);
				rs= ps.executeUpdate();
			}catch(Exception e) {
				e.printStackTrace();
			}finally {
				DBCon.close(con, ps, null);
			}
		return rs;
	}

	public static int chk2(String name, String id) {
		int result = -1;
		Connection con =null;
		PreparedStatement ps = null;
		ResultSet rs = null;
		String sql = "select * from personnel where id='"+id+"' and name='"+name+"'";
			try {
				DTO user= new DTO();
				con= DBCon.getCon();
				ps = con.prepareStatement(sql);
				rs =ps.executeQuery();	
					
					if(rs.next()) {						
					
						user.setId(rs.getString(1));
						result=1;
					}
				
			}catch(Exception e) {
				e.printStackTrace();
			}finally {
				DBCon.close(con, ps, rs);
			}
			return result;
	}
	
	
}
