
	import numpy as np 
	import pandas as pd 	
	import matplotlib.pyplot as plt 
	import math

	def pre_processing(df):

		""" partioning data into features and target """

		X = df.drop([df.columns[-1]], axis = 1)
		y = df[df.columns[-1]]

		return X, y

	if __name__ == "__main__":

		#Weather Dataset
		print("\nWeather Dataset:")

		df = pd.read_table("weather.txt")

		#Split fearures and target
		X,y  = pre_processing(df)
class 
	def _calc_class_prior(self):

		""" P(c) - Prior Class Probability """

		for outcome in np.unique(self.y_train):
			outcome_count = sum(self.y_train == outcome)
			self.class_priors[outcome] = outcome_count / self.train_size
		print(self.class_priors)

	_calc_class_prior()

	def _calc_likelihoods(self):

		for feature in self.features:

			for outcome in np.unique(self.y_train):
				outcome_count = sum(self.y_train == outcome)
				feat_likelihood = self.X_train[feature][self.y_train[self.y_train == outcome].index.values.tolist()].value_counts().to_dict()

				for feat_val, count in feat_likelihood.items():
					self.likelihoods[feature][feat_val + '_' + outcome] = count/outcome_count


	def _calc_predictor_prior(self):

		for feature in self.features:
			feat_vals = self.X_train[feature].value_counts().to_dict()

			for feat_val, count in feat_vals.items():
				self.pred_priors[feature][feat_val] = count/self.train_size