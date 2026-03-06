// 函数名称: sub_4e0f80
// 虚拟地址: 0x4e0f80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_4e0f80(int32_t arg1, int32_t arg2, void* arg3)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    int32_t ecx
    eax, ecx = sub_54c2d0(*(arg3 + 0x48))
    int32_t* eax_1 = sub_54c4b0(ecx, eax)
    
    if (eax_1[0x3e0].b == 0)
        char** eax_2 = *eax_1
        sub_5349c0(eax_2, eax, &eax_1[1], eax_2)
        eax_1[0x3e0].b = 1
    
    if (*(sub_54c910(eax_1[1]) + 0x28) == 0)
        sub_4e0bb0()
        sub_4e0dd0()
        data_3078590 = arg1
        sub_4db6b0()
        return sub_4dbfd0(arg3)
    
    char result = sub_4e0e90(arg3)
    
    if (result == 0)
        sub_4e0bb0()
        result = sub_4e0dd0()
        data_3078590 = arg1
    
    data_3078594 += 1
    return result
}
