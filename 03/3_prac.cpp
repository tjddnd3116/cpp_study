#include "../std_lib_facilities.h"

int main(void)
{
	string first_name;
	string friend_name;
	char friend_sex;
	int age;

	cout << "편지 받을 사람의 이름을 입력하세요";
	cin >> first_name;
	cout << "친애하는" << first_name << "," << '\n';
	cout << "잘 지내시죠?" << '\n';
	cout << "다른 친구이름을 입력하세요" << '\n';
	cin >> friend_name;
	cout << "요즘" << friend_name << "만난 적 있으신가요?" << '\n';
	cout << "친구가 남자면 m, 여자면 f를 입력하세요" << '\n';
	cin >> friend_sex;
	if (friend_sex == 'm')
		cout << friend_name << "을 보시거든 그에게 저한테 전화해달라고 전해주세요" << '\n';
	if (friend_sex == 'f')
		cout << friend_name << "을 보시거든 그녀에게 저한테 전화해달라고 전해주세요" << '\n';
	cout << "편지 받을 사람의 나이는?" << '\n';
	cin >> age;
	if (age <= 0 || age >= 100)
		simple_error("장난치지 마세요!");
	else
	{
		cout << "얼마 전에" << age << "번째 생일을 맞으셨단 얘기를 들었어요" << '\n';
		if (age <= 12)
			cout << "내년에" << age + 1 << "살이 되겠군요" << '\n';
		else if (age == 17)
			cout << "내년에는 투표를 할 수 있겠네요" << '\n';
		else if (age >= 70)
			cout << "은퇴 후를 잘 즐기고 계시지요?" << '\n';
	}
	cout << "당신의 친구," << first_name << '\n' << '\n' << '\n';
}
