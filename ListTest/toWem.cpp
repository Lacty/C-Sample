
#include <iostream>
#include <list>


int main() {
  std::list<int> list;

  // 0,1,2......9
  for (int i = 0; i < 10; ++i) {
    list.emplace_back(i);
  }

  // ���g���o��
  for (auto it : list) {
    std::cout << it << std::endl;
  }

  // 5��������
  for (auto it : list) {
    if (it == 5) {
      // �G���[�łȂ����ǃR���p�C���G���[�֐��Ȃ̂ɃJ�b�R�Ȃ�������
      list.erase;

      // ������v���Ă˂�������
      list.erase();

      // ���ꂶ��˂�������
      list.erase(it);
    }
  }

  // �C�e���[�^���g���ď���(���l���m���Ă鏈���̈��)
  // �߂�ǂ��̂�auto���g��
  auto it = list.begin();    // �z��̐擪�̃C�e���[�^��n��(�擪�̃A�h���X)
  while (it != list.end()) { // it��list�̍Ō�̗v�f�ɂ��ǂ蒅���܂ŉ�
    if (*it == 5) {          // it�̓|�C���^�Ȃ̂�*�����Ē��g���Q�Ƃ���
      it = list.erase(it);   // list��it�Ԗڂ̗v�f������
    } else {
      ++it;                  // erase�֐��͏������v�f�̎��̃A�h���X��n���̂�
    }                        // erase�֐����g�p���Ă��Ȃ�while���̂݃A�h���X��i�߂鏈��������
  }

  // �v�f�������Ă��邩�m�F
  for (auto it : list) {
    std::cout << it << std::endl;
  }
}