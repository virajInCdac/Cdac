package dao;

import static utils.DBUtils.closeConnection;
import static utils.DBUtils.openConnection;

import java.sql.Connection;
import java.sql.Date;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;
import java.util.List;

import pojos.Candidate;
import pojos.User;

public class CandidateDaoImpl implements CandidateDao {
	private Connection cn;
	private PreparedStatement pst1, pst2;

	public CandidateDaoImpl() throws SQLException {
		// open cn
		cn = openConnection();
		// pst1 : to get all candidates
		pst1 = cn.prepareStatement("select * from candidates");
		pst2 = cn.prepareStatement("select * from users where email = ? and password=?");
		
		System.out.println("candidate dao created....");
	}

	@Override
	public List<Candidate> getAllCandidates() throws SQLException {
		// create empty List
		List<Candidate> candidates = new ArrayList<>();
		try (ResultSet rst = pst1.executeQuery()) {
			while (rst.next())
				candidates.add(new Candidate(rst.getInt(1), rst.getString(2), rst.getString(3), rst.getInt(4)));
		}
		return candidates;
	}

	public void cleanUp() throws SQLException {
		if (pst1 != null)
			pst1.close();
		closeConnection();
		System.out.println("candidate dao cleaned up....");
	}

	@Override
	public User authenticate(String email, String password) throws SQLException {
		// set in params ,exec query
		pst2.setString(1, email);
		pst2.setString(2, password);
		ResultSet rst= pst2.executeQuery();
		if(rst.next())
			//String uFirstName, String uLastName, String uEmail, String uPassword, Date uDOB
			return new User(rst.getString(2), rst.getString(3), rst.getString(4), rst.getString(5), Date.valueOf(rst.getDate(6).toString()));
		return null;
		
//		try (ResultSet rst = pst2.executeQuery()){
//			rst.
//		}
		//return null;
	}

}
