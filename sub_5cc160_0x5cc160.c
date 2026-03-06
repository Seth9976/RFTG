// 函数名称: sub_5cc160
// 虚拟地址: 0x5cc160
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5cc160(void* arg1)
{
    // 第一条实际指令: char ecx = (*(arg1 + 0x30)).b
    char ecx = (*(arg1 + 0x30)).b
    
    if ((ecx & 1) != 0)
        return 0x80000000
    
    uint32_t eax_1 = zx.d(ecx) & 0x10
    int32_t eax_2 = neg.d(eax_1)
    int32_t result = (sbb.d(eax_2, eax_2, eax_1 != 0) & 0x7f360000) + 0xca0000
    
    if ((ecx & 0x20) == 0)
        return result
    
    return result | 0x50000
}
