/*
��蕶
���ԏꂪ����A�ȉ��̓��ނ̃v�����̂ǂ��炩��I��Œ��Ԃł��܂��B
�v���� 1 : T ���Ԓ��Ԃ����ꍇ�AA�~T �~�����ԗ����ƂȂ�B
�v���� 2 : ���Ԃ������ԂɊւ�炸 B �~�����ԗ����ƂȂ�B
N ���Ԓ��Ԃ���Ƃ��A���ԗ����͍ŏ��ł�����ɂȂ邩���߂Ă��������B
*/

#include<iostream>
#include<algorithm>

int main() {
	int n, a, b;

	std::cin >> n >> a >> b;

	std::cout << std::min(n*a, b) << std::endl;

	return 0;
}