/*
	��ϰ3.27������txt_size��һ���޲����ĺ��������ķ���ֵʱint����ش������ĸ������ǷǷ��ģ�Ϊʲô��
*/

int txt_size()
{
	return 100;
}
int main()
{
	unsigned int buf_size = 1024;
	//int ia[buf_size];	// �Ƿ�������������Ϊ�����ά�ȡ�
	//int ia[4 * 7 - 14]; // �Ϸ���
	//int ia[txt_size()]; // �Ƿ���txt_size()�ķ���ֵ��int���ͣ���constexpr,������Ϊ�����ά��
	//char st[11] = "fundamental"; // �Ƿ��������ά��Ϊ11���ַ�������Ϊ12�������������ά�ȡ�
	return 0;
}