## 2주차 알고리즘

### 이해한 대로 써 놓은 것이기 때문에 틀릴 수 있음!!!

### P, NP, NP-hard, NP-complete 문제

![다이어그램](https://en.wikipedia.org/wiki/NP-completeness#/media/File:P_np_np-complete_np-hard.svg)
P=NP일 경우와, P!=NP일 경우 두 가지 모양으로 존재한다.
P=NP인지 아닌지는 아직 증명되지 못 했다.

#### P
다항 시간 안에 풀 수 있는 문제

#### NP
어떤 답안이 문제의 정답인지 다항 시간 안에 확인할 수 있는 문제

##### SAT 문제
Satisfiability Problem 이라고도 한다. 어떠한 변수들로 이루어진 논리식이 주어졌을 때, 그 논리식을 참으로 만들 수 있는 변수 조합이 존재하는지 판별하는 문제이다.
모든 NP 문제 이상으로 어렵다고 정해 놓은 문제. 즉 SAT 문제를 다항 시간 안에 해결할 수 있다면 모든 NP 문제들도 다항 시간 안에 해결될 수 있다.
SAT 문제는 NP-complete 문제라고 증명되어 있다.

#### 환산(reduction)
어떤 문제 A와 B가 있고 A를 푸는 방법을 알고 있을 때,
B를 A로 변환하는 과정을 뜻한다. 즉 A를 푸는 방법으로 B 역시 풀 수 있게 된다.
여기서 A 문제는 B 문제보다 어렵다.
B 문제를 A 문제 푸는 방법으로 풀거나 더 빠른 방법으로 풀 수 있을 가능성이 있기 때문이다. 

#### NP-hard
최소한 NP보다는 어려운 문제이다. 
"a problem H is NP-hard when every problem L in NP can be reduced in polynomial time to H"
해석하자면 NP 안의 모든 문제 L들이 H로 환산(reduction)될 수 있다면 H는 NP-hard문제이다. 즉 NP 안의 모든 문제들은 H로 환산되므로 H는 NP문제들보다 어렵다.
아직 NP-hard 문제를 다항 시간 안에 푸는 방법은 발견되지 못했다. 만약 이가 발견된다면 NP문제들은 모두 다항 시간안에 풀릴 수 있으며 P=NP가 증명된다.

#### NP-complete
NP-hard문제이면서 NP인 문제를 뜻한다. 즉 다항 시간안에 어떤 답안이 그 문제의 정답인지 판별할 수 있고 모든 NP문제를 이 문제로 환산할 수 있다. SAT가 유명한 NP-complete 문제 중 하나이다.