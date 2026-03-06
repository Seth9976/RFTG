// 函数名称: sub_5dc630
// 虚拟地址: 0x5dc630
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5dc630()
{
    // 第一条实际指令: HRESULT eax = CoInitialize(nullptr)
    HRESULT eax = CoInitialize(nullptr)
    int32_t eax_2 = neg.d(eax - 1)
    return sbb.d(eax_2, eax_2, eax != 1) & eax
}
