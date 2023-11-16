package pojo;

public class CandidatePOJO {
	private int candidateID;
	private String candidateName;
	private String candidateParty;
	private int votes;
	public CandidatePOJO() {
		super();
	}
	public CandidatePOJO(int candidateID, String candidateName, String candidateParty, int votes) {
		super();
		this.candidateID = candidateID;
		this.candidateName = candidateName;
		this.candidateParty = candidateParty;
		this.votes = votes;
	}
	@Override
	public String toString() {
		return "CandidatePOJO [candidateID=" + candidateID + ", candidateName=" + candidateName + ", candidateParty="
				+ candidateParty + ", votes=" + votes + "]";
	}
	public int getCandidateID() {
		return candidateID;
	}
	public void setCandidateID(int candidateID) {
		this.candidateID = candidateID;
	}
	public String getCandidateName() {
		return candidateName;
	}
	public void setCandidateName(String candidateName) {
		this.candidateName = candidateName;
	}
	public String getCandidateParty() {
		return candidateParty;
	}
	public void setCandidateParty(String candidateParty) {
		this.candidateParty = candidateParty;
	}
	public int getVotes() {
		return votes;
	}
	public void setVotes(int votes) {
		this.votes = votes;
	}
	
	

}
