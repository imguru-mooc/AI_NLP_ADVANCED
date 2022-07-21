#if 1
#include <stdio.h>

class ST
{
	int kor, eng, math;
	double aver;

public:
	void input()
	{
		printf("국어 영어 수학 점수 입력:");
		scanf("%d %d %d", &kor, &eng, &math);
	}

	void calc()
	{
		aver = (kor + eng + math) / 3. ;
	}

	void output()
	{
		printf("%-8s %-8s %-8s %-8s\n", "국어", "영어", "수학", "평균");
		printf("=========================\n");
		printf("%-8d %-8d %-8d %-8.2lf\n", kor, eng, math, aver);
	}
};


int main()
{
	ST s;
	s.input();
	s.calc();
	s.output();

	return 0;
}

#endif
#if 0
#include <stdio.h>

class ST
{
	int kor, eng, math;
	double aver;

public:
	void input() ;
	void calc();
	void output();
};


int main()
{
	ST s;
	s.input();
	s.calc();
	s.output();

	return 0;
}

void ST::input()
{
	printf("국어 영어 수학 점수 입력:");
	scanf("%d %d %d", &kor, &eng, &math);
}

void ST::calc()
{
	aver = (kor + eng + math) / 3. ;
}

void ST::output()
{
	printf("%-8s %-8s %-8s %-8s\n", "국어", "영어", "수학", "평균");
	printf("=========================\n");
	printf("%-8d %-8d %-8d %-8.2lf\n", kor, eng, math, aver);
}
#endif

#if 0
#include <stdio.h>

typedef struct
{
	int kor, eng, math;
	double aver;

} ST;

void input( ST *s );
void calc( ST *s );
void output( ST *s );

int main()
{
	ST s;
	input( &s );
	calc( &s );
	output( &s );

	return 0;
}

void input( ST *s )
{
	printf("국어 영어 수학 점수 입력:");
	scanf("%d %d %d", &s->kor, &s->eng, &s->math);
}

void calc( ST *s )
{
	s->aver = (s->kor + s->eng + s->math) / 3. ;
}

void output( ST *s )
{
	printf("%-8s %-8s %-8s %-8s\n", "국어", "영어", "수학", "평균");
	printf("=========================\n");
	printf("%-8d %-8d %-8d %-8.2lf\n", s->kor, s->eng, s->math, s->aver);
}
#endif
#if 0
#include <stdio.h>

void input( int *kor, int *eng, int *math );
void calc( int kor, int eng,  int math, double *aver );
void output( int kor, int eng, int math, double aver );

int main()
{
	int kor, eng, math;
	double aver;

	input( &kor, &eng, &math );
	calc( kor, eng, math, &aver );
	output( kor, eng, math, aver );

	return 0;
}

void input( int *kor, int *eng, int *math )
{
	printf("국어 영어 수학 점수 입력:");
	scanf("%d %d %d", kor, eng, math);
}

void calc( int kor, int eng, int math, double *aver )
{
	*aver = (kor + eng + math ) / 2. ;
}

void output( int kor, int eng, int math, double aver )
{
	printf("%-8s %-8s %-8s %-8s\n", "국어", "영어", "수학", "평균");
	printf("=========================\n");
	printf("%-8d %-8d %-8d %-8.2lf\n", kor, eng, math, aver);
}
#endif
#if 0
#include <stdio.h>

void input( int *kor, int *eng );
void calc( int kor, int eng, double *aver );
void output( int kor, int eng, double aver );

int main()
{
	int kor, eng;
	double aver;

	input( &kor, &eng );
	calc( kor, eng, &aver );
	output( kor, eng, aver );

	return 0;
}

void input( int *kor, int *eng )
{
	printf("국어 영어 점수 입력:");
	scanf("%d %d", kor, eng);
}

void calc( int kor, int eng, double *aver )
{
	*aver = (kor + eng ) / 2. ;
}

void output( int kor, int eng, double aver )
{
	printf("%-8s %-8s %-8s\n", "국어", "영어", "평균");
	printf("=========================\n");
	printf("%-8d %-8d %-8.2lf\n", kor, eng, aver);
}
#endif

#if 0
#include <stdio.h>

void input( int *kor, int *eng )
{
	printf("국어 영어 점수 입력:");
	scanf("%d %d", kor, eng);
}

void calc( int kor, int eng, double *aver )
{
	*aver = (kor + eng ) / 2. ;
}

void output( int kor, int eng, double aver )
{
	printf("%-8s %-8s %-8s\n", "국어", "영어", "평균");
	printf("=========================\n");
	printf("%-8d %-8d %-8.2lf\n", kor, eng, aver);
}
int main()
{
	int kor, eng;
	double aver;

	input( &kor, &eng );
	calc( kor, eng, &aver );
	output( kor, eng, aver );

	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int kor, eng;
	double aver;

	printf("국어 영어 점수 입력:");
	scanf("%d %d", &kor, &eng);

	aver = (kor + eng ) / 2. ;

	printf("%-8s %-8s %-8s\n", "국어", "영어", "평균");
	printf("=========================\n");
	printf("%-8d %-8d %-8.2lf\n", kor, eng, aver);
	return 0;
}
#endif
