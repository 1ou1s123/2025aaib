/// week03-4.cpp
/// M90HO44 �ƨg�{�]���ॴ����,�|�ܶýX
/// �����K�� CodeBlocks �A�g����
#include <stdio.h>
int main()
{
    int ans = 0; ///���׮a�D�o�̭�
    ///�j��e�� ans �O 0
    int N; /// ���@�Ӿ��N
    scanf("%d", &N); ///Ū�J N
    /// �H�����j��, �q1�}�l, <=
    for (int i =1; i<=N; i++){
        ans += i; ///�j�餤�� �ק� ans
    }
    printf("%d",ans);
    }/// �j��᭱, �L�X ans

