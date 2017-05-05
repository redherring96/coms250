#ifndef SCORES_H
#define SCORES_H


class Scores {
	private:
		const int CLASS_SIZE = 5;
		double	classScores[CLASS_SIZE];
		double *dubPtr;
	public:
		Scores();
		Scores(double &);
		double getAverage();
		double sortScores();
};

#endif
