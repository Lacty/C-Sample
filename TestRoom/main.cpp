
#include <iostream>
#include <vector>


int main()
{
  /* �J��Ԃ�����(iteration) */
  int ary[5] = { 1, 2, 3, 4, 5 };
  for (int i = 0; i < 5; ++i){
    std::cout << ary[i] << std::endl;
  }

  /* �|�C���^���g�����J��Ԃ����� */
  for (int* it = ary; it < &ary[5]; ++it){
    std::cout << *it << std::endl;
  }

  /* �C�e���[�^���g�����J��Ԃ����� */
  std::vector<int> v = { 1, 2, 3, 4, 5 };
  for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it){
    std::cout << *it << std::endl;
  }
  /*
   * it < v.end()�@�ł͖����̂�
   * �C�e���[�^�[��<���Z�q�Ŕ�r�ł���Ƃ͌���Ȃ�����
  */


  /* �������炵���̂�C++11��for range���g�� */
  // �|�C���^(*it)�łȂ���OK
  for (auto it : v){
    std::cout << it << std::endl;
  }

  return 0;
}
