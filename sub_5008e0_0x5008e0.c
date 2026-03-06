// 函数名称: sub_5008e0
// 虚拟地址: 0x5008e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5008e0(void* arg1)
{
    // 第一条实际指令: char* const eax = *(arg1 + 4)
    char* const eax = *(arg1 + 4)
    
    if (eax == 0)
        eax = &data_83f3d3
    
    int32_t ecx
    int32_t var_4 = ecx
    int32_t result
    result.b = sub_5a957c(eax, &data_85f660) == 1
    return result
}
