package dao;

import java.sql.SQLException;
import java.util.List;

import pojos.Candidate;
import pojos.User;

public interface CandidateDao {
//add a method to get all candidate details
	List<Candidate> getAllCandidates() throws SQLException;
	User authenticate(String email, String password) throws SQLException;
}
