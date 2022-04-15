#include "../std_lib_facilities.h"

int main(void)
{
	// cout << "input first name" << endl;
	string first_name;
	string friend_name;
	char friend_sex;
	int age;
	// cin >> first_name;
	// cout << "hello " << first_name <<endl;
	cout << "편지 받을 사람의 이름을 입력하세요" << endl;
	cin >> first_name;
	cout << "친애하는 " << first_name << "," << endl;
	cout << "잘 지내시죠? 저는 잘 지냅니다. 보고 싶네요" << endl;
	cout << "다른 친구 이름을 입력하세요" << endl;
	cin >> friend_name;
	cout << "요즘 " << friend_name << " 만난 적 있으신가요?" << endl;
	cout << "친구의 성별은? [m] [f]" << endl;
	cin >> friend_sex;
	if (friend_sex == 'm')
		cout << friend_name << "을 보시거든 그에게 저한테 전화해달라고 전해주세요" << endl;
	else if (friend_sex == 'f')
		cout << friend_name << "을 보시거든 그녀에게 저한테 전화해달라고 전해주세요" << endl;
	cout << "편지 받을 사람의 나이는?" << endl;
	cin >> age;
	if (age < 0 || age > 100)
		simple_error("장난치지 마세요!");
	else
	{
		cout << "얼마전에 " << age << "번째 생일을 맞으셨단 얘기를 들었어요" << endl;
		if (age < 12)
			cout << "내년에 " << age + 1 << "살이 되겠군요" << endl;
		else if (age == 17)
			cout << "내년에는 투표를 할 수 있겠네요." << endl;
		else if (age >= 70)
			cout << "은퇴 후를 잘 즐기고 계시지요?" << endl;
	}
	cout << "당신의 친구, \n\n\n";


}
