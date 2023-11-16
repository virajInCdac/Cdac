package com.app.core;

public enum ServicePlan {
//	 enum
//	 ServicePlan charges : 
//	 SILVER : 1000 
//	 GOLD : 2000
//	 DIAMOND : 5000
//	 PLATINUM : 10000
	SILVER(1000), GOLD(2000), DIAMOND(5000), PLATINUM(10000);
	
	private float planCharge;
	private ServicePlan(int planCharge) {
		this.planCharge = planCharge;
	}
	@Override
	public String toString() {
		// TODO Auto-generated method stub
		return name().toLowerCase();
	}
	
}
